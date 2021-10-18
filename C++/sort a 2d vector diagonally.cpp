#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) {
        // code here 
        vector<int> v;
        for(int r=1;r<n;r++){
            for(int j=0,i=r;i<n && j<m;i++,j++){
                v.push_back(matrix[i][j]);
            }
            sort(v.begin(),v.end());
            int t=0;
            for(int j=0,i=r;i<n && j<m;i++,j++){
                matrix[i][j]=v[t++];
            }
            v.clear();
        }
        for(int c=1;c<m;c++){
            for(int j=c,i=0;i<n && j<m;i++,j++){
                v.push_back(matrix[i][j]);
            }
            sort(v.rbegin(),v.rend());
            int t=0;
            for(int j=c,i=0;i<n && j<m;i++,j++){
                matrix[i][j]=v[t++];
            }
            v.clear();
        }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int inputlint[n*m];
        for(int i=0;i<n*m;i++)cin>>inputlint[i];
        vector<vector<int>> matrix(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=inputlint[i*m+j];
            }
        }
        Solution ob;
        ob.diagonalSort(matrix,n,m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j];
            }
            cout<<'\n';
        }
    }
    return 0;
}