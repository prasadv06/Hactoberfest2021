#include<iostream>
using namespace std ;
int main(){
	int n, i ;
	cout<< "enter no. :" ;
	cin >> n ;
	if(n==1){
		cout<<"it is not a prime no. " ;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<< "it is not a prime no. " ;
		}
			else {
				cout << "it is a prime no. " ;
			}
			break ;
		}
	return 0 ;
}
