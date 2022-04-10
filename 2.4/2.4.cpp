// 2.4.cpp
#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	Matrix m(2, 2);
	m.Read(m);
	cout << m;
	/*for (int i = 0; i < m.getR(); i++)
	{
		for (int k = 0; k < m.getC(); k++)
		{
			cout << m[i][k] << "\t";
		}
		cout << endl;

	};*/
}
