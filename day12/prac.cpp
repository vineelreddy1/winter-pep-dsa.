#include<iostream>
#include<list>
#include<algorithm>


using namespace std;


int main(){

    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(2);
    l1.push_back(1);
    
    
    list<int> l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(2);


    reverse(l2.begin(),l2.end());

    if(l1 == l2){
        cout << "Palindrome";
    }
    else{
        cout <<  "Not palindrome";
    }



}