// //by using three pointer algo
// //dutch falg algo
// //in one pass with constant space

// class Solution {
// public:
//     void sortColors(vector<int>& a) {
//         int  lo=0;
//         int mid=0;
//         int hi=a.size()-1; 
//         while(mid<=hi){
//             if(a[mid]==1)mid++;
//              else if(a[mid]==0){
//                 int temp=a[lo];
//                 a[lo]=a[mid];
//                 a[mid]=temp;
//                 lo++;
//                 mid++;
//             }
//             else{
//                  int temp=a[hi];
//                 a[hi]=a[mid];
//                 a[mid]=temp;
//                 hi--;
//             }

//         }
//     }
// };