#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cout << "Enter 3 sides of a triangle : " ;
    cin >> A >> B >> C;
    if(A+B < C || B+C < A || A+C < B){
        cout << "Invalid Triangle" << endl;
    }
    else{
        cout << "Triangle is valid" << endl;
    }
    return 0;
}