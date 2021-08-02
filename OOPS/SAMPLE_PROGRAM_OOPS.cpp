#include<iostream>
using namespace std;

class cricket{
	private:
	string name;
	string team_name;
	int match,run,average,count = 0;
	public:
	void setdata();
	void getdata();
	void average_();
};
void cricket :: setdata(){
	cout<<"Enter Player Name : ";
	cin>>name;
	cout<<"Enter Team Name : ";
	cin>>team_name;
	cout<<"Enter number of matches played : ";
	cin>>match;
	cout<<"Enter runs : ";
	cin>>run;
	count++;
}
void cricket :: getdata(){
		cout<<"Name : "<<name<<endl;
		cout<<"Team : "<<team_name<<endl;
		cout<<"Matches : "<<match<<endl;
		cout<<"Runs : "<<run<<endl;
}
void cricket :: average_(){
	average = run/match;
	cout<<"Average is : "<<average<<endl;
}
int main(){
	cricket a[3];
	for(int i = 0;i<3;i++){
		a[i].setdata();
		cout<<endl;
	}
	for(int i = 0;i<3;i++){
		a[i].getdata();
		a[i].average_();
		cout<<endl;
	}
}