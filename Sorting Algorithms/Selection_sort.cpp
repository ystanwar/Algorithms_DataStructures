/**
  Selection sort : This involves the comparison of ith element to all elements till n and then swaping if smaller
  In worst case it may requre n*(n-1) comparsions leading to O(N^2) time complexity
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<typename T>void Selection_sort(T arr[],int n);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
	Selection_sort(arri,5);
	Selection_sort(arrf,5);
return 0;
}

template<typename T>void Selection_sort(T arr[],int n){
	T temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout<<"Sorted array is : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


