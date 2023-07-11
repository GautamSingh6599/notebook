// Input: An array of N initegers, sorted in increasing order and the last element shifted to the start k times.
// Output: The value of k

// Author: Gautam Singh
// Date: 08 - 07 - 2023

#include <bits/stdc++.h>

using namespace std;

int rotation_count(int arr[], int n){

	// We assume that we do not have to check if the input array is valid.
	// We just have to find the index of the element which is smaller than
	// the first element.
	// If there is no element, then there is no rotation.
	
	for(int i = 1; i < n; i++){

		if(arr[i] <	arr[0]){

			return i;

		}
		
	}

	return 0;
	
}

int main(){
	//File I/O
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[5];

	for(int i = 0; i < 5; i++){

		cin >> arr[i];
		cout << arr[i] << " ";

	}

	cout << "\n";

	int rot_count = rotation_count(arr, 5);
	cout << "The array has been rotated " << rot_count << " times. ";

	return 0;

}
