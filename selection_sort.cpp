// Selection Sort , array implementation , Increasing order, Iterative Method. 

#include <iostream>
#include <math.h>

using namespace std;

int main(){

	// Input array;
	int arr[20], n;

	cin >> n;   // size of array.

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	//  Selection sort
	int loc;

	for(int i=0; i<n; i++)
	{
	// for every position i , i have to find smallest element.
		int smallest = arr[i];
		loc = i;

		for(int j=i; j<n; j++)
		{
			if(smallest > arr[j])
			{
				smallest = arr[j];
				loc = j;
			}
		}

		int temp = arr[i];
		arr[i]  = arr[loc];
		arr[loc] = temp;
	} 

	// ouput of sorted array.
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}


	return 0;
}
