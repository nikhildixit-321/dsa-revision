#include<bits/stdc++.h>
using namespace std;

class bineryheap {
public:
    int arr[100];
    int size;

    bineryheap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size++;
        int i = size;
        arr[i] = val;

        while(i > 1) {
            int p = i / 2;

            if(arr[p] > arr[i]) {
                swap(arr[p], arr[i]);
                i = p;
            }
            else {
                return;
            }
        }
    }
   void deleteHeap() {
    if(size == 0) {
        cout << "Heap is empty";
        return;
    }

    // root ko last element se replace
    arr[1] = arr[size];
    size--;

    int i = 1;

    while(i <= size) {
        int left = 2 * i;
        int right = 2 * i + 1;

        int smallest = i;

        if(left <= size && arr[left] < arr[smallest]) {
            smallest = left;
        }

        if(right <= size && arr[right] < arr[smallest]) {
            smallest = right;
        }

        if(smallest == i) {
            break;
        }

        swap(arr[i], arr[smallest]);
        i = smallest;
    }
}
bool check_heap(vector<int>& nums, int i) {

    int n = nums.size();

    // leaf node hai, to uske children nahi hote
    if (i >= n / 2) {
        return true;
    }

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // Min Heap check
    if (l < n && nums[l] < nums[i]) {
        return false;
    }

    if (r < n && nums[r] < nums[i]) {
        return false;
    }

    // next node check
    return check_heap(nums, i + 1);
}

    void print() {
        for(int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    bineryheap h;

    // h.insert(5);
    // h.insert(6);
    // h.insert(7);
    // h.insert(8);
    // h.insert(2);
    // h.insert(1);
    // h.deleteHeap();
    // h.print();
    
   vector<int> nums = {10, 20, 30, 25, 15};

    cout << h.check_heap(nums, 0);


    return 0;
}