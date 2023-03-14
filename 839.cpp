#include<iostream>
using namespace std;

main(){
 string s;
 char a, b;
 int first, last, n;
 cin>>n;
 while(n>0){
 cin>>s;
 a= s[0];
 b=s[s.length()-1];
 first= int(a) - 48;
 last = int (b) - 48;
 cout<<first+last<<endl;
 n=n-1;
 }
}
