// #include <bits/stdc++.h>
// using namespace std;

// class ArrayStack {
// private:
//     // Array to hold elements
//     int* stackArray;
//     // Maximum capacity
//     int capacity; 
//      // Index of top element  
//     int topIndex;   

// public:
//     // Constructor
//     ArrayStack(int size = 1000) {
//         capacity = size;
//         stackArray = new int[capacity];
//         // Initialize stack as empty
//         topIndex = -1; 
//     }

//     // Destructor
//     ~ArrayStack() {
//         delete[] stackArray;
//     }

//     // Pushes element x 
//     void push(int x) {
//         if (topIndex >= capacity - 1) {
//             cout << "Stack overflow" << endl;
//             return;
//         }
//         stackArray[++topIndex] = x;
//     }

//     // Removes and returns top element
//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack is empty" << endl;
//             // Return invalid value
//             return -1; 
//         }
//         return stackArray[topIndex--];
//     }

//     // Returns top element
//     int top() {
//         if (isEmpty()) {
//             cout << "Stack is empty" << endl;
//             return -1; 
//         }
//         return stackArray[topIndex];
//     }

//    /* Returns true if the 
//    stack is empty, false otherwise*/
//     bool isEmpty() {
//         return topIndex == -1;
//     }
// };

// // Main Function
// int main() {
//     ArrayStack stack;
//     vector<string> commands = {"ArrayStack", "push", "push", "top", "pop", "isEmpty"};
//     vector<vector<int>> inputs = {{}, {5}, {10}, {}, {}, {}};

//     for (size_t i = 0; i < commands.size(); ++i) {
//         if (commands[i] == "push") {
//             stack.push(inputs[i][0]);
//             cout << "null ";
//         } else if (commands[i] == "pop") {
//             cout << stack.pop() << " ";
//         } else if (commands[i] == "top") {
//             cout << stack.top() << " ";
//         } else if (commands[i] == "isEmpty") {
//             cout << (stack.isEmpty() ? "true" : "false") << " ";
//         } else if (commands[i] == "ArrayStack") {
//             cout << "null ";
//         }
//     }

//     return 0;
// }


//  {this is queue propty }

// #include <bits/stdc++.h>
// using namespace std;

// // Class implementing Queue using Arrays
// class ArrayQueue {
//     // Array to store queue elements
//     int* arr;
//     // Indices for start and end of the queue
//     int start, end;
//     // Current size and maximum size of the queue
//     int currSize, maxSize;

// public:
//     // Constructor
//     ArrayQueue() {
//         arr = new int[10];
//         start = -1;
//         end = -1;
//         currSize = 0;
//         maxSize = 10;
//     }

//     // Method to push an element into the queue
//     void push(int x) {
//         // Check if the queue is full
//         if (currSize == maxSize) {
//             cout << "Queue is full\nExiting..." << endl;
//             exit(1);
//         }
        
//         // If the queue is empty, initialize start and end
//         if (end == -1) {
//             start = 0;
//             end = 0;
//         } 
//         else {
//             // Circular increment of end
//             end = (end + 1) % maxSize;
//         }
            
//         arr[end] = x;
//         currSize++;
//     }

//     // Method to pop an element from the queue
//     int pop() {
//         // Check if the queue is empty
//         if (start == -1) {
//             cout << "Queue Empty\nExiting..." << endl;
//             exit(1);
//         }
//         int popped = arr[start];
        
//         // If the queue has only one element, reset start and end
//         if (currSize == 1) {
//             start = -1;
//             end = -1;
//         }
//         else {
//             // Circular increment of start
//             start = (start + 1) % maxSize;
//         }
        
//         currSize--;
//         return popped;
//     }

//     // Method to get the front element of the queue
//     int peek() {
//         // Check if the queue is empty
//         if (start == -1) {
//             cout << "Queue is Empty" << endl;
//             exit(1);
//         }
//         return arr[start];
//     }

//     // Method to determine whether the queue is empty
//     bool isEmpty() {
//         return (currSize == 0);
//     }
// };

// int main() {
//     ArrayQueue queue;
//     vector<string> commands = {"ArrayQueue", "push", "push", 
//                                "peek", "pop", "isEmpty"};
//     vector<vector<int>> inputs = {{}, {5}, {10}, {}, {}, {}};

//     for (int i = 0; i < commands.size(); ++i) {
//         if (commands[i] == "push") {
//             queue.push(inputs[i][0]);
//             cout << "null ";
//         } else if (commands[i] == "pop") {
//             cout << queue.pop() << " ";
//         } else if (commands[i] == "peek") {
//             cout << queue.peek() << " ";
//         } else if (commands[i] == "isEmpty") {
//             cout << (queue.isEmpty() ? "true" : "false") << " ";
//         } else if (commands[i] == "ArrayQueue") {
//             cout << "null ";
//         }
//     }

//     return 0;
// }

// {the stack using linkedlist }

#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int val;
    Node *next;
    Node(int d) {
        val = d;
        next = NULL;
    }
};

// Structure to represent stack
class LinkedListStack {
private:
    Node *head; // Top of Stack
    int size; // Size

public:
    // Constructor
    LinkedListStack() {
        head = NULL;
        size = 0;
    }

    // Method to push an element onto the stack
    void push(int x) {
        // Creating a node 
        Node *element = new Node(x);
        
        element->next = head; // Updating the pointers
        head = element; // Updating the top
        
        // Increment size by 1
        size++;
    }

    // Method to pop an element from the stack
    int pop() {
        // If the stack is empty
        if (head == NULL) {
            return -1; // Pop operation cannot be performed
        }
        
        int value = head->val; // Get the top value
        Node *temp = head; // Store the top temporarily
        head = head->next; // Update top to next node
        delete temp; // Delete old top node
        size--; // Decrement size
        
        return value; // Return data
    }
    
    // Method to get the top element of the stack
    int top() {
        // If the stack is empty
        if (head == NULL) {
            return -1; // Top element cannot be accessed
        }
        
        return head->val; // Return the top
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return (size == 0);
    }
};

int main() {
    // Creating a stack
    LinkedListStack st;

    // List of commands
    vector<string> commands = {"LinkedListStack", "push", "push", 
                               "pop", "top", "isEmpty"};
    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            st.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << st.pop() << " ";
        } else if (commands[i] == "top") {
            cout << st.top() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (st.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "LinkedListStack") {
            cout << "null ";
        }
    }

    return 0;
}