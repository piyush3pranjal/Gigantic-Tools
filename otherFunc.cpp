#include "otherFunc.h"
#include <Windows.h>

void consoleArrangemnt()
{
	HWND console = GetConsoleWindow();

	// Positioning the Console.
	SetWindowPos(console, 0, 400, 80, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

	RECT r;

	// Resizing the Console.
	GetWindowRect(console, &r); //stores the console's current dimensions

	MoveWindow(console, r.left, r.top, 530, 600, TRUE); // width, height

}