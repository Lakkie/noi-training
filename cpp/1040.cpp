#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float n;
	cin>>n;
	if(n>=0){
		cout<<fixed<<setprecision(2)<<n<<endl;
	}else{
		cout<<fixed<<setprecision(2)<<n*-1<<endl;
	}
    return 0;
}
