#include<iostream>
using namespace std;
int main(){
int a,b;
char c;
cout<<"Enter the number you want to calculate"<<endl<<"a = ";
cin>>a;
cout<<"b = ";
cin>>b;
cout<<"Enter the calculation you want to calculate: ";
cin>>c;
switch(c){
    case '+':
    cout<<a<<" + "<<b<<" = "<<a+b; break;
    case '-':
    cout<<a<<" - "<<b<<" = "<<a-b; break;
    case '*':
    cout<<a<<" * "<<b<<" = "<<a*b; break;
    case '/':
    if(b==0){
        cout<<"Math Error";
    }else{
        cout<<a<<" / "<<b<<" = "<<a/b;break;
    }
}
    return 0;
}