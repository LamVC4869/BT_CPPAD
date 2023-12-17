#include<iostream>
using namespace std;
int main(){
double a,b,c;
cin>>a>>b>>c;
if((a+b)>c&&(b+c)>a&&(a+c)>b){
    if(a==b&&a==c&&b==c){
        cout<<"3 canh tao thanh tam giac deu";
    }else if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a)){
        cout<<"3 canh tao thanh tam giac can";
    }else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
        cout<<"3 canh tao thanh tam giac vuong";
    }else{
        cout<<"3 canh tao thanh tam giac binh thuong";
    }

}else{
    cout<<"gia tri cua 3 canh khong the la hinh tam giac";
}
    return 0;
}