// // class Solution {
// public:
    
//     int matrixScore(vector<vector<int>>& v) {
//         int rows=v.size();
//         int cols=v[0].size();
//         //making the first coloum all element to 1
//         for(int i=0;i<rows;i++){
//            if(v[i][0]==0){
//                 for(int j=0;j<cols;j++){
//                     if(v[i][j]==0) v[i][j]=1;
//                     else v[i][j]=0;
//                 }
//            }
//         }
//         //flip the colum where noz>noo
//         for(int j=0;j<cols;j++){
//             int noz=0;
//             int noo=0;
//             for(int i=0;i<rows;i++){
//                 if(v[i][j]==0) noz++;
//                 else noo++;
//             }
//             if(noz>noo){
//                 for(int i=0;i<rows;i++){
//                      if(v[i][j]==0) v[i][j]=1;
//                     else v[i][j]=0;
//                 }
//             }
//         }
//         int sum=0;
//         for(int i=0;i<rows;i++){
//             int x=1;
            
//             for(int j=0;j<cols;j++){
//                 sum+=v[i][j]*x;
//                 x*=2;
//             }
//         }

//     return sum;
//     }
// };