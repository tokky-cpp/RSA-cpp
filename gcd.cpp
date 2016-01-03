#include<iostream>
using namespace std;

int gcd(int a,int b){
  while(true){
    if(a<b){
      int t=a;
      a=b;
      b=t;
    }
    if(a%b==0){return b;}
    else{
      a=a%b;
    }
  }
}

int lcm(int a,int b){
  return a*b/gcd(a,b);
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"gcd:"<<gcd(a,b)<<endl;
  cout<<"lcm:"<<lcm(a,b)<<endl;
}
