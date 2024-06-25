#include<iostream>
using namespace std;
int main(){
    int a=0,b;
    int n;
    cout<<"enter n value";
    cin>>n;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            b=i;
            
        }
        cout<<"the answer is"<<b;
    }
    else{
        for(int i=0;i<n/2;i++){
            a=a+2;
            cout<<"ans is"<<a;
        }
        cout<<"the answer is"<<a;
    }

}