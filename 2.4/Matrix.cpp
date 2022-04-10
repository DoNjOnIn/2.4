#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix operator * (const Matrix& x, int y)
{
	Matrix k(x);
	for (int i = 0; i < k.getR(); i++)
	{
		for (int j = 0; j < k.getC(); j++)
		{
			k[i][j] *= y;
		}
		cout << endl;
	};
	return k;
}

Matrix Matrix::Mult(Matrix a, int x)
{
	for (int i = 0; i < a.getR(); i++)
	{
		for (int k = 0; k < a.getC(); k++)
		{
			a[i][k] *= x;
		}
		cout << endl;
		return a;

	};
}

Matrix::Matrix(int R = 1, int C = 1)
{
	{
		this->R = R < 1 ? 1 : R;
		this->C = C < 1 ? 1 : C;
		m = new Row[this->R];
		for (int i = 0; i < this->R; i++)
		{
			m[i] = Row(this->C);
		}
	}
}

//Matrix::~Matrix()
//{
//	for (int i = 0; i < R; i++)
//	{
//		if (m[i].v != nullptr)
//			delete[](m[i].v);
//		if (m != nullptr)
//			delete[] m;
//	};
//}

double Matrix::Norma(Matrix a) const
{
	int s = 0;
	for (int i = 0; i < getR(); i++)
	{
		for (int k = 0; k < getC(); k++)
		{
			s += pow(a[i][k], 2);
		}
	};
	return sqrt(s);
}

int Isequal(Matrix a, Matrix b)
{
	for (int i = 0; i < a.getR(); i++)
	{
		for (int k = 0; k < a.getC(); k++)
		{
			if (a[i][k] != b[i][k])
			{
				cout << "Matrix aren`t equal" << endl;
				return 0;
			}
		}
		cout << endl;
	};
	cout << "Matrix are equal" << endl;
	return 0;
}

ostream& operator << (ostream& out, Matrix& a)
{
	for (int i = 0; i < a.getC(); i++)
		for (int j = 0; j < a.getR(); j++)
			out << "[ " << i << " ][" << j << "] =" << a[i][j] << endl;
	out << endl;
	return out;
}
void Matrix::Read(Matrix m)
{
	int x;
	for (int i = 0; i < m.getR(); i++)
	{
		for (int k = 0; k < m.getC(); k++)
		{
			cout << "[" << i+1 << "]" << "[" << k+1 << "] ="; cin >> x;
			m[i][k] = x;
		}
		cout << endl;

	};
}