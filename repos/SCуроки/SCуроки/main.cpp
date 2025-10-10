#include<iostream>
#include<fstream>
using namespace std;

//void not_a_null(int value)
//{
//	if (value == 0)
//	{
//		//throw "����";		// throw �� ������(��� try/catch) ������ ���������
//		throw exception("����� ����");
//	}
//	cout << "���������� = " << value << endl;
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
//		cout << "���� ������� ������ " << ex.what() << endl;
//	}
//	
//	return 0;
//}

//��������� ������ catch

//void Foo(int value)
//{
//	if (value == 0)
//	{
//		throw "����� ����";
//	}
//	if (value < 0)
//	{
//		throw exception("����� ������ 0");
//	}
//	if (value == 1)
//	{
//		throw 1;
//	}
//	cout << "���������� = " << value << endl;
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
//		cout << "���� 1 ������ " <<ex.what()<< endl;
//	}
//	catch(const char *ex)
//	{
//		cout << "���� 2 ������ " << ex << endl;
//	}
//	catch (...)
//	{
//		cout << "���-�� ����� �� ���!" << endl;
//	}
//
//	return 0;
//}

//���� exception

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
//		throw exception("����� ������ 0!");
//	}
//	if (value == 1)
//	{
//		throw MyException("����� = 1",value);
//	}
//	cout << "���������� = " << value << endl;
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
//		cout << "������� " << ex.what() << endl;
//		cout << "��������� ������ " << ex.GetDataState() << endl;
//	}
//	return 0;
//}

//������������� ��� enum

//class PC
//{
//public:
//
//	enum PCState
//	{
//		OFF,			// ��������� ��� �� ���� � ���������������
//		ON,
//		SLEEP
//	};
//
//	//bool state; //����� ��� ���� ���������
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
//	MIN = 150,				//����� ��������� ������ ����� �����
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
//	//����� ������ ������ ���
//	/*if (pc.GetState() == PCState::ON)
//	{
//		cout << "PC ��������!" << endl;
//	}*/
//	
//	//��� ���
//	switch (pc.GetState())
//	{
//	case PC::PCState::OFF:
//		cout << "��������!" << endl;
//		break;
//	case PC::PCState::ON:
//		cout << "�������!" << endl;
//		break;
//	case PC::PCState::SLEEP:
//		cout << "����!" << endl;
//		break;
//	}
//
//	Speed sp = Speed::MAX;
//	cout << sp << endl;
//
//	return 0;
//}

//������������ ���

//namespace firstNsmeSpace
//{
//	void Foo()
//	{
//		cout << "������� 1" << endl;
//	}
//}
//namespace secondNameSpace
//{
//	void Foo()
//	{
//		cout << "������� 2" << endl;
//	}
//}
//
//namespace doubleNameSpace
//{
//	namespace firstNameSpace
//	{
//		void Foo()
//		{
//			cout << "������� � ������������ ��� � ������������ ���" << endl;
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

//������� �������

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
//	MyClass<int> a(b);		// ���� ��������� ��� ������ ��� ������ � ��������� �������
//	a.foo();
//	return 0;
//}

//����� auto

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

//������������ ��������� �������

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
class TypeInfo : public TypeSize<T1>		//����� � ����� ���������� �� ���� 
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
