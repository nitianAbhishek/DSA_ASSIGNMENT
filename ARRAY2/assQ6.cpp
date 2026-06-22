#include<iostream>
#include<vector>
#include<algorithm>
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

   // xor a^a
   int ans = 0;
      
    for(int i = 0;i<n;i++){
        ans = ans^v[i];
    }
    cout<<ans;



}
