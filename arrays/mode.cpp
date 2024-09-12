// C++ program to find the mode of an array
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

// Function to find the mode of an array
int findMode(int arr[], int n)
{
	// Create a frequency map to count occurrences of each
	// element
	unordered_map<int, int> freqMap;
	for (int i = 0; i < n; i++) {
		freqMap[arr[i]]++;
	}
	int max = 0;
	int max_freq = 0;
	for (auto i = freqMap.begin(); i != freqMap.end(); i++){
	   if(i->second > max_freq){
				max_freq = i->second;
				max = i->first;
			}
	}
	return max;
}

int main()
{
	// Test array
	int arr[] = { 2, 2, 3, 3, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// Find and print the mode of the array
	cout << "Mode of the array is " << findMode(arr, n) << endl;
	return 0;
}
