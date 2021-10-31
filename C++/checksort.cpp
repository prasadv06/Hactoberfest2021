#include<iostream>
using namespace std;
bool check(int arr[],int n)
{
    if (n==1)
    {
        return true;
    }
    bool restarray = check(arr+1,n-1);

    return (arr[0]<arr[1] && restarray);
}
int main ()
{
    int n;
    cin>>n;
    int nit[n];
    for(int i=0;i<n;i++)
    {
        cin>> nit[i];
    }
    cout<< check(nit , n);
    }