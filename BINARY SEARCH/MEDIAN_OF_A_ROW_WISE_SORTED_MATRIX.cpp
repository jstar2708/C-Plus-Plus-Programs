#include<bits/stdc++.h>
using namespace std;

int count_lesser_or_equal_elements(vector<int> & matrix,int elem){
    int low = 0;
    int high = matrix.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(matrix[mid]<=elem){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int medianmatrix(vector<vector<int>> &matrix,int r,int c){
    int low = 1;
    int high = 1e9;
    int desired = (r*c)/2;
    while(low<=high){
        int mid = (low+high)/2;
        int count = 0;
        for(int i = 0;i<r;i++){
            count = count + count_lesser_or_equal_elements(matrix[i],mid);
        }
        if(count<=desired){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r,vector<int>(c));
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"The median of matrix is : "<<medianmatrix(matrix,r,c);
    return 0;
}