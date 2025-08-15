#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//第一层循环代表按行处理。从第0行到第n-1行。 
	for(int i=0;i<n;i++){
		//第二层循环代表按列处理。从第0列到第n-1列。 
		for(int j=0;j<n;j++){
			//规律 
			if(i==j||i+j==n-1){
				cout<<"+"; 
			}else{
				cout<<"-";
			}
		}
		//当前行的每列字符都处理完毕后，记得换行。 
		cout<<endl; 
	}
	return 0;
}
