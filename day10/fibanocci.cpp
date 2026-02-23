#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cout<<"enter size of fibb series: ";
    cin>>n;
    int t1 = 0 ;
    int t2 = 1;
    for(int i = 0 ; i < n ; i++)
    {
        int fin = t1+t2;
        t1 = t2;
        t2 = fin;
        cout<<t1<<" ";
    }
}