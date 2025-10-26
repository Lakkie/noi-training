#include <iostream>
using namespace std;

int main() {
	int coins = 0, k, days = 1;
	cin >>k;
	//输入 
	for (int i = 0; i < k; i++) {
		//超过k天，结束循环。 
		if (days > k)  break;
		//每连续的i+1天，每天获取i+1个金币 
		for (int j = 0; j <= i; j++) {
			//超过k天，结束循环。 
			if (days > k)  break;
			coins += i + 1;
			days++;
		}
	
	}
	cout << coins << endl;
	return 0;
}
