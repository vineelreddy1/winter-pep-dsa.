#include <iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main() {

    forward_list<int> dll;
    auto it = dll.begin();
    if(it == dll.end()){
        it = dll.begin();
    }

    dll.push_front(12);
    dll.push_front(13);
    dll.push_front(14);


    for(auto i : dll){
        cout << i << " ";
    }

    return 0;
}