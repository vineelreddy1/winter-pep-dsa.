#include <iostream>
using namespace std;



int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
        return i;  // index found
    }
    return -1; // not found
}
int main() {
    int n = 5;
    int arr[] = {1,2,3,4,5};

    cout << "Index: " << linearSearch(arr,n,3);





    

    return 0;
}