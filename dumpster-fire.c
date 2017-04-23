#include <windows.h>

int WinMain(HINSTANCE hInstance,
            HINSTANCE hPrevInstance,
            LPTSTR    lpCmdLine,
            int       nCmdShow)
{
	DWORD flags = SHERB_NOCONFIRMATION | SHERB_NOPROGRESSUI | SHERB_NOSOUND;
	SHEmptyRecycleBin(NULL, NULL, flags);
	return 0;
}
