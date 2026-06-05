#include<iostream>
#include<string>
using namespace std;
int main(){
	struct stu{
		string name;
		float year,NOIP;
	};
	int n;
	cin>>n; 
	struct stu s[n];
	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].year>>s[i].NOIP;
		s[i].year=s[i].year+1;
		s[i].NOIP=s[i].NOIP+s[i].NOIP*0.2;
		if(s[i].NOIP>600){
			s[i].NOIP=600; 
		}
	}
	for(int i=0;i<n;i++){
		cout<<s[i].name<<" "<<s[i].year<<" "<<s[i].NOIP<<endl;
	}
	return 0;
}
