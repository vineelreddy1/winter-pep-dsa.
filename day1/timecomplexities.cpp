#include<iostream>

using namespace std;


int main(){

    int arr[] = {1,2,3,4};
    // accessing the element in array gives timecomplexity O(1);
    cout  << "Element: " << arr[0] << endl;
    //traversing the elements in array gives O(n);
    cout << "Elements: ";
    for(int i=0;i<4;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    //O(logn)
    int low = 0;
    int high = 4;

    int size = (low+high)/2;
    cout << size << endl;

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }















    


}