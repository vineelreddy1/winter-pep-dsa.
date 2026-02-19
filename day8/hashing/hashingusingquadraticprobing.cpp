#include <iostream>
using namespace std;

class HashTable {
    int table[6];
    int size = 6;

public:
    HashTable() {
        for(int i = 0; i < size; i++)
            table[i] = -1;   // -1 means empty
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);

        if(table[index] == -1) {
            table[index] = key;
        }
        else {
            for(int i = 1; i < size; i++) {
                int newIndex = (index + i*i) % size;

                if(table[newIndex] == -1) {
                    table[newIndex] = key;
                    return;
                }
            }
            cout << "Hash Table is Full!\n";
        }
    }

    void display() {
        cout << "\nHash Table:\n";
        for(int i = 0; i < size; i++) {
            cout << i << " --> " << table[i] << endl;
        }
    }
};

int main() {

    HashTable ht;

    ht.insert(12);
    ht.insert(36);
    ht.insert(18);

    ht.display();

    return 0;
}
