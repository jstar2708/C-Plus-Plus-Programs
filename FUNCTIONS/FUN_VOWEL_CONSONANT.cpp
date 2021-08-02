#include<iostream>
using namespace std;

bool vowel(int y){
    if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u'||y=='A'||y=='E'||y=='I'||y=='O'||y=='U'){
        return true;
    } else{
        return false;
    }
}

int main(){
    char n;
    cin>>n;
    if(vowel(n)){
        cout<<"vowel";
    } else{
        cout<<"consonant";
    } return 0;
}