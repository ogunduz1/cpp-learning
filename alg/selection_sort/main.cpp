#include <iostream>

void swap(int *p1, int *p2){
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}
void selectionSort(int array[],int n){
	int datum,iter,min_ind;

	for(datum=0;datum<n-1;datum++){
		min_ind=datum;
		for(iter=datum+1;iter<n-1;iter++){
			if(array[iter]<array[min_ind])
				min_ind=iter;
		}
		swap(&array[datum],&array[min_ind]);
	}
}
void display(int array[],int n){
	for(int i=0;i<n-1;i++)
		std::cout<<array[i]<<"-";
	std::cout<<std::endl;
}
	
int main(){
	int arr1[]={3,4,6,8,1,2,9,7,5,14,12,11,13,10};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	std::cout<<"n : "<<n<<std::endl;
	display(arr1,n);
	selectionSort(arr1,n);
	display(arr1,n);
	return 0;
}


