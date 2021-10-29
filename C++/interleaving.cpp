#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool check(string A, string B, string C)
{
    int n1= A.length(), n2 = B.length() , n3 = C.length();
    char a[n1],b[n2],c[n3];
    for (int i=0 ;i<n1;i++)
    {
        a[i]=A[i];
    }
    for (int i=0 ;i<n2;i++)
    {
        b[i]=B[i];
    }
    for (int i=0 ;i<n3;i++)
    {
        c[i]=C[i];
    }
    sort (a , a+n1);
    sort (b , b+n2);
    sort (c , c+n3);
    sort (C.begin(),C.end());

    if ( a == A && b == B)
    {
        if ( c == C)
        {
        return true;
        }
    }

    else
    {
        return false;
    }
    

}
int main ()
{
    string A,B,C;
    cin >> A >> B >> C;
    cout << check (A,B,C);
    return 0;
}