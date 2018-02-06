// Bubble Sort , array implementation , Decreasing order. 

#include <iostream>
using namespace std;

int main(){
	// Input array.
	int arr[100], size;

	cin >> size;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}

	// Bubble sort

	for(int i=0; i<size; i++){
	// For every element, comparing with its next.
		for(int j=i; j<size; j++){
			if(arr[j] < arr[j+1]) // then swap
			{
				int temp = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	// Output array
	for(int i=0; i<size; i++){
		cout << arr[i] << " " ;
	}



}