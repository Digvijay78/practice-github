#include<iostream>
using namespace std;

class Student {

    public:

    void insert(){

    cout<<"hi i am public";
    }

    private:
    int length = 0;
  
    friend int abc(Student) ;
};
int abc(Student s1){
    s1.length += 10;
    return  s1.length;
}
int main(){
    Student s1;
    cout<< "length ="<< abc(s1);
    
}