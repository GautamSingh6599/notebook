// Input: Array of N distinct integers
// Check if Array is sorted & rotatated clockwise
// Sorted array has no rotatation

// Author: Gautam Singh
// Date: 08 - 07 - 2023


#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

bool sortRotated(int arr[], int n){
	// Input: Array, number of elements
	
	// If arr[0] < arr[N - 1] or if the count of arr[i] > arr[i + 1] is not			exactly equal to 1, then it is false
	// If arr[0] > arr[N - 1] and the count of arr[i] > arr[i - 1] is exact			ly equal to 1, then it is true

	int count = 0;

	if(arr[0] < arr[n - 1]){

		return false;

	}

	for(int i = 0; i < n - 1; i++){
		
		if(count > 1){

			return false;

		}

		if(arr[i] > arr[i + 1]){
		
			count++;

		}

	}

	if(count == 1){

		return true;

	} else {
	
		return false;

	}

}

int main(){
	
	// File I/O 
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

	int arr[6]; // Input array
	
	for(int i = 0; i < 6; i++){

		cin >> arr[i];

	}

	if(sortRotated(arr, 6)){

		cout << "The array is sorted and rotatated";

	} else {
	cout << "The array is not rotatated";
	}

	return 0;

}
