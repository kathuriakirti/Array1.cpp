
// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,6,6,9,5,7};
    bool flag=false;
    for(int i=0;i<5;i++){
       for(int j=i+1;j<6;j++){
           if(arr[i]==arr[j]) flag=true;
       }
    }
    if(flag==true) cout<<"duplicate is present"<<endl;
    else cout<<"duplicate is not present"<<endl;
 
    
    

}