#include<iostream>
#include<cstring>
using namespace std;
string mark;
int i=0;
void pingpong(int rule)
{
	int r=0,b=0;
	for(int k=0;k<mark.size();k++){
		if(mark[k]=='W'){
			r++;
		}
		if(mark[k]=='L'){
			b++;
		}
		if(((r-b>=2)&&(r>=rule))||((b-r>=2)&&(b>=rule))){
			cout<<r<<":"<<b<<endl;
			r=0;
			b=0;
		}
    }
    cout<<r<<":"<<b<<endl;
}
int main()
{
	getline(cin,mark,'E');
	pingpong(11);
	cout<<endl;
	pingpong(21);
	return 0;
}
