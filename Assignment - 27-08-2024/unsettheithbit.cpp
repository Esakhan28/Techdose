#include<bits/stdc++.h>
using namespace std;

int unset_the_ith_bit(int n,int i){
     return  n&(~(1<<i));
}
int main(){
      int a;
      cin>>a;
      int i;
      cin>>i;
      int val = unset_the_ith_bit(a,i);

}