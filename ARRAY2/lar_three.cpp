#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
       
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    int third = INT_MIN;
    int first = INT_MIN;
    int  second= INT_MIN;

    for(int i = 0;i<n ;i++){
        if(v[i]>first){
             third = second;
             second = first;
             first = v[i];
        }

       else if(v[i]>second&&v[i]<first){
            third = second;
            second = v[i];
        }
       else if(v[i]>third && v[i]<second){
            third = v[i];
        }
    }

    cout<<first<<endl<<second<<endl<<third;
}
