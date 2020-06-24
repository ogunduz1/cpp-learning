#include <iostream>
void swap(int* a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int array[],int n, int i ){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;

	if (left<n && array[left]>array[largest])
		largest=left;
	if (right<n && array[right]>array[largest])
		largest=right;
	if (largest != i){
		swap(&array[largest],&array[i]);
		heapify(array,n,largest);
	}
}
void heapSort(int array[],int n){
	for(int i=n/2-1;i>=0;i--)
		heapify(array,n,i);
	for(int i=n-1;i>0;i--){
		swap(&array[0],&array[i]);
		heapify(array,i,0);
	}
}
void display(int array[],int n){
	for(int i=0;i<n;i++)
		std::cout<<array[i]<<"-";
	std::cout<<std::endl;
}
int main(){
	int arr1[]={9,3,11,2,7,12,4,14,1,5,10,6,8,13};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	display(arr1,n);
	heapSort(arr1,n);
	display(arr1,n);
	return 0;
}


