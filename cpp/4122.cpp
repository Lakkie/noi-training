#include <iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m*n;i++){
		if(i%m==0&&i%n==0){
			cout<<i;
			break;
		}
	}
	return 0;
}
