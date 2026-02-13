/*
          Linked List using stl
| Function       | Meaning                |
| -------------- | ---------------------- |
| `push_front()` | Insert at beginning    |
| `push_back()`  | Insert at end          |
| `pop_front()`  | Delete from beginning  |
| `pop_back()`   | Delete from end        |
| `insert()`     | Insert at any position |
| `erase()`      | Delete at any position |
| `remove(val)`  | Remove all occurrences |
| `sort()`       | Sort the list          |
| `reverse()`    | Reverse the list       |
| `size()`       | Number of elements     |
*/
#include <iostream>
#include<list>
using namespace std;

int main() {

    list<int> linkedlist;

    //Entering elements in the Linked List

    linkedlist.push_back(10);
    linkedlist.push_front(12);
    linkedlist.push_front(15);
    linkedlist.push_front(14);
    linkedlist.push_back(13);
    linkedlist.push_back(16);
    linkedlist.push_back(17);


    cout << "ELements in the Linked list: " ;
    for(int i : linkedlist){
        cout << i << " ";
    }
    cout << endl;
    

    //poping elements from linkedlist
    linkedlist.pop_back();
    linkedlist.pop_front();
    cout << "Elements after deleting using PoP: ";
    for(int i : linkedlist){
        cout << i << " ";
    }
    cout << endl;


    //reversing the linked list 
    cout << "ELements in reverse order: ";
    linkedlist.reverse();

    for(int i : linkedlist){
        cout << i << " ";
    }
    cout << endl;


    
    
    
    cout << "SIze: " <<  linkedlist.size() << endl;
    
    
    
    
    auto it = linkedlist.begin();
    cout << "Elements after Inserting at certain position: ";
    
    linkedlist.insert(++it,20);
    for(int i : linkedlist){
        cout << i << " ";
    }
    cout << endl;
    cout << "SIze: " <<  linkedlist.size() << endl;
    
    
    auto it1 = linkedlist.begin();
    
    cout << "Elements after deleting at pos[0] :  ";
    linkedlist.erase(it1);
    for(int i : linkedlist){
        cout << i << " ";
    }
    cout << endl;
    
    
    
    
    //sorted elements 
    cout << "Sorted LInked list: ";
    linkedlist.sort();
    for(int i : linkedlist){
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}
