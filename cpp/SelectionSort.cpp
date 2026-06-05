#include<iostream>
using namespace std;
//选择排序（从小到大） 
void ss(int a[],int n){
	for(int i=0;i<n-1;i++){//外层循环遍历数组的每个元素。
		int min=a[i],t=i;
		for(int j=i+1;j<n;j++){//内层循环遍历未排序的部分，找到真正的最小值。 
			if(a[j]<min){ 
				min=a[j];
				t=j;//记录最小值的位置。 
			}
		}
		if(t!=i){//如果最小值的位置不是当前位置，就交换他们。 
			a[t]=a[i];
			a[i]=min;
		}
	}
}
//选择排序（从大到小） 
void ssd(int a[],int n){
	for(int i=0;i<n-1;i++){//外层循环遍历数组的每个元素。
		int max=a[i],t=i; 
		for(int j=i+1;j<n;j++){//内层循环遍历未排序的部分，找到真正的最大值。  
			if(a[j]>max){ 
				max=a[j];
				t=j;//记录最大值的位置。 
			} 
		}
		if(t!=i){//如果最大值的位置不是当前位置，就交换他们。
			a[t]=a[i];
			a[i]=max;
		}
	}
}
int main(){
	int n=10,a[10]={2,5,3,7,9,1,0,8,4,6};
	ssd(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}

