#include<iostream>
#include<fstream>
using namespace std;

//void not_a_null(int value)
//{
//	if (value == 0)
//	{
//		//throw "Ноль";		// throw на голяке(без try/catch) руинит программу
//		throw exception("Число ноль");
//	}
//	cout << "Переменная = " << value << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	try
//	{
//		not_a_null(0);
//	}
//	catch (const exception &ex)
//	{
//		cout << "Дичь поймана милорд " << ex.what() << endl;
//	}
//	
//	return 0;
//}

//Несколько блоков catch

//void Foo(int value)
//{
//	if (value == 0)
//	{
//		throw "Число ноль";
//	}
//	if (value < 0)
//	{
//		throw exception("Число меньше 0");
//	}
//	if (value == 1)
//	{
//		throw 1;
//	}
//	cout << "Переменная = " << value << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	try
//	{
//		Foo(1);
//	}
//	catch (exception& ex)
//	{
//		cout << "Блок 1 поймал " <<ex.what()<< endl;
//	}
//	catch(const char *ex)
//	{
//		cout << "Блок 2 поймал " << ex << endl;
//	}
//	catch (...)
//	{
//		cout << "Что-то пошло не так!" << endl;
//	}
//
//	return 0;
//}

//Свой exception

//class MyException:public exception
//{
//public:
//	MyException(const char* msg,int dataState) :exception(msg)
//	{
//		this->dataState = dataState;
//	}
//	int GetDataState()
//	{
//		return dataState;
//	}
//private:
//	int dataState;
//};
//
//void Foo(int value)
//{
//	if (value < 0)
//	{
//		throw exception("Число меньше 0!");
//	}
//	if (value == 1)
//	{
//		throw MyException("Число = 1",value);
//	}
//	cout << "Переменная = " << value << endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	try
//	{
//		Foo(1);
//	}
//	catch(MyException &ex)
//	{
//		cout << "Поймано " << ex.what() << endl;
//		cout << "Состояние данных " << ex.GetDataState() << endl;
//	}
//	return 0;
//}

//Перечисляемый тип enum

//class PC
//{
//public:
//
//	enum PCState
//	{
//		OFF,			// Нумерация идёт от нуля и последовательно
//		ON,
//		SLEEP
//	};
//
//	//bool state; //пойдёт для двух состояний
//	PCState GetState() { return State; }
//	void SetState(PCState State)
//	{
//		this->State = State;
//	}
//private:
//	PCState State;
//
//};
//
//
//enum Speed
//{
//	MIN = 150,				//Можно присвоить именам любые числа
//	RECOMEND=600,
//	MAX = 800
//};
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	PC pc;
//	
//	pc.SetState(PC::PCState::ON);
//
//	//Можно теперь делать так
//	/*if (pc.GetState() == PCState::ON)
//	{
//		cout << "PC работает!" << endl;
//	}*/
//	
//	//Или так
//	switch (pc.GetState())
//	{
//	case PC::PCState::OFF:
//		cout << "Выключен!" << endl;
//		break;
//	case PC::PCState::ON:
//		cout << "Включён!" << endl;
//		break;
//	case PC::PCState::SLEEP:
//		cout << "Спит!" << endl;
//		break;
//	}
//
//	Speed sp = Speed::MAX;
//	cout << sp << endl;
//
//	return 0;
//}

//Пространства имён

//namespace firstNsmeSpace
//{
//	void Foo()
//	{
//		cout << "Функция 1" << endl;
//	}
//}
//namespace secondNameSpace
//{
//	void Foo()
//	{
//		cout << "Функция 2" << endl;
//	}
//}
//
//namespace doubleNameSpace
//{
//	namespace firstNameSpace
//	{
//		void Foo()
//		{
//			cout << "Функция в пространстве имён в пространстве имён" << endl;
//		}
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	firstNsmeSpace::Foo();
//	secondNameSpace::Foo();
//	doubleNameSpace::firstNameSpace::Foo();
//	
//	return 0;
//}

//Шаблоны классов

//class Point
//{
//public:
//	Point()
//	{
//		x = y = z = 0;
//	}
//	Point(int x, int y, int z)
//	{
//		this->x = x;
//		this->y = y;
//		this->z = z;
//	}
//	int x;
//	int y;
//	int z;
//
//};  
//
//template <typename T>
//class MyClass
//{
//public:
//	MyClass(T value)
//	{
//		this->value = value; 
//	}
//	void foo()
//	{
//		cout << sizeof(value) << endl;
//	}
//private:
//	T value;
//};
//
//int main()
//{
//	int b = 5;
//	MyClass<int> a(b);		// Надо указывать тип данных при работе с шаблонами классов
//	a.foo();
//	return 0;
//}

//Проба auto

//#include<vector>
//#include<map>
//int main()
//{
//	
//	map<string, vector<int>> map;
//	for (auto it = begin(map);it != end(map);it++)
//	{
//
//	}
//
//	return 0;
//}

//Наследование шаблонных классов

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	int x;
	int y;
	int z;
	
};  

template <typename T1>
class TypeSize
{
public:
	TypeSize(T1 value)
	{
		this->value = value; 
	}
	void DataSize()
	{
		cout << "Value size is: " << sizeof(value) << endl;
	}
protected:
	T1 value;
};

template<class T1>
class TypeInfo : public TypeSize<T1>		//Можно и жёстко ограничить по типу 
{
public:
	TypeInfo(T1 value) :TypeSize<T1>( value)
	{

	}
	void ShowTypeName()
	{
		cout << "Data type is: " << typeid(TypeSize<T1>::value).name() << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	double a = 2.0;
	int g = 10;
	Point p;

	TypeInfo<Point> c(p);
	c.DataSize();
	c.ShowTypeName();
	return 0;
}
