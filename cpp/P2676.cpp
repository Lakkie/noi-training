#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	// ‰»Î 
	int n,b,s=0;
	cin>>n>>b;
	int h[n];
	for(int i=0;i<n;i++){
		cin>>h[i]; 
	}
	//≈≈–Ú
	sort(h,h+n,greater<int>());
	//≈–∂œ 
	for(int i=0;i<n;i++){
		s+=h[i];
		if(s>=b){
			cout<<i+1;
			break; 
		}
	}	 
	return 0;
}
