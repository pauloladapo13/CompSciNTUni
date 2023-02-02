#include<iostream>
using namespace std;

int main()
{

	int a = 7;
	float b = 3.4;
	double c = 4.567;
	string str = "hello";
	char t = 'g';
	int myList[5];
	int end;

	cout << "...........Start ......" << endl;

	cout << "integer a = " << a << "  pointer: " << &a << "  length: "<< sizeof(a) <<  endl;
	cout << "float b = " << b << "  pointer: " << &b << "  length: " << sizeof(b) << endl;
	cout << "double c = " << c << "  pointer: " << &c << "  length: " << sizeof(c) << endl;
	cout << "string str = " << str << "  pointer: " << &str << "  length: " << sizeof(str) << endl;
	cout << "char t = " << t << "  pointer: " << &t << "  length: " << sizeof(t) << endl;
	cout << "array myList = " << myList << "  pointer: " << &myList << "  length: " << sizeof(myList) << endl;
	cout << "int end = " << end << "  pointer: " << &end << "  length: " << sizeof(end) << endl;

	cout << ".........End............" << endl;

}