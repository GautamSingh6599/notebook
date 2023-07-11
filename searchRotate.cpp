// Input: Given a sorted and a rotated array of N distinct integers and						a key K
// Output: the index at which K is present in the array, else -1

// Author: Gautam Singh
// Date: 10 - 07 - 2023


#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

// Standard binary search
int binarySearch(int arr[], int high, int low, int key){

	while(low <= high){
		
		int mid = (high - low) / 2 + low;

		if(arr[mid] == key){

			return mid;
	
		} if(arr[mid] > key){     // If key is smaller, ignore right half
			
			high = mid - 1;

		} else {                  // If key is larger, ignore left half 
		
			low = mid + 1;

		}

	}

	return -1; // If not present in the array 

}


// Function for finding the pivot, i.e., the index of the largest elemen	 t. This the index where the greatest element went after the rotation
int findPivot(int arr[], int high, int low){

}


// Function to search an element in a sorted arry that has been rotated.
// O(logN) time
int searchRotate(int arr[], int n){
	// Input: array, length of the array
	int index;
}

int main(){

	// I/O from files
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[5];

	int key = 1;

	for(int i = 0; i < 6; i++){
		cin >> arr[i];
	}

	int answer = searchRotate(arr, 5);

	if(answer != -1){
		cout << "The index is located at the " << answer << " index.";
	} else {
		cout << "The element is not present in the array.";
	}

	return 0;

}
