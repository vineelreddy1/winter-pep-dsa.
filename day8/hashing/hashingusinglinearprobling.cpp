#include <iostream>
using namespace std;

class HashTable {
    int table[6];
    int size = 6;

public:
    HashTable() {
        // Initialize all positions as -1 (empty)
        for(int i = 0; i < size; i++)
            table[i] = -1;
    }

    // Hash function
    int hashFunction(int key) {
        return key % size;
    }

    // Insert function using Linear Probing
    void insert(int key) {
        int index = hashFunction(key);

        // If slot empty, insert directly
        if(table[index] == -1) {
            table[index] = key;
        }
        else {
            // Collision handling
            int i = 1;
            while(i < size) {
                int newIndex = (index + i) % size;
                if(table[newIndex] == -1) {
                    table[newIndex] = key;
                    return;
                }
                i++;
            }
            cout << "Hash Table is Full!\n";
        }
    }

    // Display function
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
    ht.insert(25);
    ht.insert(36);
    ht.insert(20);
    ht.insert(18);

    ht.display();

    return 0;
}
