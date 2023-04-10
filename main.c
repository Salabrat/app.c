#include <windows.h>
#include <stdio.h>

int main() {
    WIN32_FIND_DATA findData;
    HANDLE hFind;

    // Получение имени текущего каталога
    TCHAR currentDirectory[MAX_PATH];
    GetCurrentDirectory(MAX_PATH, currentDirectory);

    // Формирование шаблона поиска для текущего каталога
    TCHAR searchPattern[MAX_PATH];
    sprintf(searchPattern, "%s\\*", currentDirectory);

    // Поиск первого файла
    hFind = FindFirstFile(searchPattern, &findData);
    if (hFind == INVALID_HANDLE_VALUE) {
        printf("Failed to find files.\n");
        return 1;
    }

    // Вывод списка файлов
    do {
        if (findData.dwFileAttributes != FILE_ATTRIBUTE_DIRECTORY) {
            printf("%s\n", findData.cFileName);
        }
    } while (FindNextFile(hFind, &findData));

    // Освобождение ресурсов
    FindClose(hFind);

    return 0;
}
