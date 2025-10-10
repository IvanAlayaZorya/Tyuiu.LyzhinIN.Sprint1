#include<Windows.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void consoleClr()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD count;
	DWORD cellCount;
	COORD homeCoord = { 0,0 };

	if (hStdOut == INVALID_HANDLE_VALUE) return;
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X * csbi.dwSize.Y;
	if (!FillConsoleOutputCharacter(hStdOut, ' ', cellCount, homeCoord, &count)) return;
	if (!FillConsoleOutputAttribute(hStdOut, FOREGROUND_GREEN, cellCount, homeCoord, &count)) return;

	SetConsoleCursorPosition(hStdOut, homeCoord);
}

class Field
{
public:
	Field(int _Xsize, int _Ysize,char symbol)
	{
		Xsize = _Xsize;
		Ysize = _Ysize;

		mesh.resize(Ysize);
		for (int i = 0; i < Ysize; i++)
		{
			mesh[i].resize(Xsize);
			for (int j = 0; j < Xsize; j++)
			{
				mesh[i][j] = symbol;
			}
		}
	}

	void put(int x,int y,char whatPut)
	{
		mesh[x][y] = whatPut;
	}

	void show()
	{
		for (int i = 0; i < Ysize; i++)
		{
			for (int j = 0; j < Xsize; j++)
			{
				cout<<mesh[i][j]<<"  ";
			}
			cout << endl;
		}
	}
private:
	int Xsize = 0;
	int Ysize = 0;
	vector <vector<char>> mesh;
};

class Movement
{
public:
	virtual void move() = 0;
};

class Entity : public Movement
{
public:
	Entity(char whatAmI,int x,int y)
	{
		entityChar = whatAmI;
		this->x = x;
		this->y = y;
	}  

	void move() override
	{
		bool running = true;
		while (running) {
			if (GetAsyncKeyState(VK_ESCAPE) < 0) {
				running = false; // Выход по клавише ESC
				cout<<
			}

			if (GetAsyncKeyState(0x57) < 0) { // W
				std::cout << "Перемещение вверх" << std::endl;
			}

			if (GetAsyncKeyState(0x41) < 0) { // A
				std::cout << "Перемещение влево" << std::endl;
			}

			if (GetAsyncKeyState(0x53) < 0) { // S
				std::cout << "Перемещение вниз" << std::endl;
			}

			if (GetAsyncKeyState(0x44) < 0) { // D
				std::cout << "Перемещение вправо" << std::endl;
			}

			// Задержка для предотвращения слишком частого опроса клавиш
			Sleep(500);
		}
	}

private:
	char entityChar= '+';
	int x = 0;
	int y = 0;
};

int main()
{
	//Field mainfield(20,20,'_');		//создание поля

	//mainfield.show();				//показываем поле

	//mainfield.put(10, 10, '0');		//меняем один символ поля

	//consoleClr();					//очистка поля
	//mainfield.show();

	Entity en('L', 10, 10);
	en.move();

	
	return 0;
}