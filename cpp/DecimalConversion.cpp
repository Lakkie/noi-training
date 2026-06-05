#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int n=10,a[10]={2,5,3,7,9,1,0,8,4,6};
	sort(a+0,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
} 
