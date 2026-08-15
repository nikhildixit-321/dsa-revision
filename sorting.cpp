#include<bits/stdc++.h>
using namespace std;
vector<int>selection_sort(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
vector<int> bubble_sort(vector<int> arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
vector<int>insertion_sort(vector<int>arr,int n){
    for(int i=1;i<n;i++){
        int k = arr[i];
         int j = i-1;
         while(j>=0 && arr[j]>k){
            arr[j+1] = arr[j];
            j--;
         }
         arr[j+1]  = k ;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void merge(vector<int>&arr,int low, int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
           temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    for(int i=low;i<=high;i++){
         arr[i] = temp[i-low];
    }
}
void divideArray(vector<int>&arr,int low , int high){
      if (low >= high) return;
     int mid = low + (high - low) / 2;
     divideArray(arr,low,mid);
     divideArray(arr,mid+1,high);
     merge(arr,low,mid,high);
}
void mergesortStart(vector<int>&arr,int n){
     int low = 0;
     int high = n-1;
     divideArray(arr,low,high);
}
void recursiveBubbleSort(vector<int>&arr , int n){
    if(n==1) return ;
    for(int i=0;i<n-2;i++){
      if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
      }
    }
    recursiveBubbleSort(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selection_sort(arr,n);
    // bubble_sort(arr,n);
    // insertion_sort(arr,n);
    // mergesortStart(arr,n);
    // recursiveBubbleSort(arr,n);
     for(int x : arr)
    cout << x << " ";     
    return 0;
}