#include<bits/stdc++.h>
using namespace std;
 int largestElement(vector<int>&arr,int n){
    int max = INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
     }
     return max;
}
int secondLargest(vector<int>&arr, int n){
    int slar = INT_MIN;
    int lar = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            slar = lar;
            lar=arr[i];
            
        }
        else if(arr[i]<lar && arr[i]>slar){
            slar = arr[i];
        }
    }
    return slar;
}
 bool linearSearch(vector<int>&arr,int n,int k){
       for(int i=0;i<n;i++){
           if(arr[i]==k){
             return true;
           }
       }
       return false;
 }
void unionOfsortArray(vector<int>& arr1, vector<int>& arr2, int x, int y) {
    int i = 0, j = 0;
    vector<int> temp;

    while (i < x && j < y) {

        if (arr1[i] < arr2[j]) {
            if (temp.empty() || temp.back() != arr1[i])
                temp.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            if (temp.empty() || temp.back() != arr2[j])
                temp.push_back(arr2[j]);
            j++;
        }
        else {
            if (temp.empty() || temp.back() != arr1[i])
                temp.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < x) {
        if (temp.empty() || temp.back() != arr1[i])
            temp.push_back(arr1[i]);
        i++;
    }

    while (j < y) {
        if (temp.empty() || temp.back() != arr2[j])
            temp.push_back(arr2[j]);
        j++;
    }

    for (int x : temp)
        cout << x << " ";
}
int longestSubarray(vector<int>&arr, int n, int k){
    
 int i = 0;
int sum = 0;
int maxLen = 0;

for(int j = 0; j < n; j++) {

    sum += arr[j];

    while(sum > k) {
        sum -= arr[i];
        i++;
    }

    if(sum == k) {
        maxLen = max(maxLen, j - i + 1);
    }
}

return maxLen;
}
int longestSubarrayforNegative(vector<int>&arr,int n,int k){
    
    unordered_map<int, int> mpp;

    int sum = 0;
    int maxlen = 0;

    for(int j = 0; j < n; j++) {

        sum += arr[j];

        if(sum == k) {
            maxlen = max(maxlen, j + 1);
        }

        int rem = sum - k;

        if(mpp.find(rem) != mpp.end()) {
            int len = j - mpp[rem];
            maxlen = max(maxlen, len);
        }

        if(mpp.find(sum) == mpp.end()) {
            mpp[sum] = j;
        }
    }

    return maxlen;
}
 vector<int>twoSum(vector<int>&arr,int n,int k){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int rem = k - arr[i];
        if(mpp.find(rem)!= mpp.end()){
            return {mpp[rem],i};
        }
        mpp[arr[i]]=i;
    }
    return { };
 }

 vector<int>leaderelement(vector<int>&arr,int n){
    int maxi = INT_MIN;
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
         ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
    sort(ans.begin(),ans.end());
   return ans;
 }
 int consecutiveNumber(vector<int>&arr,int n){
    int log = 1;
    int cnt = 0;
    
    unordered_set<int>st;
    for(auto it : arr){
        st.insert(it);
    }
    for(auto it : st){
        if(st.find(it-1)!=st.end()){
        int x = it-1;
        int cnt = 1;
        while(st.find(x+1)!=st.end()){
            x = x+1;
            cnt++;
        }
        log = max(log,cnt);
    }
}
 return log;
 }

int longestSubarrySumZeros(vector<int>&arr,int n){
     unordered_map<int, int> mpp;

        int sum = 0;
        int maxi = 0;

        // sum = 0 before array starts
        mpp[0] = -1;

        for (int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            // Same prefix sum already exists
            if (mpp.find(sum) != mpp.end()) {
                int len = i - mpp[sum];
                maxi = max(maxi, len);
            }
            else {
                // First occurrence only
                mpp[sum] = i;
            }
        }

        return maxi;
    }
int longestSubarrayXORsum(vector<int>&arr,int n,int k){
    unordered_map<int,int>mpp;
     int sum =0;
     int cnt =1;
     mpp[0] = 1;
    for(int i=0;i<n;i++){
      sum^=arr[i];
      int rem = k^sum;
      if(mpp.find(rem)!=mpp.end()){
        cnt+=mpp[rem];
      }
      mpp[sum]++;
    }
    return cnt;
}

int main(){
    int x,target;
    cin>>x>>target;
    vector<int>arr(x);
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    // int y;
    // cin>>y;
    // vector<int>arr2(y);
    // for(int i=0;i<y;i++){
    //     cin>>arr2[i];
    // }
    
  

    //  cout<<largestElement(arr,n);
    //  cout<<secondLargest(arr,n);
    //  cout<<linearSearch(arr,n,target);
    //  unionOfsortArray(arr1,arr2,x,y);
    // cout<<longestSubarray(arr,x,target); ye positive no. ke liye hai 
    // cout<<longestSubarrayforNegative(arr,x,target);
   
//   vector<int> ans=twoSum(arr,x,target);
//  vector<int>ans = leaderelement(arr,x);
//    cout<<consecutiveNumber(arr,x);
//   longestSubarrySumZeros(arr,x);
  cout<<longestSubarrayXORsum(arr,x,target);
//   for(auto it : ans){
//     cout<<it<<" ";
//   }
    return 0;
}