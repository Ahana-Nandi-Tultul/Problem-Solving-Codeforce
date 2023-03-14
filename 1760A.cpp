#include<iostream>
using namespace std;
main(){
    int a, b, c, n, l, m, s;
    cin>>n;
    while(n>0){
        cin>>a>>b>>c;
        if((a > b && a< c) | (a < b && a > c)){
            cout<<a<<endl;
        }
        else if((b>a && b< c) | (b<a && b> c)){
            cout<<b<<endl;
        }
        else {
            cout<<c<<endl;
        }
        n=n-1;
    }
}
