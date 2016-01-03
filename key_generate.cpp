#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<fstream>
#include<string>
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
  

  int p,q;
  cin>>p>>q;
  
  int n=p*q;
  
  int l=lcm(p-1,q-1);
  
  int e;
  for(e=2;e<l;e++){
    if(gcd(e,l)==1){break;}
  }
  
  int d;
  for(d=1;d<n;d++){
    //cout<<e<<'*'<<d<<'%'<<l<<endl;
    if((e*d)%l==1){break;}
    
  }

  ofstream ofs("open.key");
  ofs<<e<<' '<<n<<endl;

  ofstream ofs2("secret.key");
  ofs2<<d<<' '<<n<<endl;

 

}
