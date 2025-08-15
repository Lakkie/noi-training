#include <iostream>
using namespace std;
int main(){
	int n,k,c=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int t=i;
		while(t!=0){
			if(t%10==k){
				c++;
			}
			t=t/10;
		}
	}
	cout<<c<<endl;
	return 0;
}
