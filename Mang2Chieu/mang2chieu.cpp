#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int row, col;
    cout << "Enter Rows Number:";
    cin >> row;
    cout << "Enter Volume Number:";
    cin >> col;
    int M[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            M[i][j] = rand() % 100;
        }
    }
    cout << "Mang Sau Khi Nhap:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }
    /*
    Function Input Rows
	Begin */
    cout << "Ban Muon Xuat Dong Nao::";
    int r;
    cin >> r;
    for (int i = 0; i < row; i++)
        cout << M[r][i] << "\t";
    cout << "\nBan Muon Xuat Cot Nao";
    int c;
    cin >> c;
    for (int i = 0; i < col; i++)
        cout << M[i][c] << "\t";
    if (row == col)
    {
        cout << "\n Xuat Ðuong Cheo Chinh" << endl;
        for (int i = 0; i < row; i++)
            cout << M[i][i] << "\t";
        cout << "\n Xuat Ðuong Cheo Phu" << endl;
        for (int i = 0; i < col; i++)
            cout << M[i][row - i - 1] << "\t";
    }
    /* 
       Update Function Search Value
       Author:FinnLe
       */

    cout << "\nTim Kiem Gia Tri: ";
    int k;
    cin >> k;
    int kt;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (k == M[i][j])
            {
                kt++;
            }
        }
    }
    if (kt > 0)
    {
        cout << "\t GT " << k << " Duoc Tim Thay" << kt << " lan" << endl;
    }
    else
        cout << "\tKhong Tim Thay Gia Tri:" << k << endl;

    return 0;
}
