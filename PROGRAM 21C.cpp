// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SORTING ALGORITHMS - QUICK SORTING (EXPERIMENT: 21C)

// CODE: 

#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i+1] and pivot
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pi - 1);       // Sort left subarray
        quickSort(arr, pi + 1, high);      // Sort right subarray
    }
}

// Function to display array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original Array: ";
    displayArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    displayArray(arr, n);

    return 0;
}

// OUTPUT: 

// Enter number of elements: 6
// Enter 6 elements: 34 12 25 22 64 18
// Original Array: 34 12 25 22 64 18 
// Sorted Array: 12 18 22 25 34 64 
