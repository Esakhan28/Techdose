#include<bits/stdc++.h>
using namespace std;
int main(){
    
      vector<int>arr={2,3,4};

      vector<vector<int>>ans;
      for(int i=0;i<(1<<arr.size());i++){
            vector<int>subset;
            for(int j=0;j<arr.size();j++){
                  if(i&(1<<j)){
                        subset.push_back(arr[j]);
                  }
            }
            ans.push_back(subset);
      }
      cout<<'[';
    for(int i=0;i<ans.size();i++){
        cout<<'[';
      for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
      }
      cout<<']';
    }
    cout<<']';
    return 0;

}