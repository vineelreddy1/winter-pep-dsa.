#include<iostream>
#include<unordered_set>


using namespace std;


int main(){

    unordered_set<int> us;

    us.insert(10);
    us.insert(12);
    us.insert(9);
    us.insert(16);
    us.insert(99);
    us.insert(27);
    us.insert(1);


    cout << "Elements at unordered set are: ";

    for(auto ele : us){
        cout << ele << " ";
    }

}