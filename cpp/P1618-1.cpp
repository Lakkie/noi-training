#include<iostream>
using namespace std;
//计算最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
	int A,B,C,n=0;
	cin>>A>>B>>C;//输入比例值 
	//约分成最简比例。 100:200:300 
	int g=gcd(gcd(A,B),C);
	A/=g;B/=g;C/=g;
	if(A<10&&B<10&&C<10){
	    for(int i=123;i<=329;i++){ 
	        int a[5]={0},b[5]={0},c[5]={0};
			a[1]=A*i%10;//个位数 
			a[2]=A*i%100/10;//十位数 
			a[3]=A*i/100;//百位数 
	        b[1]=B*i%10;
			b[2]=B*i%100/10;
			b[3]=B*i/100;
	        c[1]=C*i%10;
			c[2]=C*i%100/10;
			c[3]=C*i/100;
			int num=a[1]*a[2]*a[3]*b[1]*b[2]*b[3]*c[1]*c[2]*c[3];
			int num2=a[1]+a[2]+a[3]+b[1]+b[2]+b[3]+c[1]+c[2]+c[3];
	        if(num==362880&&num2==45){//判断数字是否从1到9 
				cout<<i*A<<" "<<i*B<<" "<<i*C<<endl;
				n++;
			}
	    }
	}else{
    	int a[5]={0},b[5]={0},c[5]={0};
		a[1]=A%10;//个位数 
		a[2]=A%100/10;//十位数 
		a[3]=A/100;//百位数 
        b[1]=B%10;
		b[2]=B%100/10;
		b[3]=B/100;
        c[1]=C%10;
		c[2]=C%100/10;
		c[3]=C/100;
		int num=a[1]*a[2]*a[3]*b[1]*b[2]*b[3]*c[1]*c[2]*c[3];
		int num2=a[1]+a[2]+a[3]+b[1]+b[2]+b[3]+c[1]+c[2]+c[3];
		if(num==362880&&num2==45){
			cout<<A<<" "<<B<<" "<<C<<endl;
			n++;
		}
	}
    if(n==0){
		cout<<"No!!!";
	}
    return 0;
}
