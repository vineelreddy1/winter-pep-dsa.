#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {

    int pivot = arr[high];   // Divide step
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort (Divide and Conquer)
void quickSort(int arr[], int low, int high) {

    if(low < high) {

        int pi = partition(arr, low, high); // Divide

        quickSort(arr, low, pi - 1);  // Conquer left
        quickSort(arr, pi + 1, high); // Conquer right
    }
}

int main() {

    int arr[] = {9, 3, 7, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}