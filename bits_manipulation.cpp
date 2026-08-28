// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int cnt = 0;
//    while(n){
//     n &=n-1;
//     cnt++;
//    }
//     cout<<cnt<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
//     int n;
//     cin>>n;
//     if(n&1) cout<<n;
//     else cout << (n | (n + 1));
//      return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"before swaping :"<<a<<"&"<<b<<endl;
//     a = a^b;
//     b= a^b;
//     a = a^b;
//     cout<<"after swaping : "<< a<<"&"<<b;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    
}