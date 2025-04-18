#include<iostream>
using namespace std;
int main(){
     int size;
     cout<<endl<<"Enter the size of an Array : ";
     cin>>size;

     int arr[size];

     for(int i = 0 ; i < size ; i++){
        cout<<"Enter the elements of arr["<<i<<"] : ";
        cin>>arr[i];
     }
        cout<<endl;
        cout<<"Negative value of Array is : ";
     for(int i = 0 ; i < size ; i++){
        if(arr[i]<0){
         cout<<arr[i] <<" , ";
        }
     }
     return 0;
}