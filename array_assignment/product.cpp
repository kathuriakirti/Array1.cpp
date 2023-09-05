// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,4,9,2,5},product=1;
    for(int i=0;i<5;i++){
        product*=arr[i];
    }
    cout<<product<<endl;
}