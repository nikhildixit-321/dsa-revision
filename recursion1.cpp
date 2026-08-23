// {this is code of desending order of stack }
// #include<bits/stdc++.h>
// using namespace std;
// void insertstack(stack<int> &st,int temp){
//     if(st.empty() || temp>=st.top()){
//         st.push(temp);
//         return ;
//     }
//     int val = st.top();
//     st.pop();
//     insertstack(st,temp);
//     st.push(val);
// }
// void sortstack(stack<int>& st){
//     if(!st.empty()){
//         int temp = st.top();
//         st.pop();
//         sortstack(st);
//         insertstack(st,temp);
//     }
    
// }
// int main(){
//     stack<int>st;

//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//        int val;
//        cin>>val;
//        st.push(val);
//     }
//     sortstack(st);
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     return 0;
//  }

// {reverse of the stack}

// #include<bits/stdc++.h>
// using namespace std;

// void insertstack(stack<int> &st, int temp) {
    
//     // temp ko bottom mein insert karna hai
//     if(st.empty()) {
//         st.push(temp);
//         return;
//     }

//     int val = st.top();
//     st.pop();

//     insertstack(st, temp);

//     st.push(val);
// }

// void reversestack(stack<int> &st) {

//     if(st.empty()) return;

//     int temp = st.top();
//     st.pop();

//     reversestack(st);

//     // temp ko bottom mein daalna
//     insertstack(st, temp);
// }

// int main() {

//     stack<int> st;

//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         int val;
//         cin >> val;
//         st.push(val);
//     }

//     reversestack(st);

//     while(!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }

//     return 0;
// }

// {Generate Binary Strings Without Consecutive 1s}


// #include<bits/stdc++.h>
// using namespace std;
// void binarystring(int n,string s,vector<string> &result){

//     if(s.length() == n){
//         result.push_back(s);
//         return;
//     }
//     binarystring(n, s + "0",result);
//     if(s.empty() || s.back() != '1'){
//           binarystring(n,s+"1",result);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<string>result;
//     binarystring(n,"",result);
//     for(auto it : result){
//         cout<<it<<" ";
//     }
//     return 0;
// }

// {subsequance the number}

// #include<bits/stdc++.h>
// using namespace std;
// void subseq(string rem,int n,string &s,vector<string> &result){
//    if(s.size() == n){
//      result.push_back(rem);
//      return ;
//    }
//    subseq(rem,n+1,s,result);
//     rem.push_back(s[n]);
//    subseq(rem,n+1,s,result);
//    rem.pop_back();
// }
// int main(){
//     string s = "abc";
//     vector<string>result;
//     subseq("",0,s,result);
//     for(auto ch : result){
//         cout<<ch<<" ";
//     }
//     return 0;
// }

// {subsequance with sum k}
// #include<bits/stdc++.h>
// using namespace std;

// void findsubseqwithk(int index, int sum, vector<int>& arr, vector<int>& ds) {

//     // Array khatam
//     if(index == arr.size()) {
//         if(sum == 0) {
//             for(auto it : ds) {
//                 cout << it << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     // Pick
//     ds.push_back(arr[index]);
//     findsubseqwithk(index + 1, sum - arr[index], arr, ds);

//     // Not Pick
//     ds.pop_back();
//     findsubseqwithk(index + 1, sum, arr, ds);
// }

// int main() {
//     int n, target;
//     cin >> n >> target;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> ds;

//     findsubseqwithk(0, target, arr, ds);

//     return 0;
// }

// {sum of all subsets}

#include<bits/stdc++.h>
using namespace std;
void sumsubset(vector<int>&ds,int ind,int sum,vector<int>&arr){
    if(ind == arr.size()){
       ds.push_back(sum);
     return;
    }
    sumsubset(ds,ind+1,sum + arr[ind],arr);
   
    sumsubset(ds,ind+1,sum,arr);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ds;
    sumsubset(ds,0,0,arr);
     for (int sum : ds) {
        cout << sum << " ";
    }
}