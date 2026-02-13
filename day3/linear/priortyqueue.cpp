#include <iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout << "largest element in the queue is : " ;
    cout << pq.top();

    pq.pop();

    cout << "Second largest element: ";
    cout << pq.top();



    

    

    return 0;
}