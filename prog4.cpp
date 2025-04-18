#include<iostream>
using namespace std;
int main(){
     int row , col , choice , index ;
     cout<<endl<<"Enter the array's row size : ";
     cin>>row;
     cout<<"Enter the array's column size : ";
     cin>>col;

     int arr[row][col];
     int i , j;

     for(i = 0 ; i < row ; i++){
        for(j=0 ; j<col ; j++){
            cout<<"Enter the elements of arr["<<i<<"]["<<i<<"] : ";
            cin>>arr[i][j];
        }
     }

    
      cout<<endl<<"Array "<<endl;
     for(i = 0 ; i < row ; i++){
        for(j=0 ; j<col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

     cout<<endl<<"-----------------------------------------------------------"<<endl;
     do{
        int sum=0;
        cout<<endl<<"Enter 1 for sum of row "<<endl;
        cout<<"Enter 2 for sum of column "<<endl;
        cout<<"Enter 0 for exit "<<endl;
        cout<<"Enter your Choice : ";
        cin>>choice;
   
   
        switch (choice)
        {
        case 1:
        cout << endl << "Enter The Index Of Row : ";
        cin >> index;
        
        cout << "Element Of Row Of ["<<index<<"] :- ";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == index)
                {
                    cout << arr[i][j] << " ";
                    sum += arr[i][j];
                }
            }
        }
        cout << endl << "The Sum Of ["<<index<<"] Row Is :- " << sum << endl;
        break;
        
        case 2:
            cout << endl << "Enter The Index Of Column : ";
            cin >> index;
   
            cout << "Elements Of Column Of ["<<index<<"] :- ";
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    if (j == index)
                    {
                        cout << arr[i][j] << " ";
                        sum += arr[i][j];
                    }
                }
            }
            cout << endl << "The Sum Of ["<<index<<"] index Of Column Is :- " << sum;
            break;
        default:
            break;
        }
    } while (choice != 0);
    cout<<endl<<"--------------------------------------------------------------------------"<<endl;

     return 0;
    }