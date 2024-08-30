#include<bits/stdc++.h>
using namespace std;


int countbits(int n){
      int count =0;
      while(n){
        if(n&1){
            count++;
        }
      }
      return count;
}
int main(){
      int a;
      cin>>a;
      int val = countbits(a);
      cout<<val<<endl;
}
