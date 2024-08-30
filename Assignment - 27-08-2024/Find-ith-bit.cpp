#include<bits/stdc++.h>
using namespace std;

int Findbit(int n,int i){
    while(n){
       if(n&(1<<i)!=0){
        return false;
       }else{
        return false;
       }
    }
    return false;
}
int main(){
    int a;
    cin>>a;
    int i;
    cin>>i;

    int val =Findbit(a,i);
    cout<<val;
    return 0;
    }