#include<iostream>
using namespace std;

void fun(){
    int n= 0;
    n++;
    cout<<n<<endl;
    
    
}
void fun2(){
    
    static int x = 0;
    x++;
    cout<<x;
}
int main(){
    
    fun();
    fun();
    fun();
    
    fun2();
    fun2();
    fun2();
}