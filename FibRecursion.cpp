#include<iostream>
using namespace std;
void Fibonacci(int num){
    static int a=0,b=1,c;
    if(num>0){
    c= a + b;
    a= b;
    b= c;
    cout<<c<<" ";
    Fibonacci(num-1);}}
int main(){
    int num;
    cout<<" Enter Number : ";
    cin>>num;
    cout<<"Fibonacci Series is : 0 1 ";
    Fibonacci(num-2);

return 0;
}
