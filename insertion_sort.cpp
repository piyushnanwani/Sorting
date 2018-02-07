// Insertion Sort , Iterative , array implementation.

#include <iostream>
using namespace std;

int main(){
	int arr[20],size;

	cin >> size;
	// Input array.
	for(int i=0; i<size; i++)
	{
		cin >> arr[i];
	}

	// Insertion Sort.
	for(int i=1; i<size; i++){
		int j=i;

		while(j>0 && arr[j] < arr[j-1]){
			// If so then swaping 

			int temp = arr[j];
			arr[j]  = arr[j-1];
			arr[j-1] = temp;

			--j;
		}
	}

	//  Output array

	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}

	return 0;
}