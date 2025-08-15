#include<iostream>
using namespace std;
int main(){
    cout<<"for loop : "<<endl;
    for(int i=0;i<5;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int i=0;
    for(;i<5;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int j=0;
    for(;j<5;){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    cout<<"while loop : "<<endl;
    int k=0;
    while(k<5){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
    cout<<"do while loop : "<<endl;
    int l=0;
    do{
        cout<<l<<" ";
        l++;
    }while (l<5);

}
