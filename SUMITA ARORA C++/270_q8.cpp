#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m = n;
    int y = 0,count = 1;
    y = m%10;
    while(n>9){
        int N = n%10;
        n = n/10;
        count++;
    }
    cout<<y*10 + n<<" "<<count;
    return 0;

}