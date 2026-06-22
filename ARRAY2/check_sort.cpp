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
     
    bool flag = true;

    for(int i = 0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag = false;
        }
    }

    if(flag==true){
        cout<<"sorted";
    }
    else {
        cout<<"not sorted";
    }
   

}