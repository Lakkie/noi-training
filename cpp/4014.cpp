#include <iostream>
using namespace std;
int main(){
	int k,l,r,s=0;
	cin>>k>>l>>r;
	for(int i=l;i<=r;i++){
		//先判断尾数为k的数 
		if(i%10==k){
			s+=i;
		//再判断能被k整除的数 （这里使用else if可以避免重复统计既满足尾数为k又满足能被k整除的数字） 
		}else if(i%k==0){
			s+=i;
		}
	}
	cout<<s<<endl; 
    return 0;
}
