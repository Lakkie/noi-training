#include <iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	char map_in[m][n];
	char tmp;
	//输入地雷分布情况 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>tmp;
			map_in[i][j]=tmp;
		}
	}
//	//检查输入内容 
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			cout<<map_in[i][j];
//		}
//		cout<<endl;
//	}
	//转化输出数组 
	bool map_out[m+2][n+2]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(map_in[i][j]=='*'){
				map_out[i+1][j+1]=1; 
			}
		}
	}
//	//检查输出内容 
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			cout<<map_out[i+1][j+1];
//		}
//		cout<<endl;
//	}
	//统计后输出 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(map_out[i+1][j+1]==1){
				cout<<'*';
			}else{
				cout<<map_out[i][j]+map_out[i+1][j]+map_out[i+2][j]+map_out[i][j+1]+map_out[i+2][j+1]+map_out[i][j+2]+map_out[i+1][j+2]+map_out[i+2][j+2]; 
			}
		}
		cout<<endl;
	}
    return 0;
}

