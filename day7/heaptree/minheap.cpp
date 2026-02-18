#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class MinHeap{
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
        int i = heap.size() - 1;
        while(i!=0 && heap[parent(i)] > heap[i]){
            swap(heap[parent(i)],heap[i]);
            i = parent(i);
        }
    }


    void removeMin(){
        if(heap.size() == 0){
            cout << "Heap is empty!!!";
        }

        heap[0] = heap.back();
        heap.pop_back();
        MinHeapify(0);

    }


    void MinHeapify(int i){
        int smallest = i;
        int l = left(i);
        int r = right(i);

        if(l < heap.size() && heap[l] < heap[i]){
            smallest = l;
        }
        if(r < heap.size() && heap[r] < heap[smallest]){
            smallest = r;
        }

        if(smallest != i){
            swap(heap[i],heap[smallest]);
            MinHeapify(smallest);
        }
    }


    void print(){
        for(int i=0;i<heap.size();i++){
            cout << heap[i] << " ";
        }

    }






};

int main(){

    MinHeap mh;

    mh.insert(10);
    mh.insert(20);
    mh.insert(7);
    mh.insert(6);
    mh.insert(5);
    mh.insert(1);

    cout << "ELEMENTS IN MIN-HEAP: ";
    mh.print();


    cout << endl;
    cout << "Elements after removing MIN: ";

    mh.removeMin();

    mh.print();

}

