#include<iostream>
using namespace std;

class Teacehr {

    string name;
    int id;

    insert (int i, string n){
        name = n;
        id = i;

    display (){
        cout<< name<< " "<< id;
    }
    }

};
int main(){
    Teacher s1;
    Teacher s2;
    s1.insert(114584,"Mr.Abhinacv");
    s1.display();
    s2.insert(114584,"Mr.hello");
    s2.display();
}