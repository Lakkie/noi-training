#include<iostream>
using namespace std;
const int MAXN=105;
//a-原始矩阵，sum-二维前缀和 
int n,m,max_side=0,a[MAXN][MAXN],sum[MAXN][MAXN];
int main(){
	//1、输入 
	cin>>n>>m;
	for(int i=1;i<=n;i++){//下标从1开始，方便处理边界越界问题。 
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
            //二维前缀和递推公式
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
		}
	}
    //2、计算
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            //等于0的点不能形成正方形，跳过。 
            if(a[i][j]==0){
            	continue;
			}
			//取相对教小的边，作为可能的正方形边。 
            int max_possible_k=i;
            if(i>j){
            	max_possible_k=j;
			}
            //从边长为1，遍历检查到边长为max_possible_k
            for(int k=1;k<=max_possible_k;k++){
            	//正方形左上顶点坐标。 
                int x1=i-k;
                int y1=j-k;
                //正方形区域和
                int area_sum=sum[i][j]-sum[x1][j]-sum[i][y1]+sum[x1][y1];                
                //如果区域和等于面积 (k*k)，说明全是1
                if(area_sum==k*k){
                    if(k>max_side){
                    	max_side=k;
					}
                }else{
                    break; 
                }
            }
        }
    }
	//3、输出 
    cout<<max_side<<endl;
	return 0;
} 
