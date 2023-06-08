#include<iostream>
using namespace std;

int main(){

    int n,c_0=0,c_1=0,c_2=0 ;
    cout<<"enter the sie of an array";
     cin>> n;
int arr[n];
     for (int i = 0; i < n; i++)
     {
        cin>> arr[i];
     }


     for (int i = 0; i < n; i++)
     {
        cout<< arr[i];
     }

     for (int i = 0; i < n; i++)
     {
        if (arr[i]==0)
        {
            c_0++;
        }
        else if (arr[i]==1)
        {
            c_1++;
        }else{
            c_2++;
        }
     }   
         int j = 0;
        for (int i = 0; i < c_0; i++)
        {
            arr[j]=0;
            j++;
        }
        for (int i = 0; i < c_1; i++)
        {
            arr[j]=1;
            j++;
        }
        for (int i = 0; i < c_2; i++)
        {
            arr[j]=2;
            j++;
        }
        
    cout<<"your new array is ";
     for (int i = 0; i < n; i++)
     {
        cout<< arr[i];
     }  
     
     
     
     
}