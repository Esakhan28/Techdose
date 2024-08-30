#include<bits/stdc++.h>
using namespace std;

int setbitas1(int n,int i){
     n|(1<<i);
     return n;
}
int main(){
      int a;
      cin>>a;
      int i;
      cin>>i;
      int val = setbitas1(a,i);

}