#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    for(int i = 0;i<n ;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(v[i]==v[j]){
                count++;
            }
        }
        if(count==1){
            cout<<v[i];
            return 0;
        }
    }
    cout<<-1;
}