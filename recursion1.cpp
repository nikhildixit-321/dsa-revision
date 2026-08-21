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