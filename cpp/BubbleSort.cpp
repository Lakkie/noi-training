#include<iostream>
using namespace std;
//冒泡排序（从小到大） 
void bs(int a[],int n){
	for(int i=0;i<n-1;i++){//外层循环控制遍历的轮数。 
		for(int j=0;j<n-i-1;j++){//内层循环控制每一轮的比较。 
			if(a[j]>a[j+1]){//从小到大排序时，如果前面的数字比后面大，就需要交换位置。 
				int t=a[j];
				a[j]=a[j+1]; 
				a[j+1]=t;
			} 
		} 
	}
}
//冒泡排序（从大到小） 
void bsd(int a[],int n){
	for(int i=0;i<n-1;i++){//外层循环控制遍历的轮数。 
		for(int j=0;j<n-i-1;j++){//内层循环控制每一轮的比较。 
			if(a[j]<a[j+1]){//从大到小排序时，如果前面的数字比后面小，就需要交换位置。 
				int t=a[j];
				a[j]=a[j+1]; 
				a[j+1]=t;
			} 
		} 
	}
}
//冒泡排序优化（从小到大） 
void bso(int a[],int n){
	bool swapped; 
	for(int i=0;i<n-1;i++){//外层循环控制遍历的轮数。 
		swapped=false;//初始值 
		for(int j=0;j<n-i-1;j++){//内层循环控制每一轮的比较。 
			if(a[j]>a[j+1]){//从小到大排序时，如果前面的数字比后面大，就需要交换位置。 
				int t=a[j];
				a[j]=a[j+1]; 
				a[j+1]=t;
				swapped=true;//如果本轮有交换，则标记为true。 
			} 
		} 
		if(swapped==false){//如果本轮没有交换，说明数组已经排好了，可以直接结束循环。 
			break;
		} 
	}
}
int main(){
	int n=10,a[10]={2,5,3,7,9,1,0,8,4,6};
	bsd(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
