#include<iostream>
#include<algorithm>

using namespace std;


void bubblesort(int arr[],int n){
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
int main(){

    cout << "ENter size of array: " ;
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter elements for array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Elements before Sorting: ";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout << endl;

    bubblesort(arr,n);
    cout << "Sorted Elements: ";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}