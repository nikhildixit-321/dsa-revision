#include<bits/stdc++.h>
using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }

//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }
// };
class Node{
    public:
     int data;
     Node* next;
     Node* prev;
    
     Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
     }
     Node(int data1, Node* next1 , Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
     }
};
bool searchNode(Node* head, int val){
    Node* temp  = head;
    while(temp != nullptr){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main() {

    vector<int> arr = {2, 5, 8, 7};
    int val = 9;
    // First node
    Node* head = new Node(arr[0]);

    // Create remaining nodes
    Node* prev = head;

    // for(int i = 1; i < arr.size(); i++) {

    //     Node* temp = new Node(arr[i]);

    //     mover->next = temp;
    //     mover = temp;
    // }
   for(int i=1;i<arr.size();i++){
      Node* temp   = new Node(arr[i],nullptr, prev);
      prev->next = temp;
      prev= temp;
   }
   Node* temp  = head;
   while(temp != nullptr){
     cout<<temp->data<<" ";
     temp = temp->next ;
   }
//    cout<<searchNode(head,val);

    //  count the no. of node 
    // int cnt =0;
    // Node* temp = head;
    // while(temp != nullptr){
    //    cnt++;
    //    temp= temp->next;
    // }
    // cout<<cnt;


    // Insert at beginning
    // int n;
    // cin >> n;

    // Node* temp = new Node(n);

    // temp->next = head;
    // head = temp;

    // // Traverse
    // Node* rem = head;

    // while(rem != nullptr) {
    //     cout << rem->data << " ";
    //     rem = rem->next;
    // }

    return 0;
}