#pragma once
#include <ostream>
#include <istream>

class Matrix
{
	class Row;
	int R, C;
	Row* m;
	class Row
	{
	public:
		int* v;
		Row(int C = 1)
		{
			v = new int[C];
			for (int j = 0; j < C; j++)
				v[j] = 0;
		}
		int& operator [] (int j)
		{
			return v[j];
		}
	};
public:
	Matrix(int R=1, int C=1);
	//~Matrix();

	void Read(Matrix m);
	friend int Isequal(Matrix a, Matrix b);
	double Norma(Matrix a) const;
	Matrix Mult(Matrix a, int x);

	//friend Matrix operator == (const Matrix&, const Matrix&);
	//friend Matrix operator * (const Matrix&, const Matrix&);

	friend ostream& operator << (ostream&, const Matrix& a);

	Row& operator [] (int i) { return m[i]; }

	int getC() const { return C; }
	int getR() const { return R; }
};

