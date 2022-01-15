#include<iostream>
using namespace std;
int printarrayelement(int);
void issortedarray();
int main(){
	printarrayelement(20);
	issortedarray();
}


int printarrayelement(int a){
	int arr[20];
	arr[0]=5;arr[1]=10;arr[2]=15;arr[3]=20;
	int i=0;
	while(i<4){		
		if(a==arr[i]){			
			cout<<a<<" is present in array at location "<<i<<endl;
		}
		i++;
	}
return i;
}

void issortedarray(){
	int arr[20];
	arr[0]=5;arr[1]=20;arr[2]=10;arr[3]=15;	
	for(int i=0;i<4;i++){		
		if(arr[0]<arr[1] && arr[1]<arr[2]){	}
			else if(arr[2]<arr[3] && arr[2]<arr[0]){
			cout<<"sorted"<<endl;
	}
		else{
			cout<<"array is not sorted."<<endl;
		}
	}	
}

//int insertelement(int a){
//	int arr[20];
//	arr[0]=5;arr[1]=10;arr[2]=15;arr[3]=20;
//		
//}






