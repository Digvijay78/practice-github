#include<iostream>
using namespace std;

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    
    int start =0;
    int end = size-1;
    
    int mid = (start + end)/2;
    while(start <= end){
        
        if( arr[mid] == key){
            return mid;
        } 
        
        if( arr[mid] < key){
            start = mid+1;
        } else{
            end = mid-1;
        }
        mid = (start+end)/2;
        
    }
    return -1;
}


int main() {
int even[6] = {4,6,8,12,14,18};
int odd[5] = {1,5,7,9,13}; 

int evenIndex = binarySearch(even,6,12);
cout<< evenIndex;

    return 0;
}




int main(){

}