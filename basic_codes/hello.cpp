#include<iostream>
using namespace std;
int main(){
    // int sum=0;
    // int n;
    // cout<<"Sum upto ? ";
    // cin>>n;
    // for (int i=1;i<=n;i++){
    // sum=sum+i;
    

//      int sum=0;
//     int n;
//     cout<<"Sum of odd numbers upto ? ";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//     if(i%2!=0){
//         sum=sum+i;
//     }

//     }

// cout<<sum;

int i=1 ,n;

int oddSum=0;
cout<<"Sum upto ? ";
    cin>>n;
while(i<=n){
    if(i%2!=0){
    oddSum=oddSum+i;
    
    }
    i++;
}
cout<<oddSum;
   
   
    return 0;
}

