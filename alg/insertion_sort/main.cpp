#include <iostream>

void insertionSort(int array[], int n){
	int step,iter,value;
	for(step=1;step<n;step++){
		iter=step-1;
		value=array[step];
		while(iter>=0 && array[iter]>value){
		       array[iter+1]=array[iter];
		       iter--;
		}
		array[++iter]=value;
	}
}
void display(int array[],int n){
	for (int i=0;i<n;i++){
		std::cout<<array[i]<<"-";
	}
	std::cout<<std::endl;
}
int main(){
	int arr1[]={4,2,13,7,12,5,9,11,14,3,10,1,6,8};
	int size=sizeof(arr1)/sizeof(arr1[0]);
	display(arr1,size);
	insertionSort(arr1,size);
	display(arr1,size);
	return 0;
}


			
