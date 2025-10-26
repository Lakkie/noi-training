#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int m,n,t;
	cin>>m>>n;
	double sum=0;
	bool a[m][n], b[m][n];
	//输入第一幅图像 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>t;
			a[i][j]=t;
		}
	}
	//输入第二幅图像 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>t;
			b[i][j]=t;
			//顺便对比第一幅图像
			if(a[i][j]==b[i][j]){
				sum++;
			} 
		}
	}
	cout<<fixed<<setprecision(2)<<100*sum/(m*n)<<endl;
    return 0;
}

