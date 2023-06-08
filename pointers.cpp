#include<iostream>
using namespace std;

int main(){

    int n = 89;
    int *p = &n;

    cout<< " integer value is :"<< n;
    cout<< " address value is :"<< p;
    cout<< " address value is :"<< &n;
}