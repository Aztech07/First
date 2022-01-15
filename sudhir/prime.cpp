#include<conio.h>
#include<stdio.h>
char check_prime(int p){
	int i=2;
	char flag='Y';
	while(i<p){
		if(p%i==0){
			flag='N';
			break;
		}
		i++;
	}
return flag;
}
int main(){
	int p = 3;
	if(check_prime(p)=='Y'){
		printf("PRIME \n");}
	
	else{
		printf("NOT PRIME \n");}

}
