#include<iostream>
using namespace std;
int main(){
int a=0,b=1,c=0,num,i;
cout<<"Enter Number for Fibonacci Series :";
cin>>num;
cout<<"Fibonacci Series is : "<<a<<" "<<b<<" ";

for(i=2;i<num;i++){
    c = a+b;
    a=b;
    b=c;
    cout<<c<<" ";
}
return 0;
}


