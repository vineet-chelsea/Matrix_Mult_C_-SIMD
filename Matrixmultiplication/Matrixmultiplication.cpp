// Matrixmultiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>  
using namespace std;

int main()
{
	int a[2][2], b[2][3];
	int arow, acol, brow, bcol;
	arow = sizeof(a) / sizeof(a[0]);
	acol = sizeof(a[0]) / sizeof(int);
	brow = sizeof(b)/sizeof(b[0]);
	bcol = sizeof(b[0]) / sizeof(int);
	int product[2][3];
	cout << arow << " * " << acol << endl;
	cout << brow << " * " << bcol << endl;
	int sum = 0;
	for (int i = 0; i < arow;i++) {

		for (int j = 0; j < bcol;j++) {
			for (int k = 0;k < brow;k++) {
				sum = sum + a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum = 0;
		}
		cout << " Matrix Product is " << endl;
		for (int i = 0;i < 2;i++) {
			for (int j = 0; j < 3;j++) {
				cout << product[i][j] << " ";
			}
			cout << endl;
		}
		
	}
}