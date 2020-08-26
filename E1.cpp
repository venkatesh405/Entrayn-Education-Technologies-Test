//Entrayn Education Technologies Test
//Given an array of distinct integers. The task is to count all the triplets such that sum of
//two elements equals the third element.If no such triplets can form, print "-1". For
//example: Array [1 5 3 2] has 2 Triplets : 1 + 2 = 3 and 3 +2 = 5


#include <bits/stdc++.h> 
using namespace std; 
int countTriplets(int arr[], int n){ 
	int freq[100] = {0};
	for (int i=0; i < n; i++){ 
		freq[arr[i]]++; 
	} 
	int count = 0; 
	for(int i = 0;i < n; i++){ 
		for(int j = i+1; j < n; j++){ 
			if(freq[arr[i] + arr[j]]){ 
				count++; 
			} 
		} 
	} 
	return count; 
} 

int main() 
{ 
	int n = 4; 
	int arr[] = {1, 5, 3, 2}; 
	cout << countTriplets(arr, n); 
	return 0; 
} 
