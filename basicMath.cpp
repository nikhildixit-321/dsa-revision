// cout digit in a number;

#include<bits/stdc++.h>
using namespace std;
 int digitCount(int n){
    int digit =0;
    while(n!=0){
      digit++;
      n=n/10;
    }
    return digit;
 }
 int reversInt(int x){
    long long a =0;
    while(x!=0){
     long long d = x%10;
     a = a*10 + d;
     x=x/10;
    }
    if( a>INT_MAX || a<INT_MIN){
        return 0;
    }
    return a;
 }
 bool pallindrome(int n){
    int x = n;
    if(n<0){
        return false;
    }
   int a = reversInt(x);
   if(a==n){
    return true;
   }
 }
 int gcd(int a, int b){
     while(a > 0 && b > 0) { 
        if(a > b) {
            
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
     if(a == 0) {
        return b;
    }
    return a;
 }
int main(){
    // int n;
    // cin>>n;
    int x,y;
    
    cin>>x>>y;

// cout<<digitCount(n);
// cout<<reversInt(n);
// cout<<pallindrome(n);
//    cout<<gcd(x,y);
    return 0;
}