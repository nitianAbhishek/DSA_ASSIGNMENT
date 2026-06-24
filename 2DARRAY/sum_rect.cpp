#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int m;
    cin>>m;

    int arr[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // traverse

    int l1,l2,r1,r2;
    cin>>l1>>l2>>r1>>r2;
    
      int sum = 0;

     for(int i = l1;i<=l2;i++){
        for(int j = r1;j<=r2;j++){
             sum = sum+arr[i][j];
        }

     }
     cout<<sum;
}
