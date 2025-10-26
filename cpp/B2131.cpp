#include <iostream>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		float t;
		bool c;
		cin>>s>>t>>c;
		if(c==1&&t>=37.5){
			cout<<s<<endl;
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}
