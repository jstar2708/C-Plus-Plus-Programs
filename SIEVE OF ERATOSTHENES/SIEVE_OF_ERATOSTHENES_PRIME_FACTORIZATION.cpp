#include<iostream>
using namespace std;

void sieveprimefac(int x){
    int spf[10000] = {0};         //intializing the array of smallest prime facter by 0.
    for(int i = 2;i<=x;i++){
        spf[i] = i;             //providing each number its factor(not smallest but itself only as each number is a factor of itself)
    }
    for(int i = 2;i<=x;i++){    
        if(spf[i]==i){          //checking if the number is alloted its greater factor or not.
            for(int j = i*i;j<=x;j+=i){
                if(spf[j]==j){     
                    spf[j] = i;
                }
            }
        }
    }
    while(x!=1){
        cout<<spf[x]<<" ";      //printing the smallest factor of our number
                                //and then dividing it by its spf.Like in LCM----->  2_________42
                                                                                  // 2_________24
                                                                                  // 2_________12
                                                                                  // -----------
                                                                                  //-----------
                                                                                  //2___________1
        x = x/spf[x];
    }
}

int main(){
    int n;
    cin>>n;
    sieveprimefac(n);
    return 0;
}