#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    int n;
    cin>>n;
    int m;
    cin>>m;

    vector<int>v1(n);

    for(int i = 0;i<n;i++){
        cin>>v1[i];
    }
    vector<int>v2(m);

    for(int i = 0;i<m;i++){
          cin>>v2[i];
    }

    for(int i = 0;i<v2.size();i++){
        bool found = false;
         for(int j = 0;j<v1.size();j++){
            if(v2[i]==v1[j]){
                found = true;
                break;
                
            }
         }
             if(found==false){
                cout<<"not subset";
                return 0;
            }
    }
     
    cout<<"subset";
     
  
}