#include <iostream>
using namespace std;
void printarr(){
};
void printing_arr(int a[], int length){
	for(int i = 0; i < length; i++){
		cout << a[i] <<" ";
	}
}

int main(){
	int length = 2;
	int arr1[2] = {1,0};
	int arr2[length];
	
	for(int i = 1; i < 5; i++){
		arr2[0] = 1;
		length += 1;
		for(int j = i; j >= i; j--){
			arr2[j] = (arr1[i] + arr1[i-1]);
		}
			arr2[length - 1] = 0;
			printing_arr(arr2,length);		
		
		cout << endl;
	}
	return 0;
}
