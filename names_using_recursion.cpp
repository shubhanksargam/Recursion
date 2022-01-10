#include<iostream>
using namespace std;

void name(int i,int n){
    if(i>n)
        return;
    else{
        cout<<"Shubhank"<<endl;
        name(i+1, n);
    }
    
    
}

int main(){
    int num;
    cin>> num;
    name(1,num);
    return 0;
}