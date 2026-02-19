#include <iostream>
#include <list>
using namespace std;

class HashTable {
    int size = 6;
    list<pair<string, int>> table[6];   // store string and ascii sum

public:

    // Function to calculate ASCII sum of string
    int getAsciiSum(string str) {
        int sum = 0;
        for(char ch : str) {
            sum += int(ch);
        }
        return sum;
    }

    // Hash function
    int hashFunction(string str) {
        int asciiSum = getAsciiSum(str);
        return asciiSum % size;
    }

    // Insert function
    void insert(string str) {
        int asciiSum = getAsciiSum(str);
        int index = asciiSum % size;

        table[index].push_back({str, asciiSum});
    }

    // Display function
    void display() {
        cout << "\nHash Table:\n";
        for(int i = 0; i < size; i++) {
            cout << i << " -> ";
            for(auto pair : table[i]) {
                cout << pair.first << " -> " << pair.second << "   ";
            }
            cout << endl;
        }
    }
};

int main() {

    HashTable ht;

    ht.insert("cat");
    ht.insert("dog");
    ht.insert("bat");
    ht.insert("apple");

    ht.display();

    return 0;
}
