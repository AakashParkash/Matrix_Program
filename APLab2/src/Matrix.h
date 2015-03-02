#include <iostream>

using namespace std;
class Matrix
{
	public:
	float **number;

	int m;

	int n;


	Matrix(int x, int y)
	{
		m=x;
		n=y;
		number = new float*[m];
		for(int i = 0; i < m; i++)
		    number[i] = new float[n];
	}

	~Matrix()
	{
		for(int i = 0; i < m; i++)
		    delete [] number[i];
		delete [] number;
		
	}

	friend Matrix operator+(const Matrix &op1, const Matrix &op2)
	{
		if(op1.m!=op2.m || op1.n!=op2.n)
			cout<<"Not Compatible";
		Matrix result(op1.m,op1.n);
		for(int i=0; i<op1.m; i++)
			for(int j=0; j<op1.n; j++)
				result.number[i][j] = op1.number[i][j] + op2.number[i][j];
		return result;
	}

	friend Matrix operator-(const Matrix &op1, const Matrix &op2)
	{
		if(op1.m!=op2.m || op1.n!=op2.n)
			cout<<"Not Compatible";
		Matrix result(op1.m,op1.n);
		for(int i=0; i<op1.m; i++)
			for(int j=0; j<op1.n; j++)
				result.number[i][j] = op1.number[i][j] - op2.number[i][j];
		return result;
	}

	friend Matrix operator*(const Matrix &op1, const Matrix &op2)
	{
		if(op1.n!=op2.m)
			cout<<"Not Compatible";
		Matrix result(op1.m,op2.n);
		for(int i=0; i<op1.m; i++)
			for(int j=0; j<op1.n; j++)
			{
				result.number[i][j] = 0;
				for(int k=0; k<op1.n; k++)
					result.number[i][j] += op1.number[i][k] * op2.number[k][j];
			}
		return result;
	}

	friend ostream &operator<<(ostream &out, Matrix mat)
	{
		for(int i=0; i<mat.m; i++)
		{
			for(int j=0; j<mat.n; j++)
	        	out<<mat.number[i][j]<<" ";
	        out<<"\n";
	    }
	    return out;
	}

	friend bool operator==(const Matrix &op1, const Matrix &op2)
	{
		if(op1.m!=op2.m || op1.n!=op2.n)
			return false;
		else
		{
			for(int i=0; i<op1.m; i++)
				for(int j=0; j<op1.n; j++)
					if(op1.number[i][j]!=op2.number[i][j])
					return false;
			return true;
		}
	}
};