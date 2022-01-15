#include<iostream>
using namespace std;

void printarray(int [],int);
void insertelementatbeg(int [],int);
void insertelementatend(int [],int);
//void insertelementatindex(int);
int main(){
	int length=6,j,indexno=12;
	int arr[length] = {5,10,15,20,25,30};
	
	

		
	length=length+1;
	for((j=length-1);j>=3;j--){								//to add number at particular index
		arr[j]=arr[j-1];
	}
		arr[3]=indexno;
	
	insertelementatbeg(arr,length);
	insertelementatend(arr,length);	
	printarray(arr,length);


return 0;
}

void printarray(int arr[],int length){
	for(int i=0;i<length;++i){
		cout<<arr[i]<<" ";
	}	
	insertelementatbeg(arr,length);
	insertelementatend(arr,length);
}

void insertelementatbeg(int arr[],int length){
	int begno=1;
	for(int i=(length-1);i>0;i--){								
	arr[i]=arr[i-1];									//to add number in beginning	
	}
	arr[0]=begno;			
}

void insertelementatend(int arr[],int length){
	int endno=28;
	length=length+1;
	arr[length-1]=endno;								//to add number at end
}
