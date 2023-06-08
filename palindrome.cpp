#include<iostream>
using namespace std;




    void fun(){
        int n;

        string s;
        cin>>s;
        
        // for (int i = 0; i < n; i++)
        // {
        //     cin>> string s[i];
        // }
        
        n = s.length();
        
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if ( s[i]!=s[n-i-1])
            {
                ok = false;
                break;
            }
            
            
        }
        if (ok==true)
        {
            cout<<"palindrome";
        }else{
            cout<<"not a palindrome";
        }
        
        
        
    }

int main() {

    fun();

}
// -----------------------------------------------------------------------------------------------------------------------------------