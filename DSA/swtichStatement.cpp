// #include<iostream>
// using namespace std;

// int main(){

//     char ch = '1';

//    switch (ch ){

//     case 1: cout<< "first"<<endl;

//     case '1' : cout<< "second"<<endl;

//     default: cout << " it is default"<<endl;
//    }
// }
// -------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int factorial(int a){
    int fact=1;

    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int a, int b){

    int num = factorial(a);

    int denom = factorial(a-b);

    int combination = num/denom;

    return combination;
}


int main (){
    int a,b;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter te second no."<<endl;
    cin>>b;

cout<< "combination :"<< nCr(a,b)<<endl;

}