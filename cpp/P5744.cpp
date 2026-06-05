#include<iostream>
using namespace std;
int main(){
	struct stu{
		string name;
		int age;
		int point;
	};
	int n;
	cin>>n;
	struct stu s[n];
	//ÊäÈë 
	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].age>>s[i].point;
		//¼ÆËã
		s[i].age+=1;
		s[i].point=s[i].point*120/100;
		if(s[i].point>600) s[i].point=600;
		//Êä³ö
		cout<<s[i].name<<' '<<s[i].age<<' '<<s[i].point<<endl;
	}	 
	return 0;
}
