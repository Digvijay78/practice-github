#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n";
    cin>> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the " << i <<"th term of an array"; 
        cin>>arr[i];
    }
    
    cout<< "your array is :";

int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
         arr_sum = arr_sum+arr[i];
    }
    
   
    
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    int sub;
    for(int i = 0; i<n ; i++){
      
      sub = max - arr[i];
      cout<<endl;
      cout<<" the difference between max value to arraya value is "<< sub  
        
    }
    int sum_max = max*n;
    cout<< "max_sum is :"<< sum_max;
    cout<<endl;
    cout<<"your max no. is"<< max << endl;
    
    for( int i = 0; i< n ; i++){
        if(max > arr[i]){
            max = arr[i];
        }
        
    }
    cout<< "your min. no. is :"<< max<<endl;
    int diff = sum_max- arr_sum;
    cout<<"sum of diff is:"<< diff;
}