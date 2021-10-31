// MatrixAssignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SparseMatrix.hpp"

const int sizeOfMatrix = 5;

int main()
{
    int** matrix = new int* [5];
    for (int i = 0; i <= 4; i++)
    {
        matrix[i] = new int[5];
    } //adds second demension to matrix


#pragma region  Adding Data To Matrix

    //row 0
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 3;
    matrix[0][3] = 6;
    matrix[0][4] = 0;

    //row 1
    matrix[1][0] = 1;
    matrix[1][1] = 4;
    matrix[1][2] = 0;
    matrix[1][3] = 0;
    matrix[1][4] = 4;

    //row 2
    matrix[2][0] = 0;
    matrix[2][1] = 16;
    matrix[2][2] = 0;
    matrix[2][3] = 0;
    matrix[2][4] = 1;

    //row 3
    matrix[3][0] = 2;
    matrix[3][1] = 0;
    matrix[3][2] = 0;
    matrix[3][3] = 2;
    matrix[3][4] = 0;

    //row 4
    matrix[4][0] = 0;
    matrix[4][1] = 0;
    matrix[4][2] = 0;
    matrix[4][3] = 12;
    matrix[4][4] = 0;

#pragma endregion

    SparseMatrix* outputArray = new SparseMatrix(matrix, sizeOfMatrix);
    outputArray->ConvertToArray();
    outputArray->CountValidNumbers();
    outputArray->Display();
}

