// #include<iostream>
// using namespace std;

// int main(){

//     int n;

//     cout<<"enter the size of 1st array"<<endl;
//     cin>>n;
//     // cout<<"enter the size of 2nd array"<<endl;
//     // cin>>n;

// int arrn[n];
// int arrm[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arrn[n];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arrm[n];
//     }
//     cout<<"your 1st array is:"<<endl;

// for (int i = 0; i < n; i++)
// {
//     cout<<arrn[i];
// }
//     cout<<"your 2nd array is:"<<endl;
// for (int i = 0; i < n; i++)
// {
//     cout<<arrm[i];
// }

// int arrz[n];
// for (int i = 0; i < n; i++)
// {
//      arrz[i] = arrn[i] ^ arrm[i];
// }

// cout<< "Xor array is ";
// for (int i = 0; i < n; i++)
// {
//     cout<< arrz[i];
// }

// }

// -------------------------------------------------------------------------------------------------------------

// #include<iostream>
//  using namespace std;
 
//  int main(){
     
//      int n;
//      cin>> n;
     
//      for(int i = 1; i<=n; i++){
//           string v =(i%3==0 && i%5==0)?("fizz Buzz"):();
//           cout<<v;
//          string s = (i%3==0)?("fizz"):("");
//          cout<<s;
//          string c =(i%5==0)?("buzz"):("");
//         cout<<c;
         
//      }
     
//  }

// ---------------------------------------------------------------------------------------------------------

                                // eequilibrium
// ---------------------------------------------------------------------------------------------------------

#include<iostream>
 using namespace std;
 
 int main(){
     int right_sum,total_sum = 0;
     int n;
     
     
     cout<<"enter the size of array";
     cin>> n;
     int arr[n];
     
     int left_sum = 0;
     
     for(int i = 0; i<n; i++){
          cin>> arr[i];
           }
     cout<< "your array is ";
     
     for(int i = 0; i<n; i++){
          cout<< arr[i];
           }
    //  for(int i = 0; i<n; i++){
    //       total_sum += arr[i];
    //       }
           cout<<endl<<total_sum<<endl;
           for(int i = 0; i<n; i++){
               
               right_sum = total_sum - left_sum - arr[i];
             if(right_sum == left_sum){
             cout<<  arr[i+1];
             }
             else{
             left_sum += arr[i];
             }
           
           }
           
           
        
 }