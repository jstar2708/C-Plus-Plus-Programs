#include<bits/stdc++.h>
using namespace std;

double power(double number,int n){
	double ans = 1.0;
	for(int i = 1;i<=n;i++){
		ans = ans*number;		//nth power of mid.
	}
return ans;
}

void nth_root(int n,int m){
double low = 1;
double high = m;
double eps = 1e-6;       //eps the decimal places upto which we want our ans.For upto Five places we have to set eps to 1e-6(one greater than 5).

while((high-low)>eps){
	double mid = (low+high)/2.0;
	if(power(mid,n)>m){
		high = mid;
	}
	else{
		low = mid;
	}
}

cout<<low<<endl;
cout<<pow(m,(double)1.0/(double)n);	//we can print low or high because both are same upto 5 decimal places.
}
int main(){
int n,m;
cin>>n>>m;
nth_root(n,m);
return 0;
}
