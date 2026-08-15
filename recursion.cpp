#include<bits/stdc++.h>
using namespace std;
void printName(int x,int n){
    if(x<=n){
        cout<<x<<endl;
        x++;
        printName(x,n);
    }
 }
 int sumOfFirst(int sum,int n){
     
    if(n>0){
      sum = sum + n;
       n--;
    return sumOfFirst(sum,n);
    }
    return sum;
 }
 int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
 }
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Before reversing array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverse(arr.begin(), arr.end());

    cout << "\nAfter reversing array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}