/**
  Merge Sort : The array is breakdown to the individual element and then merged in the sorted arrays : 
  This uses Divide and Conquer technique
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<typename T>void Merge_sort(T arr[],int l,int r);
template<typename T>void merge(T arr[],int l,int mid,int r);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
 	Merge_sort(arri,0,sizeof(arri)/sizeof(arri[0])-1);
	Merge_sort(arrf,0,sizeof(arrf)/sizeof(arrf[0])-1);
	
	for(int i=0;i<5;i++){
		cout<<arri[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<5;i++){
		cout<<arrf[i]<<" ";
	}
return 0;
}

template<typename T>void Merge_sort(T arr[],int l,int r){
      int mid = (l+r)/2;
	  if(l<r){
	  	Merge_sort(arr,l,mid);
	  	Merge_sort(arr,mid+1,r);
	  	merge(arr,l,mid,r);
	  }	
}

template<typename T>void merge(T arr[],int l,int mid,int r){
  T tmp[30];
  int i,j,k,m; 
  j=l;
  m=mid+1;
  for(i=l; j<=mid && m<=r;i++)
  {
     if(arr[j]<=arr[m]){
         tmp[i]=arr[j];
         j++;
     }
     else{
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid){
     for(k=m;k<=r;k++){
         tmp[i]=arr[k];
         i++;
     }
  }
  else{
     for(k=j;k<=mid;k++){
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=l;k<=r;k++)
     arr[k]=tmp[k];
}
