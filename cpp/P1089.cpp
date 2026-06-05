#include<iostream>
using namespace std;
int main(){
	int a[12];
	//st手头上的钱，cq存妈妈那边的钱。 
	int st=0,cq=0;
	for(int i=0;i<12;i++){
		cin>>a[i];
		//判断是否预算不足。 
		int t=(st+300-a[i]);
		if(t<0){
			cout<<-1*(i+1);
			return 0;
		} 
		cq+=t/100*100;														 
		st+=300-a[i]-t/100*100;
	}
	cout<<st+cq*120/100;
	return 0;
}  
