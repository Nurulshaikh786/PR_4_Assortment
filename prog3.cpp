#include<iostream>
using namespace std;
int main(){
     int size;

     cout<<endl<<"Enter the array's row and column size : ";
     cin>>size;
     

     int arr[size][size];

     for(int i = 0 ; i < size ; i++){
        for(int j=0 ; j<size ; j++){
            cout<<"Enter the elements of arr["<<i<<"]["<<i<<"] : ";
            cin>>arr[i][j];
        }
     }

     cout<<endl<<"Original matrix : "<<endl;

     for(int i = 0 ; i < size ; i++){
        for(int j=0 ; j<size ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

     cout<<endl<<"Transpose of mattrix : "<<endl;

     for(int i = 0 ; i < size ; i++){
        for(int j=0 ; j<size ; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
     }
     
     return 0;
}