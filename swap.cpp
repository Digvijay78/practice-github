#include<iostream>
using namespace std;

void swap(int &a, int &b){

a = a^b;
b = a^b;
a = a^b;
// cout<<a<<endl<<b;


}

int main (){

int a=3,b=5;

cout<< "before swaping"<< a<<" "<<b;
swap(a,b);
cout<<"before swaping"<< a<<" "<<b;




}