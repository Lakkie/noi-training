#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long long n,t,s=0;
	scanf("%d",&n);
	for(long long i=1;i<=n;i++){
		scanf("%d",&t);
		s=s^t;
	}
	printf("%d",s);
	return 0;
}
