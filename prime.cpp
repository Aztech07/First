#include<conio.h>
#include<stdio.h>
bool check_prime(int p){
	int i=2;
	bool flag=true;
	while(i<p){
		if(p%i==0){
			flag=false;
			break;
		}
		i++;
	}
}

int main(){
	int k = 100;
	for (int i=0;i<k;i++ ){
	printf("%d %d ",i,check_prime(i));
	if(check_prime(i)==true){
		printf("PRIME \n");}
	
	else{
		printf("NOT PRIME \n");}
	
}
return 0;
}
