#include<bits/stdc++.h>
using namespace std;

void indexFinder(string arr[][3],int x){
    int i = 0,j = 2;
    while(i<3 && j<3){
        if(stoi(arr[i][j])<x){
            i++;
        }
        else if(stoi(arr[i][j])>x){
            j--;
        }
        else{
            cout<<i<<" "<<j;
            break;
        }
    }
}

int main(){
    string arr[3][3];
    int count = 1;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            arr[i][j] = to_string(count);
            count++;
        }
    }
    indexFinder(arr,9);
    return 0;
}