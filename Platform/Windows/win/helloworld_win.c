#include <windows.h>
#include <tchar.h>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch(message)
    {
        case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            HGDIOBJ original = NULL;
            RECT rect = { 10, 10, 200, 300 };
            original = SelectObject(hdc,GetStockObject(DC_PEN));
            SelectObject(hdc, GetStockObject(BLACK_PEN));
            SelectObject(hdc, GetStockObject(DC_PEN));
            SelectObject(hdc, GetStockObject(DC_BRUSH));
            SetDCBrushColor(hdc, RGB(255,0,0));
            SetDCPenColor(hdc, RGB(0,0,255));
            SetDCBrushColor(hdc, RGB(0,255,0));
            Rectangle(hdc,300,150,500,300);
            EndPaint(hWnd, &ps);
        }
        break;
        case WM_DESTROY:
        {
            PostQuitMessage(0);
            return 0;
        }
        break;
    }
    return DefWindowProc(hWnd, message, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPTSTR lpCmdLine,
                   int nCmdShow)
{
    HWND hWnd;
    WNDCLASSEX wc;
    ZeroMemory(&wc, sizeof(WNDCLASSEX));

    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.lpszClassName = _T("WindowClass");

    RegisterClassEx(&wc);

    hWnd = CreateWindowEx(0, _T("WindowClass"), _T("Our First Windowed Program"),
     WS_OVERLAPPEDWINDOW, 300, 300, 500, 400, NULL, NULL, hInstance, NULL);
    
    ShowWindow(hWnd, nCmdShow);

    MSG msg;

    while(GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;
}