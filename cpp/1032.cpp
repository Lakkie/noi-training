#include <iostream>
using namespace std;
int main(){
	int h,r;
	cin>>h>>r;
	//Բ���������ʽ: ��* r * r * h 
	double v=3.1*r*r*h;
	//1��=1000�������� 
	int t=20000/v;
	cout<<t+1<<endl;
    return 0;
}
