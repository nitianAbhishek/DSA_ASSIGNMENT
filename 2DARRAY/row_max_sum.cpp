#include<iostream>
#include<climits>
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

    int max = INT_MIN;
    int row = -1;

    for(int i = 0;i<n ;i++){
        int sum = 0;
        for(int j = 0;j<m;j++){
            sum = sum+arr[i][j];
        }
        
        if(sum>max){
            max = sum;
            row = i;
        }
    }

    cout<<row;


}