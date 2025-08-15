#include <iostream>
using namespace std;
int main(){
	int year,month,day;
	cin>>year>>month;
	//2月特殊处理
	if(month==2){
		//闰年
		if((year%4==0 && year%100!=0) || year%400==0){
			day=29;
		}else{
			day=28;
		}
	}else{
		//一般规律 
		switch(month){
			case 1:day=31;break;
			case 3:day=31;break;
			case 4:day=30;break;
			case 5:day=31;break;
			case 6:day=30;break;
			case 7:day=31;break;
			case 8:day=31;break;
			case 9:day=30;break;
			case 10:day=31;break;
			case 11:day=30;break;
			case 12:day=31;break;
		}
	}
	cout<<day;
    return 0;
}
