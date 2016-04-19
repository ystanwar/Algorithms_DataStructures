/**
  Radix Sort : > This technique uses buckets form 0-9 and then inserts the number by sorting according to digits from right...
               > All elements must have same number of digits and this is done ny adding zeros.
               > Add elements in appropriate bins and then remove using FIFO.
               > Time complexity :
               > This uses either least or most significant digit
**/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<typename T>void Radix_sort(T arr[],int n);

int main(){
	int arri[] = {6,4,3,2,1};
	float arrf[] = {5.0,3.4,2.78,1.93,0.46};
	Radix_sort(arri,5);
 //	Radix_sort(arrf,5);
return 0;
}


