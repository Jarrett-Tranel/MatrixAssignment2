#pragma once
class SparseMatrix
{
private:
	int** dimensionalMatrix;
	int matrixSize;
	int** outputArray;
	int validNumbers;


public:
	SparseMatrix(int** dimensionalMatrix, int matrixSize);
	void ConvertToArray();
	int CountValidNumbers();
	void Display();
};