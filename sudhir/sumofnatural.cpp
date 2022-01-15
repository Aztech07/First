#include<iostream>
using namespace std;
int printsum(int);

int main(){
	printsum(5);
return 0;
}

int printsum(int range){
	int sum;
	for(int i=1;i<=range;i++){
		sum+=i;
	}
	cout<<"sum of natural numbers is "<<sum<<endl;
	return sum;
}
