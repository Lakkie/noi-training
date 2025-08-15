#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	//百位的数字a/100, 十位的数字a/10%10, 个位的数字：a%10
	cout<<a%10<<a/10%10<<a/100<<endl;
    return 0;
}
