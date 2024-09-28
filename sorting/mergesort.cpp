// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a, vector<int>& b,vector<int>& res){
//     int i=0;//a
//     int j=0;//b
//     int k=0;//c
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j])  res[k++]=a[i++];
//         else res[k++]=b[j++];   
//     }
//     if(i==a.size()){
//         while(j<b.size())  {res[k++]=b[j++];} 
//     }
//      if(j==b.size()){
//         while(i<a.size())   {res[k++]=a[i++];}
//     }

// }
// void mergesort(vector<int>& v){
//     int n=v.size();
//     if(n==1) return;
//     int n1=n/2;
//     int n2=n-(n/2);
//     vector<int> v1(n1),v2(n2);
//     //copy pasting
//     for(int i=0;i<n1;i++){
//         v1[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         v2[i]=v[i+n1];
//     }
//         //magic aka recursion
//         mergesort(v1);
//         mergesort(v2);
       


//     //merge
//     merge(v1,v2,v);
//     v1.clear();//for reducing space complexity
//     v2.clear();//for reducing space complexity

// }

// int main()
// {
//     int arr[]={5,1,3,0,4,9,6};
//     int n1=sizeof(arr)/sizeof(arr[0]);
//     vector<int>a(arr,arr+n1);
//      for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl; 
//     mergesort(a);
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int count=0;
int inversion(vector<int>& a,vector<int>& b){
    int i=0;
    int j=0;
    int invcount=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            invcount+=a.size()-i;
            j++;
        }
        else i++;
    }
    return invcount;
}

void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) v[k++]=a[i++];
        else v[k++]=b[j++];
    }
        if(i==a.size()){
        while(j<b.size())  {v[k++]=b[j++];} 
     }
     if(j==b.size()){
        while(i<a.size())   {v[k++]=a[i++];}
    }
}


void mergesort(vector<int>& v){
    int n=v.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-(n/2);
    vector<int>a(n1);
    vector<int>b(n2);
  
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    count+=inversion(a,b);
    merge(a,b,v);
}
using namespace std;
int main()
{
    vector<int>v{5, 1, 3, 0, 4, 9, 6};
    cout<<"before sorting: ";
    count=0;
    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
  
    mergesort(v);

    cout<<"after sorting: ";
      for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"total inversion count after sorting :"<<count;


 return 0;
}