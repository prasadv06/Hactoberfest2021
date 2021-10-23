/* Program to create hollow triangle pattern based on given input of rows number.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the rows for hollow pyramid" << endl;
    cin>>rows;
    for(int i=1; i<=rows; i++){//do print each rows
        for(int j=i; j<=rows; j++){ //print space for pyramid
        cout<<" ";
    }
    for(int k=1; k<2*i; k++){
            if(i==rows || (k==1 || k==2*i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
    }
    cout<<"\n"; //move to next line
    }
    getch();
    return 0;
}
