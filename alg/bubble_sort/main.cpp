#include <iostream>

void swap(int *p1, int *p2){
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}
void bubbleSort(int array[], int n){
	bool swapped=false;
	
	for(int k=0;k<n-1;k++){
		bool swapped=false;
		for(int i=0;i<n-1;i++){
			if(array[i]>array[i+1]){
				swap(&array[i],&array[i+1]);
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
}
void display(int array[], int n){
	for(int i=0;i<n;i++)
		std::cout<<array[i]<<"-";
	std::cout<<std::endl;
}
int main(){
	int arr1[]={3,11,5,10,9,14,1,6,12,2,13,4,7,8};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	display(arr1,n);
	bubbleSort(arr1,n);
	display(arr1,n);
	return 0;
}

