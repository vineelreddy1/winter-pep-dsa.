#include<iostream>
using namespace std;


void asciicount(string s){
    int sum = 0;
    for(char ch : s){
        sum+=int(ch);
    }
    cout << sum;
}

int main(){

    string s = "Vineel";
    asciicount(s);

}