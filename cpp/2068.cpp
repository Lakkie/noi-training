#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	//��ѧ��ʽ�Ƶ��� 
	//ji+tu=x     (1)
	//2ji+4tu=y   (2)
	//(1)ʽ*4 - (2)ʽ �õ�ji������Ϊ(x*4-y)/2
	//(2)ʽ - (1)ʽ*2 �õ�tu������Ϊ(y-x*2)/2
	cout<<(x*4-y)/2<<' '<<(y-x*2)/2<<endl;
    return 0;
}
