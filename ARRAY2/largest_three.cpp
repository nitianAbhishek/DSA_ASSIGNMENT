#include<iostream>
#include<vector>
#include<climits>
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

    // max

    int max = INT_MIN;
    int smax =  INT_MIN;
    int tmax =  INT_MIN;

    for(int i = 0;i<n;i++){
        if(max<v[i]) {
            max = v[i];
        }
    }

     for(int i = 0;i<n;i++){
        if(max !=v[i]&&smax<v[i]){
            smax = v[i];
        }
     }
    


    



}