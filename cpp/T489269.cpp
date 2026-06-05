#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	// ‰»Î
	int n;
	cin>>n;
	vector<unsigned long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//≈≈–Ú
	sort(a.begin(),a.end()); 
	//º∆À„
    double m;
	if(n%2==0){
		m=(a[n/2-1]+a[n/2])/2.0;
	}else{
		m=a[n/2];
	}
    cout<<fixed<<setprecision(1)<<m<<endl;
	return 0;
}
