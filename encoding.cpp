#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;


long long mypowtwo(long long y){
  long long ret=1;
  if(y==0)return 1;
  for(long long i=0;i<y;i++){
    ret*=2;
  }
  return ret;
}

long long modulo(long long x,long long e,long long n){
  long long binary[100]={};
  long long mod[100]={};
  long long s=1,j;
  for(j=0;s<e;s*=2,j++){}
  
  long long ss=s,jj=j,ee=e;
  for(;ee>0;jj--){
      if(ee>=mypowtwo(jj)){ee-=mypowtwo(jj);binary[jj]=1;}
  }

  
  for(long long i=0;i<j;i++){
    if(i==0){mod[i]=x;}
    else{
      mod[i]=(mod[i-1]*mod[i-1])%n;
    }
  }

  long long sum=1;
  for(long long i=0;i<j;i++){
    if(binary[i]==1){
      sum=(sum*mod[i])%n;
    }
  }
  return sum%n;
}

long long gcd(long long a,long long b){
  while(true){
    if(a<b){
      long long t=a;
      a=b;
      b=t;
    }
    if(a%b==0){return b;}
    else{
      a=a%b;
    }
  }
}

long long lcm(long long a,long long b){
  return a*b/gcd(a,b);
}

int main(){
 
  //encryption
  long long e,n;
  cin>>e>>n;
  getchar();
   cerr<<"-----plain number-----"<<endl;

  char s;
  long long enc;

  

  while(true){

    s=getchar();
    
    if(s==EOF){break;}
    else{
      cerr<<(int)s<<' ';
      //encrypt (int)s to hoge
      //enc=(int)pow((double)(int)s,(double)e)%n;
      enc=modulo((long long)s,e,n);
      cout<<enc<<' ';

      
    }
  }
  cerr<<endl;
  // cerr<<endl<<"-----end of plain text-----"<<endl;


  

}
