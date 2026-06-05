#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,c=0;
	cin>>n;
	int a[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n-1;i++){
		//当前同学的总分 
		int s1=a[i][0]+a[i][1]+a[i][2];
		// 1 -> 2,3,...,n
		// 2 -> 3,...,n
		// ...
		// n-1 -> n
		for(int j=i+1;j<n;j++){
			int s2=a[j][0]+a[j][1]+a[j][2];
			if(abs(s1-s2)<=10&&abs(a[i][0]-a[j][0])<=5&&abs(a[i][1]-a[j][1])<=5&&abs(a[i][2]-a[j][2])<=5){
				c++;
			}
		}
	}
	cout<<c;
	return 0;
}
