// Merging two sorted array
#include <iostream>
using namespace std;


void mergeSorted(int arr1[], int arr2[], int size1, int size2){
	int ans[20];

	for(int i=0; i<size1+size2;i++){
		// counter 1
		static int count1 , count2;
		if(arr1[count1] <arr2[count2]){
			// now we are going to choose smaller i.e arr1[count1]
			ans[i] = arr1[count1];
			count1++;
			

			
		}

		// counter 2
		else if(arr2[count2] < arr1[count1] ){
			ans[i] = arr2[count2];
			count2++;
			
		}
		
	}

	// Output 
	for(int i=0; i<size1+size2;i++){
		cout <<ans[i] <<" ";
	}
	
}

int main(){
	int arr1[10], arr2[10],ans[20], size1, size2;

	// Input arrays
	cin >> size1 >> size2;

	for(int i=0; i<size1; i++){
		cin >> arr1[i];
	}

	for(int i=0; i<size2; i++){
		cin >> arr2[i];
	}

	mergeSorted(arr1,arr2,size1,size2);
}