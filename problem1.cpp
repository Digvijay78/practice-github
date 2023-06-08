#include<iostream>
using namespace std;

int main (){

int n,z,and1,or1,xor1;
string s;
    cout<< "enter the value of n"<<endl;
    cin>>n;

    cout<< "enter String"<<endl;
    cin>> s;

    cout<< "enter the size of array"<<endl;
    cin>> z;

    int arr[z];

cout<< "enter the inputs of your array" ;
    for (int i = 0; i < z; i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Your array is:";

    
    for (int i = 0; i < z; i++)
    {
        cout<<arr[i];
    }
   and1 = arr[0];
   or1 = arr[0];
   xor1 = arr[0];
for (int i = 0; i < s.length(); i++)
{
    cout<<endl<<s[i];
}

cout<<"bitwise in work";

for(int i = 1; i<z; i++){
    
 and1 &= arr[i];
 or1 |= arr[i];
 xor1 ^= arr[i];
}
    cout<<and1<<endl<<or1<<endl<<xor1;

}