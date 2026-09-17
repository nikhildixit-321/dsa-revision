// #include <bits/stdc++.h>
// using namespace std;

// class Stack {
// public:
//     int arr[100];
//     int top = -1;

//     void push(int x) {
//         top++;
//         arr[top] = x;
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "The stack was empty" << endl;
//             return;
//         }

//         cout << arr[top] << endl;
//         top--;
//     }

//     void peek() {
//         if (top == -1) {
//             cout << "The stack was empty" << endl;
//             return;
//         }

//         cout << arr[top] << endl;
//     }

//     bool isempty() {
//         return top == -1;
//     }
// };

// int main() {

//     Stack st;

//     st.push(10);
//     st.push(5);
//     st.push(6);

//     st.pop();             // 6
//     st.peek();            // 5
//     cout << st.isempty(); // 0

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class ArrayQueue{
//     public:
//     int arr[100];
//     int start = 0;
//     int end = -1;
//     void push(int x){
//         end++;
//         arr[end]=x;
//     }
//     void pop(){
//         if( end < start){
//             cout<<"queue is empty "<<endl;
//            return;
//         }
//        cout<< arr[start]<<endl;
//         start++;
//     }
//     void peek(){
//         if(end<start){
//             cout<<"queue is empty"<<endl;
//             return;
//         }
//        cout<<arr[start]<<endl;
//     }
//     bool isempty(){
//        return end < start;
//     }
// };
// int main(){
//     ArrayQueue q;

//     q.push(10);
//     q.push(5);
//     q.push(6);

//     q.pop();
//     q.peek();

//     cout<<q.isempty();

//     return 0;

// }
#include<bits/stdc++.h>
using namespace std;

int prec(char c) {
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}

 void infixtopostfix(string &s) {
     stack<char> st;
     string res;

     for(auto ch : s) {
         char c = ch;

        //  Operand
         if((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9')) {
             res += c;
         }

         // Opening bracket
         else if(c == '(') {
             st.push(c);
         }

         // Closing bracket
         else if(c == ')') {
             while(!st.empty() && st.top() != '(') {
                 res += st.top();
                 st.pop();
             }

            if(!st.empty())
                 st.pop();
         }

         // Operator
         else {
             while(!st.empty() && prec(c) <= prec(st.top())) {
                 res += st.top();
                 st.pop();
             }

             st.push(c);
         }
     }

     // Empty the remaining stack
     while(!st.empty()) {
         res += st.top();
         st.pop();
     }

     cout << res << endl;
 }
void infixtoprefix(string &s){
    stack<char>st;
    reverse(s.begin(), s.end()); 
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(')
            s[i] = ')';
        else if(s[i] == ')')
            s[i] = '(';
    }   
    string res;
    for(auto ch: s){
        char c = ch;
        if((c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9')) {
            res += c;
        }
        else if(c == '('){
            st.push(c);
        }
        else if (c == ')'){
            while(!st.empty() && st.top()!= '('){
                res+=st.top();
                st.pop();
            }
          if(!st.empty())
            st.pop();
        }
        else{
            while(!st.empty() && prec(c) <= prec(st.top())){
                res+=st.top();
                st.pop();
            } 
            st.push(c);
        }

    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}

void postfixtoinfix(string &s) {
    stack<string> st;

    for(auto ch : s) {
        char c = ch;

        // Operand
        if((c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9')) {

            st.push(string(1, c));
        }

        // Operator
        else {
            string t1 = st.top();
            st.pop();

            string t2 = st.top();
            st.pop();

            string temp = "(" + t2 + c + t1 + ")";

            st.push(temp);
        }
    }

    cout << st.top() << endl;
}
void prefixtoinfix(string &s) {
    stack<string> st;

    reverse(s.begin(), s.end());

    for(auto ch : s) {

        // Operand
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9')) {

            st.push(string(1, ch));
        }

        // Operator
        else {
            string t1 = st.top();
            st.pop();

            string t2 = st.top();
            st.pop();

            string temp = "(" + t1 + ch + t2 + ")";

            st.push(temp);
        }
    }

    cout << st.top() << endl;
}
void prefixtopostfix(string &s){
    reverse(s.begin(),s.end());
    stack<string> st;
    string res;
    for(auto ch : s){
       if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9')) {

            st.push(string(1, ch));
        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            st.push(t1 + t2 + ch);
        }
    }
    cout<<st.top()<<endl;
}
void posttoprefix(string &s){
    string res;
    stack<string>st;
    for(auto ch : s){
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9')) {

            st.push(string(1, ch));
        } 
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
             st.push(string(1, ch) + t2 + t1);

        }
    }
    cout<<st.top()<<endl;
}
void nextsmallestno(vector<int> &nums){
    stack<int>st;
    int n = nums.size();
    vector<int>nse(n,-1);
    for(int i = nums.size()-1;i>=0;i--){
        while(!st.empty() && st.top()>=nums[i]){
            st.pop();
        }
        if(!st.empty()){
            nse[i] = st.top();
        }
        st.push(nums[i]);
    }
    for(auto ch : nse){
        cout<<ch<<" ";
    }
}
void nextgreaterno(vector<int> &nums){
    stack<int>st;
    int n = nums.size();
    vector<int>nge(n,-1);
    for(int i = n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums[i]){
            st.pop();
        }
        if(!st.empty()) {
            nge[i] = st.top();
        }

        st.push(nums[i]);
    }
     for(int x : nge) {
        cout << x << " ";
    }
}
int main(){
    // string s;
    // cin >> s;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // infixtopostfix(s);
    // infixtoprefix(s);
    // postfixtoinfix(s);
    // prefixtoinfix(s);
    // prefixtopostfix(s);
    // posttoprefix(s);
    // nextsmallestno(nums);
    nextgreaterno(nums);

    return 0;
}