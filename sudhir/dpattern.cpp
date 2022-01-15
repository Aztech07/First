#include<iostream>
using namespace std;
int main()
{
	int n=6, i , j;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++){
			cout << "*";
		}
			cout<<"\n";
	}
		for(i = n; i >= 1; i--){
			for(j = 1; j <= i; j++){
				cout << "*" ;
			}
			cout<<"\n";
		}
		int k,l;
	for(k = 1; k <= n; k++)
	{
		for(l = 1; l <= k; l++){
			cout << "*";
		}
			cout<<"\n";
	}
		for(k = n; k >= 1; k--){
			for(l = 1; l <= k; l++){
				cout << "*" ;
			}
			cout<<"\n";
		}
return 0;
}


