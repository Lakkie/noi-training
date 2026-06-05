#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,t0=0,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,zj=0;
    cin>>n;
    string a[n][7],b[7];
    for(int i=0;i<7;i++){
    	cin>>b[i];
    }
    for(int i=0;i<n;i++){
		for(int j=0;j<7;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<7;j++){
			for(int k=0;k<7;k++){
				if(a[i][j]==b[k]){
					zj++;
				}
			}
		}
		if(zj==7){
			t0++;
		}
		else if(zj==6){
			t1++;
		}
		else if(zj==5){
			t2++;
		}
		else if(zj==4){
			t3++;
		}
		else if(zj==3){
			t4++;
		}
		else if(zj==2){
			t5++;
		}
		else if(zj==1){
			t6++;
		}
	}
    cout<<t0<<" "<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<" "<<t5<<" "<<t6<<endl;
    return 0;
}
