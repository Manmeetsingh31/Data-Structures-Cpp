// C++ program to find minimum (or maximum) element 
// in an array. 
#include <bits/stdc++.h> 
using namespace std; 

int getMin(int arr[], int n) 
{ 
	return *min_element(arr, arr + n); 
} 

int getMax(int arr[], int n) 
{ 
	return *max_element(arr, arr + n); 
} 

int main() 
{ 
	int arr[] = {1,34,55,37,69,98}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Minimum element is: " << getMin(arr, n) << " "; 
	cout << "Maximum element is: " << getMax(arr, n); 
	return 0; 
} 
