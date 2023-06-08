#include<iostream>
using namespace std;

class Teacher {
    public:
    static int id ;
    static int salary ;
    
};
int Teacher::id=2; 
int main(){

Teacher t1,t2;
cout<<t1.id<<" "<<t2.id;
}