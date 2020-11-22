using namespace std;

void insertionSort(int arr[], int n)
{
    int i, element, swap;
    for (i = 1; i < n; i++)
    {
        element = arr[i]; // select element i
        swap = i - 1;

        while (swap >= 0 && arr[swap] > element) // shifts all elemenets to the right to create the position for unsorted element
        {
            arr[swap + 1] = arr[swap];
            swap = swap - 1;
        }
        arr[swap + 1] = element; // inserts the unsroted element into correct position
    }
}

// 6 | 5 4 3 2 1
// 4 6 | 5 3 2 1 
// 2 4 6 | 5 3 1
// 2 3 4 6 | 5 1
// 1 2 3 4 6 | 5
// 1 2 3 4 5 6

// 6 iterations


/*
Compare insertion sort to bubbleSort and selectionSort that was defined in class.

- Insertion sort transfers one element to a partially sorted array at a time, bubble sort compares the value of an element
to the ones next to it and swaps it if it's in the wrong order, selection sort moves each element at most once by setting a 
min index and min value.

This video is pretty cool to visualise different sorting algorithms: https://www.youtube.com/watch?v=kPRA0W1kECg

Selection Sort: 0:00
Insertion Sort: 0:11
Bubble Sort: 4:01

*/