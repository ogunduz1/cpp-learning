#include <iostream>
void swap(int* a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int array[],int low,int high){
	int pivot=array[high];
	int i=(low-1);
	for(int j=low;j<=high;j++){
		if(array[j]<pivot){
			i++;
			swap(&array[i],&array[j]);
		}
	}
	swap(&array[i+1],&array[high]);
	return (i+1);
}
void quickSort(int array[],int low, int high){
	if(low<high){
		int pi=partition(array,low,high);//partition index
		quickSort(array,low,pi-1);
		quickSort(array,pi+1,high);
	}
}
void display(int array[],int n){
	for(int i=0;i<n;i++)
		std::cout<<array[i]<<"-";
	std::cout<<std::endl;
}
int main(){
	int arr1[]={8,3,1,11,14,6,9,4,2,13,7,5,12,10};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	display(arr1,n);
	quickSort(arr1,0,n-1);
	display(arr1,n);
	return 0;
}



