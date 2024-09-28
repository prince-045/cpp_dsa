#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    cout << "normal array" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int b[3][2];
    // to store a transpose in another matrix
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            b[j][i] = a[i][j];
        }
    }
    cout << "transpose array" << endl;
    // printing transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}