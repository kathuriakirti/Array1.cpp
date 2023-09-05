// Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){

    int arr[6]={3,6,4,9,5,9},min=INT_MAX;
    for(int i=0;i<6;i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<min<<endl;
    
    

}