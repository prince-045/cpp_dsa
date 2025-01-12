// suppose we have no series like 1 2 3
//(1 2 3) (1 3 2) (3 2 1) (3 1 2) (2 1 3) (2 3 1)
//  6 possibilities with us.
// 123 132 213 231 312 321
// if test case is 321 then return 123
// find pivot index
// after index of  pivot do reverse of all element after pivot index
// then swap idx and idx+1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    // first of all we have to find pivot index
    // where the change is happen
    // initially do pivot idx=-1
    vector<int> v{2, 3, 1};
    int pivot = -1;
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            pivot = i;
            break;
        }
    }
    if (pivot == -1)
        reverse(v.begin(), v.end());
    else
    {
        // after finding pivot eni pachi na all element ne ascending order ma sort kari do.
        reverse(v.begin()+pivot+1,v.end());
        //find just greater number index 
        
        int j=-1;
        for(int i=pivot+1;i<v.size();i++){
            if(v[i]>v[pivot]){j=i;
            break;
            }
        }
        //now swap pivot and j
        swap(v[pivot], v[j]);
     
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
    }
    return 0;
}