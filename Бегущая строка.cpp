#include <tchar.h>
#include <Windows.h>

VOID CALLBACK TimerProc(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime);
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
INT WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR szCmdLine, INT nCmdShow)
{
	TCHAR szClassWindow[] = L"Бегущая строка...   ";

	WNDCLASSEX wc = {};
	wc.cbClsExtra = 0;
	wc.cbSize = sizeof(wc);
	wc.cbWndExtra = 0;
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = hInstance;
	wc.lpfnWndProc = WindowProcedure;
	wc.lpszClassName = szClassWindow;
	wc.lpszMenuName = NULL;
	wc.style = CS_HREDRAW | CS_VREDRAW;

	INT nExitCode = 0;

	if (RegisterClassEx(&wc))
	{
		HWND hWindow = CreateWindowEx(0, szClassWindow, szClassWindow,
			WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL,
			NULL, hInstance, NULL);

		ShowWindow(hWindow, nCmdShow);
		UpdateWindow(hWindow);

		MSG message = {};
		SetTimer(hWindow, 1, 100, TimerProc);
		while (GetMessage(&message, NULL, 0, 0))
		{
			TranslateMessage(&message);
			DispatchMessage(&message);
		}

		nExitCode = message.wParam;
	}

	return nExitCode;
}

VOID CALLBACK TimerProc(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime)
{
	TCHAR oldTitle[20];
	TCHAR newTitle[20];
	GetWindowText(hwnd, oldTitle, 20);
	for (int i = 0; i < 20; i++)
		newTitle[i] = oldTitle[i + 1];
	newTitle[18] = oldTitle[0];
	newTitle[19] = '\0';
	SetWindowText(hwnd, newTitle);

}

LRESULT CALLBACK WindowProcedure(HWND hWindow, UINT nMessage, WPARAM wParam, LPARAM lParam)
{
	switch (nMessage)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return  DefWindowProc(hWindow, nMessage, wParam, lParam);
		break;
	}
}
