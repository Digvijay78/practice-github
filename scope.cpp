#include<iostream>
using namespace std;

int x = 5;
int main(){

int x = 2;

cout<<x<<endl;  // ans is 2
cout<<::x;      // ans is 5


int z = 5;
if (z==4)
{
    int a =6;
    cout<< a;
}
else
{
    cout<<a+6<<endl; // here a is nothing beCAUSE a is only availble for the above the loop, if declare it above with the intx then it would have printed
}



}

