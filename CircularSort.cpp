// This is a program which checks
// ehether given an array whether it is circularly sorted or not  
// Input: A array of N integers
// Output: Check whether the array is the rotated form of a sorted //         array


// Author: Gautam Singh
// Date: 08 - 07 - 2023

#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

// Function that chcks whether an array is 
// sorted circularly or not

bool checkCircularSort(int arr[], int n){
	// Args: Array, length of the array
	// For only arrays sorted in an ascending order 
	
	// Counter variable
	// this will count the number of occurrences of
	// arr[i] > arr[i + 1]
	
	int count = 0;

	// If count > 1 or if count ==  1 and arr[0] < arr[N - 1] -> False
	// If count == 1 and arr[0] > arr[N - 1] -> True
	
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

	// I/O from files
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Array Declaration
	int arr[6];

	// Taking input into array
	for(int i = 0; i < 6; i++){
		cin >> arr[i];
	}	

	if(checkCircularSort(arr, 6)){
		cout << "The array is sorted circularly" << "\n";
	} else {
	cout << "The array is not sorted circularly" << "\n";
	}
	
}
