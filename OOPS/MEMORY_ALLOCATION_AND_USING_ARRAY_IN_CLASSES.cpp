#include<iostream>
using namespace std;

class Shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initialize_counter(){
        counter = 0;
    }
    void setitem();
    void displayprice();
};

void Shop :: setitem(){
    cout<<"Enter the id of item "<<counter+1<<" : ";
    cin>>itemid[counter];
    cout<<"Enter price of item "<<counter+1<<" : ";
    cin>>itemprice[counter];
    counter++;
}
void Shop :: displayprice(){
    for(int i = 0;i<counter;i++){
        cout<<"Price of Item id "<<itemid[i]<<" is : "<<itemprice[i]<<endl;
    }
}

int main(){
    Shop kirana;
    kirana.initialize_counter();
    for(int i = 0;i<2;i++){
        kirana.setitem();
    }
    cout<<endl;
    cout<<endl;
    kirana.displayprice();
    return 0;
}