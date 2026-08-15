// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     // int n;
// //     // cin>>n;
// //     // int cnt = 0;
// //     // while(n!=0){
// //     // cnt++;
// //     // n=n/10;
// //     // }
// //     // cout<<n;
// //     // string s = "i nikhil dixit , 1234 kuch bhi";
// //     int n;
// //     cin>>n;
// //     cout<< n%5;


// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int solve(int a, int b, int c) {
// //     int tokens[3] = {a, b, c};
// //     int count = 0;
// //     while (true) {
// //         if (tokens[0] == tokens[1] || tokens[1] == tokens[2] || tokens[0] == tokens[2])
// //             return count;
// //         int mx = 0, mn = 0;
// //         for (int i = 1; i < 3; i++) {
// //             if (tokens[i] > tokens[mx]) mx = i;
// //             if (tokens[i] < tokens[mn]) mn = i;
// //         }
// //         tokens[mx]--;
// //         tokens[mn]++;
// //         count++;
// //     }
// // }
// // int main(){
// //      int t;
// //     cin >> t;
// //     while (t--) {
// //         int a, b, c;
// //         cin >> a >> b >> c;
// //         cout << solve(a, b, c) << "\n";
// //     }
    
// //     return 0;
// //     return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //      int t;
// //     cin >> t;
// //     while (t--) {
// //         int n;
// //         string s;
// //         cin >> n >> s;
        
        
// //         vector<pair<char,int>> runs;
// //         int i = 0;
// //         while (i < n) {
// //             int j = i;
// //             while (j < n && s[j] == s[i]) j++;
// //             runs.push_back({s[i], j - i});
// //             i = j;
// //         }
        
// //         int m = runs.size();
// //         int best = INT_MAX;
        
// //         for (int k = 0; k < m; k++) {
// //             int len = runs[k].second;
// //             if (len >= 2) {
// //                 best = min(best, m);
// //             } else {
// //                 // len == 1
// //                 if (k == 0 || k == m - 1) continue; // not deletable (touches boundary)
// //                 if (runs[k-1].first == runs[k+1].first) {
// //                     best = min(best, m - 2);
// //                 } else {
// //                     best = min(best, m - 1);
// //                 }
// //             }
// //         }
        
// //         cout << best << "\n";
// //     }
    
// //     return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //      int t;
// //     cin >> t;
// //     while (t--) {
// //         int n;
// //         string a, b;
// //         cin >> n >> a >> b;
        
// //         int aEven = 0, aOdd = 0, bEven = 0, bOdd = 0;
// //         for (int i = 0; i < n; i++) {
// //             if (a[i] == '1') {
// //                 if (i % 2 == 0) aEven++;
// //                 else aOdd++;
// //             }
// //             if (b[i] == '1') {
// //                 if (i % 2 == 0) bEven++;
// //                 else bOdd++;
// //             }
// //         }
        
// //         if (aEven == bEven && aOdd == bOdd) {
// //             cout << "YES\n";
// //         } else {
// //             cout << "NO\n";
// //         }
// //     }
    
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<pair<long long,int>> arr(n);
//         for(int i=0;i<n;i++){
//             long long x; scanf("%lld",&x);
//             arr[i]={x,i};
//         }
//         sort(arr.begin(), arr.end());
//         vector<long long> Bv;
//         vector<int> st, en;
//         int idx=0;
//         while(idx<n){
//             int j=idx;
//             while(j<n && arr[j].first==arr[idx].first) j++;
//             Bv.push_back(arr[idx].first);
//             st.push_back(idx);
//             en.push_back(j);
//             idx=j;
//         }
//         int k = Bv.size();
//         bool valid = true;
//         vector<long long> ans(n);
//         if(Bv[0]!=0) valid=false;
//         else {
//             vector<long long> v(k,0);
//             for(int m=0;m<k-1 && valid;m++){
//                 long long Bm = Bv[m];
//                 long long Bm1 = Bv[m+1];
//                 long long cm = en[m]-st[m];
//                 long long diff = Bm1-Bm;
//                 if(diff % cm != 0){ valid=false; break; }
//                 long long vm = diff/cm;
//                 if(vm<=0){ valid=false; break; }
//                 if(m>0 && vm<=v[m-1]){ valid=false; break; }
//                 v[m]=vm;
//             }
//             if(valid){
//                 if(k==1) v[0]=1;
//                 else v[k-1]=v[k-2]+1;
//                 for(int m=0;m<k;m++){
//                     long long vv=v[m];
//                     for(int t2=st[m]; t2<en[m]; t2++){
//                         ans[arr[t2].second]=vv;
//                     }
//                 }
//             }
//         }
//         if(!valid){
//             printf("-1\n");
//         } else {
//             for(int i=0;i<n;i++) printf("%lld ", ans[i]);
//             printf("\n");
//         }
//     }
// }

// map ko smjha rhe hai 
#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  vector<int>arr(n);
  arr = {13,2,3,54,6,7,34};
   map<int,int>mpp;
   for(auto it : arr){
    mpp[it]++;
   }
   cout<<mpp[2]<<endl;
   cout<<mpp[54]<<endl;
   
 

    return 0;
}
