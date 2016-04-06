/**
  Insertion Sort : The hole is created for the element and then the element is inserted at the appropriate position.
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;
template<typename T> void Insertion_sort(T arr[],int n);

int main(){
	int arri[] = {5,4,3,2,1};
	float arrf[] = {5.5,3.4,2.78,1.93,0.46};
    Insertion_sort(arri,5);
    Insertion_sort(arrf,5);
return 0;
}

template<typename T>void Insertion_sort(T arr[],int n){
   	T value;
	int hole;
	for(int i=1;i<n;i++){
   	   value = arr[i];
	   hole = i;
	   while(arr[hole-1]>value && hole>0){
	   	  arr[hole] = arr[hole-1];
	   	  hole--;
	   }	     
	   arr[hole] = value;	
	}
	cout<<"Sorted array is : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
