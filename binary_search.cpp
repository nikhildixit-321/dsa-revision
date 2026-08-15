#include<bits/stdc++.h>
using namespace std;

// LOWER BOUND PROBLEM 

int lowerBound(vector<int>&arr,int n, int k){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid  = low + (high-low)/2;
        if(arr[mid]>=k){
            ans  = mid;
             high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

// LOWER BOUNR PROBLEM 
int upper_bound(vector<int>&arr,int n,int k){
   int low = 0;
   int high = n-1;
   int ans = n;
   while(low<=high){
    int mid = low + (high-low)/2;
     if(arr[mid]<=k){
        ans = mid;
        low = mid+1;
     }
     else{
      high  = mid-1;
     }
   }
   return ans;
}

// floor and ceil problem 
pair<int, int> floorCeil(vector<int>& arr, int n, int k) {

    int ceilIndex = lowerBound(arr, n, k);
    
    int floorIndex = upper_bound(arr, n, k);

    int ceilValue = -1;
    int floorValue = -1;

    if(ceilIndex < n)
        ceilValue = arr[ceilIndex];

    if(floorIndex >= 0)
        floorValue = arr[floorIndex];

    return {floorValue, ceilValue};
}
// find the how many time array roated;
int timeofrotate(vector<int>&arr,int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = low + (high - low)/2;
        if(arr[mid]>arr[high]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    return low;
}
bool nthrootnum(int n,int m){
    int low = 1;
    int high = m;
    long long  ans = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(pow(mid,n)== m) return true;
       if(pow(mid,n)<m){
           ans = mid;
           low = mid + 1;
       }
       else{
        high = mid -1;
       }
    }
    return false;
}
bool capicitycows(vector<int>&arr,int n, int dis){
        int count = 1;
        int lastPos = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - lastPos >= dis) {
                count++;
                lastPos = arr[i];
            }
            if (count >= n) return true;
        }
        return false;
}
int aggresiveCows(vector<int>&arr,int n,int cows ){
    int low = 0;
    int high = *max_element(arr.begin(),arr.end());
    int ans = 0;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(capicitycows(arr,n,mid)==true){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    int cows;
    cin>>cows;
    // vector<int>arr(n);
    // for(int i = 0; i < n; i++) {
    // cin >> arr[i];
    //  }
//   cout<<lowerBound(arr,n,target);
    // cout<<upper_bound(arr,n,target);
//    pair<int,int> ans = floorCeil(arr, n, target);
//     cout << ans.first << " " << ans.second;
//  cout<<timeofrotate(arr,n);
    //  cout<<nthrootnum(n,m);
    aggressiveCows(arr,n,cows);
    return 0;
}
