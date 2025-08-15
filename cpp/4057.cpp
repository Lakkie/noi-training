#include <iostream>
using namespace std;
int main(){
	int h,m,s,k;
	cin>>h>>m>>s>>k;
	//先计算秒
	s=s+k%60;
	//满60秒进位1分钟 
	if(s>=60){
		s=s-60;
		m=m+1;
	}
	//再计算分钟
	m=m+k/60%60;
	//满60分钟进位1小时 
	if(m>=60){
		m=m-60;
		h=h+1;
	}
	h=h+k/3600;
	cout<<h<<' '<<m<<' '<<s<<endl; 
    return 0;
}
