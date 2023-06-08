#include<iostream>
using namespace std;


int reverseArr(int arr[], int n){
  
  int start = 0;
  int end  = n-1;
       
    while (start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i< n ; i++){
        cout<< arr[i]<<" ";
    }
}

int main(){

int arr[6]={1,2,3,4,5,6};

int reverse = reverseArr(arr,6);

}