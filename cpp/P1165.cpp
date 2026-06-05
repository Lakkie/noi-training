#include<iostream>
#include<stack> 
using namespace std;
int main(){
	int n,o,x;
	cin>>n;
	stack<int> st;//入库集装箱的重量。 
	stack<int> max;//仓库当前的最大重量。 
	for(int i=0;i<n;i++){
		cin>>o;
		if(o==0){//入库 
			cin>>x;
			st.push(x);//入栈
			if(st.size()==1){//本次入库之前无库存，直接保存。 
				max.push(x);//保存当前栈的最大值。因为无库存时没有比较，当前的值直接最大。 
			}else{//之前有库存，比较当前的值和上一次库存的最大值。 
				if(x>max.top()){//当前的值大些。 
					max.push(x);//保存当前栈的最大值。 
				}else if(x<=max.top()){//上一次库存的最大值大些。
					max.push(max.top());//保存当前栈的最大值。 
				}
			}
		}else if(o==1){//出库
			if(!st.empty()){
				st.pop();//出栈
				max.pop();
			}
		}else if(o==2){//查询
			if(!max.empty()){
				cout<<"r="<<max.top()<<endl;
			}else{
				cout<<"r="<<0<<endl;
			}	
		}
	}
	return 0;
} 
