#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int a,b,c,d;
 cin>>a>>b>>c;
 if((a<b && a>c)||(a>b && a<c)){
    if(a<b && a>c){
      d=(b-a)+(a-c);
      cout<<d;
    }
    else{
      d=(a-b)+(c-a);
      cout<<d; 
    }
 } 
 else if((b<a && b>c)||(b>a && b<c)){
    if(b<a && b>c){
      d=(a-b)+(b-c);
      cout<<d;
    }
    else{
      d=(b-a)+(c-b);
      cout<<d;
    }
    
 }
 else{
    if(c<a && c>b){
      d=(a-c)+(c-b);
      cout<<d;
    }
    else{
      d=(c-a)+(b-c);
      cout<<d;
    }
    
 }
 return 0;
}