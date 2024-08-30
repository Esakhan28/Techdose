#include<bits/stdc++.h>
using namespace std;


string oddevenbits(int n){
    
      
        if(n&1==0){
           return "even";
        }
      
      return "odd";
}
int main(){
      int a;
      cin>>a;
      string val = oddevenbits(a);
      cout<<val<<endl;
}
