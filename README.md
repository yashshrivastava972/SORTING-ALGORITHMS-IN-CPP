# Aim: To Study & Implement Sorting Algorithm.

# Tool: VS CODE.

# Theory: 

A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.

•	Selection Sort
In selection sorting technique, the smallest element is fetched by comparing itself with the rest of the elements and sorted at the array's first position. The complete array is divided into two halves, the sorted subarray on the left and the unsorted subarray on the right. Once the first element is sorted, the search for the second minimum element begins from the rest of the array and is positioned at second place.


<img width="568" height="524" alt="image" src="https://github.com/user-attachments/assets/88bb52b5-44ee-4a02-aea8-498f9be78be2" />

Similarly, all the elements are positioned on the sorted side of the subarray one after the other, and the complete array becomes a sorted array.

•	Insertion Sort
In this sorting technique, the elements are sorted by comparing the elements with their previous elements. It starts by comparing the second element with the first element. If the second element is smaller than the first, then we will swap it.

<img width="544" height="403" alt="image" src="https://github.com/user-attachments/assets/886e8b67-4a38-447d-8855-8d93afd6a232" />

After that, we will compare the third element with all the elements that are before it. Similarly, it goes for the fourth element and so on. Once all the comparisons are made, the elements become sorted.

•	Bubble Sort
Bubble sort is one of the most straightforward sorting algorithms. In this sorting technique, we begin by comparing the first two elements of the array and checking if the first element is greater than the second element; if it is, we will swap those elements and move forward to the next element.

<img width="654" height="252" alt="image" src="https://github.com/user-attachments/assets/ff87e2a0-68be-4e69-8f70-f56b7a5db4d7" />

If the first element is not greater than the second, then we don’t need to swap it. And this process will keep on repeating till the end of the array.

<img width="660" height="444" alt="image" src="https://github.com/user-attachments/assets/d5708dca-da1a-4d6a-b8a3-b8e8e4213880" />

Quick Sort – Theory

Definition:
Quick Sort is an efficient divide-and-conquer sorting algorithm. It works by selecting a pivot element, partitioning the array into two subarrays: elements less than pivot and elements greater than pivot, and then recursively sorting the subarrays.

Characteristics:

Divide-and-conquer algorithm; divides array into subarrays around a pivot.

Time Complexity:

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n²) → occurs when pivot selection is poor (e.g., already sorted array).

Space Complexity: O(log n) → due to recursive calls

Fast and efficient for large datasets.

Applications:

Used in large datasets, database sorting, and standard libraries. 

# Algorithms:

## Algorithm for Selection Sort
1. Start

Begin the program execution.

2. Input

Read the number of elements n in the array.

Read the n elements and store them in arr[].

3. Sorting Operation

For i = 0 to n-2 (iterate through the array):
a. Set minIndex = i
b. For j = i+1 to n-1:

If arr[j] < arr[minIndex], update minIndex = j
c. Swap arr[i] and arr[minIndex] (place the smallest element at the correct position)

4. Output

Display the sorted array after completing all iterations.

5. End

Terminate the program.

## Algorithm for Bubble Sort
1. Start

Begin program execution.

2. Input

Read the number of elements n in the array.

Read the n elements and store them in arr[].

3. Sorting Operation

For i = 0 to n-2 (number of passes):
a. Initialize swapped = false
b. For j = 0 to n-i-2:

Compare arr[j] and arr[j+1]

If arr[j] > arr[j+1], swap them and set swapped = true
c. If swapped == false, break (array is already sorted)

4. Output

Display the sorted array after completing all passes.

5. End

Terminate the program.

## Algorithm for Quick Sort
1. Start

Begin program execution.

2. Input

Read the number of elements n in the array.

Read the n elements and store them in arr[].

3. Quick Sort Operation

QuickSort(arr, low, high) function:

If low < high:
a. Call partition(arr, low, high) to find the pivot index pi.
b. Recursively sort the left subarray: quickSort(arr, low, pi-1)
c. Recursively sort the right subarray: quickSort(arr, pi+1, high)

Partition(arr, low, high) function:

Choose the last element as pivot.

Initialize i = low - 1 (index of smaller element).

For j = low to high - 1:

If arr[j] <= pivot, increment i and swap arr[i] and arr[j].

Swap arr[i+1] and pivot.

Return pivot index i+1.

4. Output

Display the sorted array after Quick Sort completes.

5. End

Terminate the program.

## Algorithm for Insertion Sort
1. Start

Begin program execution.

2. Input

Read the number of elements n in the array.

Read the n elements and store them in arr[].

3. Sorting Operation

For i = 1 to n-1 (iterate through the array):
a. Set key = arr[i]
b. Initialize j = i - 1
c. While j >= 0 and arr[j] > key:

Move arr[j] one position to the right (arr[j+1] = arr[j])

Decrement j
d. Insert key at position j+1

4. Output

Display the sorted array after completing all iterations.

5. End

Terminate the program. 


# Conclusion:

The experiment helped in understanding and implementing various sorting algorithms such as Selection Sort, Bubble Sort, Insertion Sort, and Quick Sort.

Simple sorts (Selection, Bubble, Insertion) are easy to implement but less efficient for large datasets.

Quick Sort is fast and suitable for large arrays.

Choosing the appropriate algorithm depends on data size and order.
Overall, the experiment enhanced practical skills in sorting and algorithm analysis.
