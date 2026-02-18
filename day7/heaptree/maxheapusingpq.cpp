#include <iostream>
#include<queue>
#include<vector>

using namespace std;

void printMaxHeap(priority_queue<int> pq) {
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main() {

    priority_queue<int> pq; 
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(23);
    pq.push(12);
    cout << "Max element: " << pq.top() << endl; 

    cout << "Max Heap elements: ";
    printMaxHeap(pq);

    

    return 0;
}