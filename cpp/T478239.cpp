#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
struct P{
	int x,y,z;
};
bool cmp(P a,P b){
	return a.z<b.z;
}
int main(){
	int n;
	cin>>n;
	P ps[n];
	for(int i=0;i<n;i++){
		cin>>ps[i].x>>ps[i].y>>ps[i].z;
	}
	sort(ps+0,ps+n,cmp);
	double d=0.0;
	for(int i=1;i<n;i++){
		int t=(ps[i].x-ps[i-1].x)*(ps[i].x-ps[i-1].x)+(ps[i].y-ps[i-1].y)*(ps[i].y-ps[i-1].y)+(ps[i].z-ps[i-1].z)*(ps[i].z-ps[i-1].z); 
		d+=sqrt(t); 
	}
	cout<<fixed<<setprecision(3)<<d<<endl;
	return 0;
}
