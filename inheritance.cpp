#include<iostream>
using namespace std;

class LPU {
    private:
    int exams = 0;

    public :
    int fees = 50000;
    int timetable = 1;


} ;

class Student:private LPU {
public:
    string name = "Digvijay Sigh";

    void display (){
        cout<< timetable << " "<< fees<<"\n";
    }

};
int main(){
    Student s1;
    s1.display();
}
// -------------------------------------------------------------------------------------------------------------------------

// MULTIPLE INHERITANCE WITH AMBIGUITY
// ------------------------------------------------------------------------------------------------------------------------



#include<iostream>
using namespace std;

class A {
    public :
    int a =1;
    void display(){
        cout<< a<<"\n";
    }
};
class B:public A{
    public:
    int b =2;
    void display(){
        cout<< b<<"\n";
    }
};

class C : public A, public B{
    public:
    void display(){
        B::display();
    }
};

int main(){

    B b;
    b.A::display();
C c;
c.display();
}