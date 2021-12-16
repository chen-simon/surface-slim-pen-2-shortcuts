#include <iostream>
#include <WinUser.h>
#include <Windows.h>

using namespace std;

void Run_in_Background(int visibility)
{
    HWND window; //defines a handle to a window
    window = FindWindowA("ConsoleWindowClass",NULL); //returns the handle of the current window
    ShowWindow(window, visibility); //if visibility=0, then it runs in the background. If not, then the window shows.
}

int main() {
    Run_in_Background(0);
    // Switch back to adobe animate
    HWND hWnd = ::FindWindow(NULL, L"Adobe Animate 2020");
    if (hWnd) {
        // move to foreground
        ::SetForegroundWindow(hWnd);
    }
    // Send the undo
    system("undo.vbs");

    return 0;
}