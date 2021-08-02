#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[],int n,int x){
	sort(arr,arr+n);
	int i = 0,j = n-1;
	while(i<j){
		if(arr[i]+arr[j]==x){
			return true;
		}
		else if(arr[i]+ arr[j]>x){
			j--;
		}
		else{
			i++;
		}
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	if(pairsum(arr,n,x)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}