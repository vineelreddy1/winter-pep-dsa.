#include <iostream>
#include<list>
using namespace std;

int main() {

    list<int> dll;

    dll.push_back(11);
    dll.push_front(12);
    dll.push_front(13);
    dll.push_front(14);
    dll.remove(11);



    for (auto i : dll){

        cout << i << " ";
    }

    return 0;
}