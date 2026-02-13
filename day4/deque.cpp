#include <iostream>
#include<deque>
using namespace std;

void display(deque<int> &dq){


}

int main() {

    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);

    cout << "Element at the front: " << dq.front() << endl;
    cout << "Element at the back: " << dq.back() << endl;
    
    cout << "Elements in deque: " ;
    for(int i=0;i<dq.size();i++){
        cout << dq[i] << " ";
    }
    cout << endl;
    cout << "Element at index 1: " << dq[1] << endl;
    dq.pop_front();
    dq.pop_back();
    cout << "Elements in deque after deleting: " ;
    for(int i=0;i<dq.size();i++){
        cout << dq[i] << " ";
    }
    cout << endl;
    

    return 0;
}