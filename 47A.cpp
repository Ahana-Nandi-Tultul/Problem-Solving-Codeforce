#include<iostream>
using namespace std;

bool value(int n){
    for(int i=1; i<=n; i++){
    if(i*(i+1)== 2*n){
        cout<<i<<endl;
        return true;
    }
}
 return false;
}

main(){
int n;
cin>>n;
if( value(n)==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
