#include <iostream>
using namespace std;
int main(){
	//输入 
    int m,n,x,y;
    cin >> m >> n;
    int map[m][n],lastmap[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            map[i][j]=0;
        }
    }
    //统计地图每个点的轰炸次数 
    cin >> x >> y;
    int x1,y1,x2,y2;
    for (int k=0;k<x;k++){
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i=x1-1;i<x2;i++){
            for (int j=y1-1;j<y2;j++){
                map[i][j]+=1;
                lastmap[i][j]=k+1;//应该在这里记录最后一轮轰炸次数 
            }
        }
    }
    //判断是否被轰炸 
    int c,d;
//    int times[y],last[y];
//    char boom[y];
    for (int i=0;i<y;i++){
        cin >> c >> d;
        if (map[c-1][d-1]>=1){
//            boom[i]='Y';
//            times[i]=map[c-1][d-1];
            //last[i]=i;//这里的判断不对 
            cout<< "Y"<< " "<< map[c-1][d-1]<< " "<< lastmap[c-1][d-1]<< endl;
        }
        else{
//            boom[i]='N';
            cout<< "N"<< endl;
        }
    }
//    for (int i=0;i<y;i++){
//        if (boom[i]=='Y'){
//            cout<< "Y"<< " "<< times[i]<< " "<< last[i]+1<< endl;
//        }
//        else{
//            cout<< "N"<< endl;
//        }
//    }
}

