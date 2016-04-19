/**
  Counting Sort : > This sorting technique uses the index of the count array created to sort the elements . The major limitaion of this technique is that 
                     it can be applied for integer only
                  > Time complexity O(n+k) n:number of elements and k:range of elements.
				  > It uses partial hasing and also can be extended for negative numbers 
				  > Its mainly used as subroutine for the other sorting techniques. 
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;
void counting_sort(int A[],int max,int n);

int main(){
	int n;
	cout<<"Enter number of elements : ";cin>>n;
	cout<<"Enter elements : "<<endl;
	int num[n];
	for(int i=0;i<n;i++) cin>>num[i];
	
	int max = num[0];
	for(int i=0;i<n;i++){
		if(num[i]>=max) max = num[i];
	}
	counting_sort(num,max,n);
}

void counting_sort(int A[],int max,int n){
	int C[max+1] = {0};
	int sort[n];
	for(int i=0;i<n;i++){
		C[A[i]] = C[A[i]] + 1; 
	}
	for(int i=1;i<max+1;i++){
		C[i] = C[i] + C[i-1];
	}
	for(int i=0;i<n;i++){
		sort[C[A[i]]-1] = A[i];
		--C[A[i]];
	}
	for(int i=0;i<n;i++)cout<<sort[i]<<" ";
	
}
