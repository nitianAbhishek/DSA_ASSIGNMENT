#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    // algorithm 
  

    for(int i = 0;i<n-1;i++){
        //traverse
        bool flag = true;
        for(int j = 0;j<n-1-i;j++){
            if(v[j]<v[j+1]){
                swap(v[j],v[j+1]);
                flag = false;
            }
        }
        if(flag ==true){
            break;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

