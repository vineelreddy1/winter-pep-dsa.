#include<iostream>
#include<vector>

using namespace std;

int main(){
    string s = "Vineel";
    string s1 = "VIneel";
    cout <<"Before appending: " <<s.length() << endl;
    s.append(" Reddy");

    cout << s << endl;

    s.insert(0,"V. ");
    cout << s << endl;


    cout << "After appending: " << s.capacity() << endl;

    // other operations of string
    //s.compare(s1); //-> to comapare two strings
    // s.find(); -> find a substring in a string
    // s.replace(); -> 
    // s.clear(); -> clears a string 
    // s.erase(); -> erases a part of string
    cout << s.substr(0,6) << endl;




    //converting string to int and vice versa


    string str = "123";
    int num = stoi(str);

    cout << num << endl;



    int n = 100;

    string nu = to_string(n);

    cout << n << endl;







    //finding the apperance of target string in a string.

    // string a = "aababaabbaaa";

    // string target = "aa";

    // int count = 0;

    // for(int i=0;i<a.length();i++){
    //     if(a.substr(i,target.length()) == target){
    //         count++;
    //     }
    // }

    // cout << "Apperance: " << count;



    //find the longest substring and how many times its repeating

    cout << "Enter the String : ";
    string sn;
    getline(cin,sn);
    cout << endl;
    cout << "Enter the sub string: ";
    string sub;
    getline(cin,sub);

    int count = 0;

    for(int i =0;i<sn.length();i++){
        if(sn.substr(i,sub.length()) == sub){
            count++;
        }
    }
    cout << "Apperance of substring (" << sub << "): " << count;




// leetcode question no ; 459,344,395


vector<int> v;


//125 and 242 (homework);






}