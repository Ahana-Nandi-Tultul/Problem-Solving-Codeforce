#include<stdio.h>

main(){
    string s;
 char a, b;
 int first, last, n, total;
 scanf("%d", &n);
 while(n>0){
 scanf("%s", &s);
 a= s[0];
 b=s[s.length()-1];
 first= int(a) - 48;
 last = int (b) - 48;\
 total= first+last;
 printf("%d",  total);
 n=n-1;
 }

}
