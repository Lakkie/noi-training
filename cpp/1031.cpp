#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	//��λ������a/100, ʮλ������a/10%10, ��λ�����֣�a%10
	cout<<a%10<<a/10%10<<a/100<<endl;
    return 0;
}
