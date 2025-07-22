#include<iostream>
using namespace std;
 int main(){

  int n;
  bool isPrime=true;
  cout<<"enter the number :";
  cin>>n;

  for(int i=2;i*i<=n;i++){
  if(n%i==0){
    isPrime=false;
    break;
  }
  else{
    
  }
 }
if(isPrime == true){
  cout<<"prime no";
}
else{
  cout<<" not prime no";
}

  return 0;
 }