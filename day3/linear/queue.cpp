#include <iostream>
#include<queue>
using namespace std;


void print(queue<int>&q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}

// void memory(queue<int>&q,int n){
//     q.pop();
//     q.push(n);

// }

int main() {

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);


    cout << "LAst element: " << q.back() << endl;

    // cout << "Elements in the queue are: " ;
    // print(q);
    // cout << endl;


    int n;
    cout << "Enter the value to push into the queue: ";
    cin >> n;


    if(q.size() >= 4){
        q.pop();
    }

    q.push(n);

    // memory(q,n);
    cout << "Elements in the queue are: " ;
    print(q);
    cout << endl;

    print(q);



    



    return 0;
}