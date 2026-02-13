#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int>s;
    stack<int>s1;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.push(400);
    s1.push(500);

    s.swap(s1);

    cout << "Top element in stack 1 : " << s.top() << endl;
    cout << "Top element in stack 2 : " << s1.top() << endl;

    cout << "stack size: " << s.size() << endl;



    cout << "Elements in stack 1 are: " ;
    
    while(!s.empty()){

        cout << s.top() << " | ";
        s.pop();

    }

    cout << endl;
    
    cout << "stack size: " << s.size();
    cout << endl;


    cout << s.empty() << endl; // return 1 , when its true.






    

}


