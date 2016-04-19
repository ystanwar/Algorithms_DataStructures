/**
  Shell Sort : > This algorithm uses the technique similar to insertion sort but al fixed gaps decreasing at (1/2);
               > Best case complexity is O(nlogn) and worst case complexity is O(n^2);
               > Much complcated one but also good when used as subrutine and smaller in size comparative ;
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<typename T>void Shell_sort(T arr[],int n);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
    Shell_sort(arri,5);
    Shell_sort(arrf,5);
return 0;
}

template<typename T>void Shell_sort(T arr[],int n){
	for(int i=n/2;i>0;i=i/2){
		for(int j=i;j<n;j++){
			for(int k = j-i;k>=0;k=k-i){
				if(arr[k+i]>=arr[k]){
					break;
				}else{
					T temp = arr[k];
					arr[k] = arr[k+i];
					arr[k+i] = temp;
				}
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


