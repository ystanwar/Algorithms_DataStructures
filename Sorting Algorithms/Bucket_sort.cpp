/**
  Bucket Sort : 
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<typename T>void Bucket_sort(T arr[],int n);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
	Bucket_sort(arri,5);
	Bucket_sort(arrf,5);
return 0;
}

