#include <iostream>
#include <iomanip>
using namespace std;
int main(){ 
	double f;
	cin>>f;
	cout<<fixed<<setprecision(5)<<(f-32)*5/9<<endl;
    return 0;
}
