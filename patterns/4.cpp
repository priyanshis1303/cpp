#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n :";
cin>>n;
char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){

            cout<<char(ch) ;
            
           
        }
        ch=ch+1;
        cout<<endl;
    }
    return 0;
}