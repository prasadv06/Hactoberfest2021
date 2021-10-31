#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n];
    
    cout<<"enter the sentence:"<<endl;
    cin.getline(arr,n);
    cin.ignore();

    int curr=0,max=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==' '||arr[i]=='\0')
       {
           max=curr;
           curr=0;
           break;
       }
       else 
       {
           curr++;
       }
    }
    if(curr>max)
    {
        max=curr;
    }
    cout<<max;
    
    return 0;


}