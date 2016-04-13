/**
  Quick Sort : This is one of the best sorting technique available....
  It uses the  divide and conqoure technique but unlike merge sort entire comparisons happen at the resusion..nd nothing happens at combining
  It lies in between the insertion sort(conquor at place)  and merge sort(divide);
  average tc : O(nlogn) like merge sort
  worst case tc : O(n^2) like insertion sort
  
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<typename T>void Quick_sort(T x[],int first,int last);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
	Quick_sort(arri,0,4);
	Quick_sort(arrf,0,4);
	for(int i=0;i<sizeof(arri)/sizeof(arri[0]);i++){
		cout<<arri[i]<<" ";
	}
	cout<<endl;
    for(int i=0;i<sizeof(arri)/sizeof(arri[0]);i++){
		cout<<arrf[i]<<" ";
	}
return 0;
}

template<typename T>void Quick_sort(T x[],int first,int last){
	int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         Quick_sort(x,first,j-1);
         Quick_sort(x,j+1,last);

    }
}
