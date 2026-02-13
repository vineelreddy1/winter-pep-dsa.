#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int main(){
    vector<int> v;
    // v.push_back(10);
    // v.push_back(50);
    // v.push_back(20);
    // v.push_back(12);
    cout << "Enter n elements , enter -1 to exit: ";

    while(true){

        int x;
        cin >> x;
        if(x==-1) break;
        v.push_back(x);
    }

    cout << "Size of an array: " ;
    cout << v.size()<< endl;

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    sort(v.begin(),v.end());
    cout << "Sorted array: ";
    
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.end(),3);
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    //deleteing element.
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }  
    cout << endl;


    cout <<"REversed array: "; 
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;


    int sum = 0;
    for(int x : v){
        sum+=x;
    }
    cout << "sum is : " << sum << endl;


    int max = 0;
    int min = INT_MAX;

    for(int x : v){
        if(x > max){
            max = x;
        }
    }
    for(int x : v){
        if(x < min){
            min = x;
        }
    }

    cout << "Maximum element is : " << max << endl;
    cout << "Maximum element is : " << min;


}