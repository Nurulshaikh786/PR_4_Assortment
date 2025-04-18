#include<iostream>
using namespace std;
int main(){
     int row , col , max;
     cout<<endl<<"Enter the array's row size : ";
     cin>>row;
     cout<<"Enter the array's column size : ";
     cin>>col;

     int arr[row][col];

     for(int i = 0 ; i < row ; i++){
        for(int j=0 ; j<col ; j++){
            cout<<"Enter the elements of arr["<<i<<"]["<<i<<"] : ";
            cin>>arr[i][j];
        }
     }
      max=arr[0][0];
    
     for(int i = 0 ; i < row ; i++){
        for(int j=0 ; j<col ; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
               }
        }
     }

     cout<<"Max value of an array is : "<<max;
     return 0;
}