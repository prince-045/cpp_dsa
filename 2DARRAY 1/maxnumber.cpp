#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {99, 34, 45, 56, 78, 23, 12, 23, 45};
    int max = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    cout << "maximum element is " << max;
    return 0;
}