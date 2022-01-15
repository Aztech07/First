#include<iostream>
using namespace std;
int isprime(int);
void printprimebwrange(int,int);

int isprime(int num){
cout<<"function isprime \n";
	int i;
	bool flag=true;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=false;
			return flag;
		}
	}
return flag;
}
void printprimebwrange(int start_range,int end_range){
	int number;
	if(isprime(number)==true){
		cout<<"prime number between "<<start_range<<" and "<<end_range<<" are: \n";
	}
}
int main(){
	printprimebwrange(10,100);
	return 0;
}
