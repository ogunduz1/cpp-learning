#include <iostream>
#include <cmath>
//#include <bits/stdc++.h>
#include <algorithm>

template <typename T>
int jumpSearch(T array[], int wanted, int size){
	int step =sqrt(size);
	int prev = 0;
	while(array[std::min(step,size)-1]<wanted) {
		prev=step;
		step+=sqrt(size);
		if(prev>=size)
			return -1;
	}
	while(array[prev]<wanted) {
		prev ++;
		if(prev==std::min(step,size))
			return -1;
	}
	if(array[prev]==wanted)
		return prev;
	return -1;
}

int main(){
	int array[]={01,10,20,30,40,50,60,70,80,90,100,110};
	int n=sizeof(array)/sizeof(array[0]);
	int data1=50;
	int data2=70;
	int data3=99;

	std::cout<<"\nNumber "<<data1<<" is at index "<<jumpSearch(array,data1,n)<<std::endl;
	std::cout<<"\nNumber "<<data2<<" is at index "<<jumpSearch(array,data2,n)<<std::endl;
	std::cout<<"\nNumber "<<data3<<" is at index "<<jumpSearch(array,data3,n)<<std::endl;
	return 0;
}

