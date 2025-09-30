// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SORTING ALGORITHMS - BUBBLE (EXPERIMENT: 21B)

// CODE: 

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped in inner loop, array is sorted
        if (!swapped) break;
    }
}

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

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    displayArray(arr, n);

    return 0;
}

// OUTPUT:

// Enter number of elements: 5
// Enter 5 elements: 64 34 25 12 22
// Original Array: 64 34 25 12 22 
// Sorted Array: 12 22 25 34 64 

