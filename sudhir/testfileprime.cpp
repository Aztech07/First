#include<stdio.h>
#include<conio.h>
bool isprime(int);
void printprimebetweenrange(int);
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
void printprimebetweenrange(int start_range){
	int number=start_range;
	printf("inside printprimebetweenrange loop. \n");
	printf("prime numbers between %d are: \n",start_range);
	while(number>=start_range){
		if(isprime(number)){ 
			printf("%d\n",number);
		}
		number++;	
	}
	
}
void primecounter(int counter){
	int primenumber,primerange;
	int a=printprimebetweenrange(primerange);
	printf("\n listing %d prime numbers starting from %d",counter,primerange);
	while(counter<=a){
		if(isprime(primenumber)){
			printf("%d \n",primenumber);
		}
		counter++;
		primerange++;
	}		
}

int main(){
	printprimebetweenrange(10);
	primecounter(50);
	return 0;
}
