#include<iostream>
using namespace std;

class Teacher {
    public:

    string name;
    int id;

    void insert (int i, string n){
        name = n;
        id = i;
}
    void display (){
        cout<< name<< " "<< id;
    
    }

    // this-> is used to when we are using name inplace of n ans 

};
int main(){
    Teacher s1;
    Teacher s2;
    s1.insert(114584,"Mr.Abhinacv");
    s1.display();
    s2.insert(114584,"Mr.hello");
    s2.display();
}