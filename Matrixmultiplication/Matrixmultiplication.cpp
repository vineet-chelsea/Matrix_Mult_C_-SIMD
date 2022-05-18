// Matrixmultiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>  
#include<time.h>
using namespace std;

int main()
{
	srand(time(0));
	int a[10][10], b[10][10];
	int arow, acol, brow, bcol;
	arow = sizeof(a) / sizeof(a[0]);
	acol = sizeof(a[0]) / sizeof(int);
	brow = sizeof(b) / sizeof(b[0]);
	bcol = sizeof(b[0]) / sizeof(int);
	int product[10][10];
	cout << arow << " * " << acol << endl;
	cout << brow << " * " << bcol << endl;
	for (int i = 0; i < arow;i++) {
		for (int j = 0; j < acol;j++) {
			a[i][j] = rand()%10+1;
		}
	}
	for (int i = 0; i < brow;i++) {
		for (int j = 0; j < bcol;j++) {
			b[i][j] = rand()%10+1;
		}
	}
	int sum = 0;
	for (int i = 0; i < arow;i++) {

		for (int j = 0; j < bcol;j++) {
			for (int k = 0;k < brow;k++) {
				sum = sum + a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum = 0;
		}
	}
	int prodrow = sizeof(product) / sizeof(product[0]);
	int prodcol = sizeof(product[0]) / sizeof(int);
	cout << "Matrix A " << "\n";
	for (int i = 0;i < arow;i++) {
		for (int j = 0; j < acol;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;

	}
	cout << "Matrix B " << "\n";
	for (int i = 0;i < brow;i++) {
		for (int j = 0; j < bcol;j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;

	}

	cout << " Matrix Product is " << endl;
	for (int i = 0;i < prodrow;i++) {
		for (int j = 0; j < prodcol;j++) {
			cout << product[i][j] << " ";
		}
		cout << endl;

	}
}
