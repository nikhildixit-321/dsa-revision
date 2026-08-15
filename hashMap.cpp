#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mpp;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    for(auto x : arr){
        mpp[x]++;
    }
    for(auto it : mpp){
        ans.push_back({it.first,it.second});
    }
    for (auto v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    return 0;

}