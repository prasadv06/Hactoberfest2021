#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of terms in an array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array (1,0)"<<endl;
    for(int h=0;h<n;h++)
    {
        cin>>arr[h];
    }
    int b[n];
    int m=n-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            b[j]=0;
        }
        else
        {
                b[m]=1;
                m--;
        }
        
    }
    for(int t=0;t<n;t++)
    {
        cout<<b[t];
    }

}