#include<iostream>
using namespace std;
int main(){
	//输入 
	long long n;
	cin>>n;
	long long a=n;//保存原始输入值，用于最后判断是否为质数。 
	int p=0;//标记是否已经输出过因子，用于控制输出"* "符号。
	//遍历从2到根号n的所有数，寻找质因数。 
	for(long long i=2;i*i<=a;i++){
		//如果i是a的因数。 
		if(a%i==0){
			int s=0;//记录当前质因数i的幂次。
			//不断除以i，直到不能整除。 
			while(a%i==0){
				a/=i;
				s++;//统计i的出现次数。 
			}
			//如果之前已经输出过因子，则输出"* "。 
			if(p){
				cout<<"* ";
			}
			//如果该质因数的幂次大于1，则输出形式为 "i^s"。 
			if(s!=1){
				p=1;
				cout<<i<<"^"<<s<<" ";
			}else{//如果该质因数的幂次大于1，则输出形式为 "i"。
				p=1;
				cout<<i<<" ";
			}
		}
	}
	//如果a不等于1，说明还有大于根号n的质因数。 
	if(a!=1){
		//如果原始数n不是质数，则输出该质因数。 
		if(a!=n){
			cout<<"* "<<a;
		}else{// 如果原始数n本身就是质数，则直接输出该质数。 
			cout<<a;
		}
	}
	return 0;
}
