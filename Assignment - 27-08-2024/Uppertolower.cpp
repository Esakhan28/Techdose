#include<bits/stdc++.h>
using namespace std;

string lower(string value){
      string ans="";
      for(int i=0;i<value.size();i++){
        ans=value[i]+(1<<5);
      }
}
string upper(string value){
      string ans="";
      for(int i=0;i<value.size();i++){
        ans=value[i]^(1<<5);
      }
}
int main(){
     string value;
     cin>>value;
     //upperto lower
     string ans1 = lower(value);
     //lowertoupper
     string ans2 = upper(value);
     cout<<ans1<<ans2;

}