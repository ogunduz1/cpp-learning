#include <iostream>
template <typename T>
T binarySearch(T array[],int first,int last,T wanted){
	if(last>=first){
		int mid=first+(last-first)/2;
		if(array[mid]==wanted)
			return mid;
		if(array[mid]>wanted)
			return binarySearch(array,first,mid-1,wanted);
		return binarySearch(array,mid+1,last,wanted);
	}
	else
		return -1;
}


int main(){
	int array[]={10,20,30,40,50,60,70,80,90,100};
	int n=sizeof(array)/sizeof(array[0]);
	int data1=80;
	int data2=20;
	int data3=110;
	int data4=3;
	std::cout<<"data1 search "<<binarySearch<int>(array,0,n-1,data1)<<std::endl;
	std::cout<<"data2 search "<<binarySearch<int>(array,0,n-1,data2)<<std::endl;
	std::cout<<"data3 search "<<binarySearch<int>(array,0,n-1,data3)<<std::endl;
	std::cout<<"data4 search "<<binarySearch<int>(array,0,n-1,data4)<<std::endl;
	return 0;
}
