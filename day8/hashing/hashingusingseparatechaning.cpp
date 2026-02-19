#include <iostream>
#include <list>
using namespace std;

class HashTable {
    int size = 6;
    list<int> table[6];   // Array of linked lists

public:
    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    void display() {
        cout << "\nHash Table:\n";
        for(int i = 0; i < size; i++) {
            cout << i << " --> ";
            for(int value : table[i]) {
                cout << value << " ";
            }
            cout << endl;
        }
    }
};

int main() {

    HashTable ht;

    ht.insert(12);
    ht.insert(36);
    ht.insert(18);
    ht.insert(14);
    ht.insert(15);
    ht.insert(25);

    ht.display();

    return 0;
}
