#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double h,r,s,v,p=3.1415926;
    cin>>h>>r;
    s=p*r*r;
    v=s*h/1000;
    cout<<ceil(20/v);	
    return 0;
}

