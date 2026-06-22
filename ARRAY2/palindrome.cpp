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

     int i = 0;
     int j = n-1;
      
      bool flag = true;

     while(i<j){

        if(v[i]!=v[j]) {
           
            flag = false;

        }
         i++;
         j--;
     }

    if(flag==true){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
     


}