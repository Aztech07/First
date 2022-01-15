#include<stdio.h>
#include<conio.h>
char checkprime(){
	int num,i;
	bool flag=true;
	for(num=1;num<=100;num++){
		for(i=1;i<num;i++){
			while(i<num){
				num%i==0;
				flag=false;
				return num;
			}
		} 
	}
}
int main(){
	int c=checkprime();
	if (checkprime()==true){
		printf("%d",c);
	}	
}
