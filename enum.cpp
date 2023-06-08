#include<iostream>
using namespace std;

enum week { monday=7, tuesday = 8, wednesday, thursday = 9,friday =2, saturday =0, sunday =0 }

int main(){

    week day;
    day = tuesday;
    week day2;
    day2= wednesday;

    cout<< day << " "<< day2;
}