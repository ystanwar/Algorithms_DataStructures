/**
  Bubble Sort : The elements are rearranged by exchanging them all the way round. 
  The worst case may have (n-1)^2 iterations leading to O(N^2) time complesity.
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<typename T>void Bubble_sort(T arr[],int n);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
	Bubble_sort(arri,5);
	Bubble_sort(arrf,5);
return 0;
}

template<typename T>void Bubble_sort(T arr[],int n){
    T temp;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n-i-1;j++){
    		if(arr[j]>arr[j+1]){
    			temp = arr[j];
    			arr[j] = arr[j+1];
    			arr[j+1] = temp;
			}
		}
	}
	cout<<"Sorted array is : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
