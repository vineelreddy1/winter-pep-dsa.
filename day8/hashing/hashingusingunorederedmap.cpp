#include <iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main() {

    unordered_map<int,string> um;

    um[0] = "Reddy";
    um[1] = "VineeL";
    um[2] = "Vathaluru";


    for(auto ele : um){
        cout << ele.first << "--> " << ele.second << " "  ;
    }

    

    return 0;
}