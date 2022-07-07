#include <iostream>
using namespace std;

void spiralprinting(int arr[][3]){

    int row = 3;
    int col = 3;


    int count = 0;
    int total = row*col;

    //Index Initialisation
    int starting_row = 0;
    int starting_col = 0;
    int ending_row = row-1;
    int ending_col = col-1;

    while (count < total)
    {
        //Printing starting row
        for (int i = starting_col; i <= ending_col; i++)
        {
            cout << arr[starting_row][i] << " ";
            count++;
        }
        starting_row++;
        
        //Printing ending column
        for (int i = starting_row; i <= ending_row; i++)
        {
            cout << arr[i][ending_col] << " ";
            count++;
        }
        ending_col--;

        //Printing ending row
        for (int i = ending_col; i >= starting_col; i--)
        {
            cout << arr[ending_row][i] << " ";
            count++;
        }
        ending_row--;

        //Printing starting col

        for (int i = ending_row; i >= starting_row; i--)
        {
            cout << arr[i][starting_col] << " ";
            count++;
        }
        starting_col++;
    }
    
}

int main(){
    int arr[3][3]={{10,20,30},
                   {80,90,40},
                   {70,60,50}};
    spiralprinting(arr);

    return 0;
}