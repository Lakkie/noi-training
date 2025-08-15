#include <iostream>
using namespace std;
int main(){
	char s;
	cin>>s;
	//三角形的高度
    int height=3;
    //三角形的底边长度
    int width=5;
    //外层循环控制行数
    for (int i=0;i<height;i++){
        //计算每行打印的星号数（包括中间一行）每行的星号数是奇数，从1开始递增
        int stars=2*i+1;
        //计算每行前需要打印的空格数，两边空格数相等
        int spaces=(width-stars)/2;
        //内层循环，先打印空格，再打印星号
        for(int j=0;j<spaces;j++){
        	//打印空格
            cout<<" ";
        }
        for(int k=0;k<stars;k++){
        	//打印星号或给定字符
            cout<<s;
        }
        //换行准备打印下一行
        cout<<endl;
    }
    return 0;
}
