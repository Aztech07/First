#include<iostream>
using namespace std;
int printfactorial(int);
int main(){
	printfactorial(9);
return 0;
}

int printfactorial(int number){
	int mul=1,num;
	for(num=1;num<=number;num++){
		mul*=num;				
	}
	cout<<"factorial of number is "<<mul<<endl;
return mul;
}
