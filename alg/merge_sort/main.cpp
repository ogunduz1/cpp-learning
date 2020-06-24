#include <iostream>
void merge(int [],int,int,int);
void mergeSort(int array[],int left,int right){
	if(left<right){
		int mid=(right+left)/2;

		mergeSort(array,left,mid);
		mergeSort(array,mid+1,right);

		merge(array,left,mid,right);
	}
}
void merge(int array[],int left, int mid, int right){
	int nl=mid-left+1;
	int nr=right-mid;
	int L[nl];
	int R[nr];
	int i,j;
	for(i=0;i<nl;i++)
		L[i]=array[left+i];
	for(j=0;j<nr;j++)
		R[j]=array[mid+1+j];
	int k=left;
	i=0;
	j=0;
	while(i<nl && j<nr){
		if(L[i]<=R[j]){
			array[k]=L[i];
			i++;
		}
		else{
			array[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<nl){
		array[k]=L[i];
		k++;
		i++;
	}
	while(j<nr){
		array[k]=R[j];
		k++;
		j++;
	}
}
void display(int array[],int n){
	for(int i=0;i<n;i++)
		std::cout<<array[i]<<"-";
	std::cout<<std::endl;
}
int main(){
	int arr1[]={6,3,2,7,10,14,11,1,5,8,12,9,13,4};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int left=0;
	int right=n-1;
	display(arr1,n);
	mergeSort(arr1,left,right);
	display(arr1,n);
	return 0;
}

