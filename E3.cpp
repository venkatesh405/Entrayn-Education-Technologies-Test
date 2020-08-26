//Entrayn Education Technologies
//You are a professional robber planning to rob houses along a street. Each house has a//
//certain amount of money stashed, the only constraint stopping you from robbing each of
//them is that adjacent houses have security systems connected and it will
//automatically contact the police if two adjacent houses were broken into on the
//same night.
//Given a list of non-negative integers representing the amount of money of each house,
//determine the maximum amount of money you can rob tonight without alerting the
//police.
//Example:
//Input: nums = [1,2,3,1]
//Output: 4
//Input: nums = [2,7,9,3,1]
//Output: 12
//Input: nums = [2,7,9,3,10,5,4,6]
//Output: 27


#include <bits/stdc++.h>
using namespace std;

int max(int x,int y) {return (x>y)? x:y;} 

int rob(vector<int>& money) {
	int n=money.size();
	if(n==0)
		return 0;
	if(n==1)
		return money[0];

	int house[n];
	for(int i=0;i<n;i++)
		house[i]=money[i];
	house[0]=money[0];
	house[1]=(money[0]>money[1])?money[0]:money[1];
	for(int i=2;i<n;i++){
		house[i]=max(house[i]+house[i-2],house[i-1]);
	}
	return house[n-1];
}

int main(){
	int n,m;
	cout<<"enter no of houses\n";
	cin>>n;

	vector<int> money;

	cout<<"enter respective money's of houses\n";
	for(int i=0;i<n;i++){
		cin>>m;
		money.push_back(m);		
	}

	cout<<"maximum amount that can be robbed: "<<rob(money)<<endl;

	return 0;
	
}

