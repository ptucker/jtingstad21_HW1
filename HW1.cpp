// HW1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

// EX01: a = CPU
//		 b = RAM
//		 c = i (disk)
//		 d = iv (binary digit)
//		 e = address
//		 f = 8
//		 g = iv
//		 h = ii


void ex02();
void ex03();
void ex04();
void ex05();
int doublenum(int n1);
int add(int, int);
int plusOne(int& n1);
void arrayFunction(int array2[], int size);
void arrayFunction2(int array3[], int sz);


int main()
{
	//ex02();
	//ex03();
	//ex04();
	ex05();

    return 0;
}

void ex02()
{
	bool hasPassedTest = true;
	

	int x, y;
	srand(time(0));
	x = rand() % 100;
	y = rand() % 100;
	if (x > y)
		cout << x << " > " << y << endl;
	else if (x == y)
		cout << x << " = " << y << endl;
	else
		cout << x << " < " << y << endl;


	int numberOfShares;
	cout << "Enter # of shares " << endl;
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "the value you entered is less than 100 " << endl;
	else
		cout << "the value you entered is greater than 100" << endl;


	int boxWidth, bookLength;
	cout << "Enter box width: " << endl;
	cin >> boxWidth;
	cout << "Enter book length: " << endl;
	cin >> bookLength;

	if (boxWidth % bookLength == 0)
		cout << "Evenly divisible! " << endl;
	else
		cout << "Not evenly divisible" << endl;


	int shelfLife;
	double temp;
	cout << "Enter shelf life of chocolate" << endl;
	cin >> shelfLife;
	cout << "Enter outside temperature" << endl;
	cin >> temp;
	if (temp > 90)
	{
		shelfLife = shelfLife - 4;
		cout << "shelf life of chocolate = " << shelfLife << endl;
	}
	else
		cout << "shelf life of chocolate = " << shelfLife << endl;

}

void ex03()
{
	int areaSquare;
	double diagonal;
	cout << "enter the area of a square: " << endl;
	cin >> areaSquare;
	diagonal = sqrt(areaSquare) * sqrt(2);
	cout << "diagonal = " << diagonal << endl << endl;


	char response;
	cout << "do you like the Mariners? Y/N " << endl;
	cin >> response;
	if (response == 'y' || response == 'Y')
		cout << "Yes!" << endl;
	else
		cout << "No" << endl;


	char tab = '\t';
	cout << "Char tab = " << tab << endl;

	string mailingAddress;
	cin.ignore();
	cout << "Enter mailing address: " << endl;
	getline(cin, mailingAddress);
	cout << "mailing address: " << mailingAddress;

	string none = "";

}

void ex04()
{
	int choice;
	cout << "enter a number between 1 and 10" << endl;
	cin >> choice;
	while (choice < 1 || choice > 10)
	{
		cout << "Invalid choice, choose again" << endl;
		cin >> choice;
	}
	int cubes = 0;
	for (int i = 0; i <= choice; i++)
	{
		cubes += i;
	}
	cout << "sum of cubes = " << cubes << endl;


	int star = 0;
	do {
		star++;
		cout << " * " << endl;
	}while (star < choice);


	for (int i = 0; i <= 40; i = i + 2)
	{
		cout << i << ", ";
	}
	cout << endl;


	cout << doublenum(choice) << endl;

	cout << add(39, 87) << endl;

	int newNum = 46;
	cout << plusOne(newNum) << endl;

}

void ex05()
{
	int array1[5];
	cout << "enter five integers: " << endl;
	for (int i = 0; i < 5; i++)
		cin >> array1[i];

	int arraySum = 0;
	for (int i = 0; i < 5; i++)
	{
		arraySum = arraySum + array1[i];
	}
	cout << arraySum << endl;

	arrayFunction(array1, 5);

	arrayFunction2(array1, 5);
}

int doublenum(int n1)
{
	int num1 = n1 * 2;
	return num1;
}

int add(int, int)
{
	int a, b, sum;
	cout << "enter an integer: " << endl;
	cin >> a;
	cout << "enter another integer: " << endl;
	cin >> b;

	sum = a + b;
	return sum;
}

int plusOne(int& n1)
{
	n1 = n1 + 1;
	return n1;
}

void arrayFunction(int array2[], int size)
{
	for (int i = 0; i < size; i++)
		cout << array2[i];
	cout << endl;
}

void arrayFunction2(int array3[], int sz)
{
	int value;
	cout << "enter a value (integer) to check array: " << endl;
	cin >> value;

	if (array3[0] == value)
		cout << "value found!";
	else if (array3[1] == value)
		cout << "value found!";
	else if (array3[2] == value)
		cout << "value found!";
	else if (array3[3] == value)
		cout << "value found!";
	else if (array3[4] == value)
		cout << "value found!";
	else
		cout << "value not found";
	cout << endl;
}