// Find the second largest element in the given Array in one pass.
#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,6,4,9,5,9},first_largest=INT_MIN,second_largest=INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>first_largest){
            second_largest=first_largest;
            first_largest=arr[i];
        }
        else{
            if(arr[i]!=first_largest && arr[i]>second_largest){
                second_largest=arr[i];
            }
        }
    }
    cout<<first_largest<<endl;
    cout<<second_largest<<endl;
    
}