#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class MaxHeap{
    private:
    vector<int>heap;

    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }


    public:
    void insert(int key){
        heap.push_back(key);
        int i = heap.size()-1;
        while(i!=0 && heap[parent(i)]<heap[i]){
            swap(heap[parent(i)],heap[i]);
            i = parent(i);
        }
    }
    void removeMax(){
        if(heap.size()==0){
            cout<<"Heap is empty"<<endl;
            return;
        }
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }
    
    
    // This function is used to maintain the max-heap property after removing the maximum element (the root)
    // or when the heap is modified in a way that may violate the max-heap property.
    // It ensures that the subtree rooted at index i satisfies the max-heap property by comparing the node with 
    //its children and swapping it with the largest value if necessary, then recursively heapifying down the affected subtree.
    
    void heapifyDown(int i){
        int l = left(i);
        int r = right(i);
        int largest = i;
        if(l<heap.size() && heap[l]>heap[i]){
            largest = l;
        }
        if(r<heap.size() && heap[r]>heap[largest]){
            largest = r;
        }
        if(largest!=i){
            swap(heap[i],heap[largest]);
            heapifyDown(largest);
        }
    }
    //this function is not needed as we are already doing heapify up in insert function
    // void heapifyUp(int i){
    //     while(i!=0 && heap[parent(i)]<heap[i]){
    //         swap(heap[parent(i)],heap[i]);
    //         i = parent(i);
    //     }
    // }


    void print(){
        for(int i=0;i<heap.size();i++){
            cout<<heap[i]<<" ";
        }
        cout<<endl;
    }


};

int main() {

        MaxHeap h;
        h.insert(3);
        h.insert(2);
        h.insert(15);
        h.insert(20);
        h.insert(5);
        h.insert(4);
        h.insert(45);

        
        cout << "Max-Heap array: ";
        h.print();
        
        h.removeMax();
        cout << "Max-Heap array after removing max: ";
        h.print();

        // h.heapifyUp(5);

        // cout << "Max-Heap array after heapifyUp: ";
        // h.print();

    

    return 0;
}