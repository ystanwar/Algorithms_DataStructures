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

template<typename T>void Quick_sort(T arr[],int n);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
	Quick_sort(arri,5);
	Quick_sort(arrf,5);
return 0;
}

