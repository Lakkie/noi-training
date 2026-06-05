#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	//数组a存男生身高，数组b存女生身高，al实际输入的男生人数，bl实际输入的女生人数。 
	int n,al=0,bl=0;
	cin>>n;
	double a[n]={0.0},b[n]={0.0}; 
	for(int i=0;i<n;i++){
		string gender;
	    double height;
		cin>>gender>>height;
		if(gender=="male"){//男生 
			a[al]=height;
			al++;
		}else if(gender=="female"){//女生
			b[bl]=height;
			bl++;
		}else{//安全写法，避免有不是male和female的值干扰最终结果。 
			//do nothing. 
		}
	}
	//男生排序
	for(int i=0;i<al-1;i++){
		for(int j=0;j<al-1-i;j++){
			if(a[j]>a[j+1]){
				double temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//女生排序 
	for(int i=0;i<bl-1;i++){
		for(int j=0;j<bl-1-i;j++){
			if(b[j]<b[j+1]){
				double temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	//输出男生 
	for(int i=0;i<al;i++){
		cout<<fixed<<setprecision(2)<<a[i]<<" "; 
	}
	//输出女生 
	for(int i=0;i<bl;i++){
		cout<<fixed<<setprecision(2)<<b[i]<<" "; 
	}
	return 0;
} 
