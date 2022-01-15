#include<stdio.h>
#include<conio.h>
bool isprime(int);
void printprimebetweenrange(int,int);
void primecounter(int);

bool isprime(int num){
	//printf("inside isprime function. \n");
	bool flag=true;
	for(int i=2;i<num/2;i++){
		if(num%i==0){
			flag=false;
			return flag;
		}
	}
	return flag;	
}
void printprimebetweenrange(int start_range,int end_range){
	int number=start_range;
	printf("inside printprimebetweenrange loop. \n");
	printf("prime numbers between %d and %d are: \n",start_range,end_range);
	while(number<=end_range){
		if(isprime(number)){ 
			printf("%d\n",number);
		}
		number++;	
	}
	
}
void primecounter(int count){
	int primenumber=srange;
	int initialcount=0;
	int srange=20;
	printf("\n listing %d prime numbers starting from %d: ",srange,counter);
	while(initialcount<=counter){
		if(isprime(primenumber)){
			printf("%d \n",primenumber);
			initialcount++;
		}
		primenumber++;	
	}		
}

int main(){
	printprimebetweenrange(10,100);
	primecounter(20);
	return 0;
}
