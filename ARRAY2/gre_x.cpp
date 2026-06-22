#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i = 0;i<n ;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int x;
    cin>>x;

    int count = 0;

    for(int i = 0;i<n;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;



}