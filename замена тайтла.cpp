#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{

TCHAR ClassWindow[] = TEXT("Calc");
TCHAR TitleWindow[] = TEXT("Калькулятор");
TCHAR NewTitle[] = TEXT("Не калькулятор");
HWND Win = FindWindow(ClassWindow, TitleWindow);

if (wind)
SetWindowText(Win, NewTitle);
}
