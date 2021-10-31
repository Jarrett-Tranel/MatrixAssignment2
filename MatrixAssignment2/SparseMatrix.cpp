#include "SparseMatrix.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

SparseMatrix::SparseMatrix(int** matrix, int count)
{
    this->dimensionalMatrix = matrix;
    this->matrixSize = count;
    this->validNumbers = CountValidNumbers();

    //intilize Output array
    this->outputArray = new int* [3];
    for (int i = 0; i < this->validNumbers; i++)
    {
        this->outputArray[i] = new int[this->validNumbers];
    }
}

int SparseMatrix::CountValidNumbers()
{
    int count = 0;
    for (int i = 0; i < this->matrixSize; i++)
    {
        for (int j = 0; j < this->matrixSize; j++)
        {
            if (this->dimensionalMatrix[i][j] != 0)
            {
                count++;
            }
        }
    }

    return count;
}

void SparseMatrix::ConvertToArray()
{
    int count = 0;
    for (int i = 0; i < this->matrixSize; i++)
    {
        for (int j = 0; j < this->matrixSize; j++)
        {
            if (dimensionalMatrix[i][j] != 0)
            {
                //row, column, value
                this->outputArray[0][count] = i;
                this->outputArray[1][count] = j;
                this->outputArray[2][count] = this->dimensionalMatrix[i][j];
                count++;
            }
        }
    }
}

void SparseMatrix::Display()
{
    for (int i = 0; i < this->validNumbers; i++)
    {
        cout << "row: ";
        cout << outputArray[0][i] << endl;
        cout << "column:";
        cout << outputArray[1][i] << endl;
        cout << "value:";
        cout << outputArray[2][i] << endl;
        cout << "------------" << endl;
    }
}