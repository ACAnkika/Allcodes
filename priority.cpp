#include <iostream>
#include <vector>

using namespace std;
void maxHeapify(vector<int>& arr, int n, int i) {
    int largest = i;        
    int left = 2 * i + 1;  
    int right = 2 * i + 2;  

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i) {
        maxHeapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; --i) {
        swap(arr[0], arr[i]); 
        maxHeapify(arr, i, 0); // Call maxHeapify
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    heapSort(arr);

    cout << "Sorted array using Heap Sort (MAX Heap): ";
    for (int num : arr[]) {
        cout << num << " ";
    }
    return 0;
}

implement a priority queue in a MAX Heap and demonstrate the following operations :
	1. Insert(key) : add an element to priority queue.back
    2. remove(): Remove and resturn the element with highest priority. 
	write the absolute correct cpp code with no inbult function usuage and just simple user made code.   
