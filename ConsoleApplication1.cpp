// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int, int);

int main()
{
	int a, b;
	cout << "Please enter 2 integer" << endl;
	cin >> a >> b ;
	swap(a, b);
	return 0;
}

void swap(int a, int b)
{
	int x, y;
	cout << "\nYour first integer is ";
	cout << a << endl;
	cout << "Your second integer is ";
	cout << b << endl << endl;

    x=a;
	y = b;

	cout << "After swap the value of first integer now is " << y << endl;
	cout << "After swap the value of second integer now is " << x << endl << endl;
}