#include<iostream>
using namespace std;
int main(){
      
    int n;
    cin>>n;

    int m;
    cin>>m;
     
    int arr[n][m];

    for(int i= 0;i<n;i++){
        for(int j = 0;j<m;j++){
           cin>>arr[i][j];
        }
    }

    int arrr[n][m] ;
     
    for(int i= 0;i<n;i++){
        for(int j = 0;j<m;j++){
           cin>>arrr[i][j];
        }
    }

    // arr[i][j] = arr[i][j]+arr1[i][j];

     for(int i = 0;i<n ;i++){
        for(int j = 0;j<m ;j++){
            arr[i][j] = arr[i][j]+arrr[i][j];
        }
     }

     for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

}