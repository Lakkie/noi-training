#include<iostream>
#include<vector>
using namespace std;
long long mem[21][21][21]={};//记忆化搜索
long long w(long long a,long long b,long long c){
	if(a<=0||b<=0||c<=0){
		return 1;
	}
	if(a>20||b>20||c>20){
		return w(20,20,20);
	}
	if(mem[a][b][c]==0){//没有缓存结果 
		if(a<b&&b<c){
			mem[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		}else{
			mem[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
		}
	}else{//有缓存结果 
		// do nothing 
	}
	return mem[a][b][c];
}
int main(){
	long long a,b,c;
	while(true){
		cin>>a>>b>>c;
		if(a==-1&&b==-1&&c==-1){
			break;
		}
		cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
	}
	return 0;
} 
