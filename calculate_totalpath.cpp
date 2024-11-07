#include<iostream>
using namespace std;

int total_moves(int&endx,int&endy){
  arr[endx][endy];
  for(int i=0;i<endx;i++){
    arr[i][0]=1;
  }
  for(int j=0;j<endy;j++){
    arr[0][j]=1;
  }
  for(int a=1;a<endx;a++){
    for(int b=1;b<endy;b++){
      arr[a][b]=arr[a-1][b]+arr[a][b-1];
    }
  }
  return arr[endx][endy];
}
int main(){
  int n;
  cout<<"grid size is";
  cin>>n;
  cout<<"the total moves are"<<total_moves(n,n);
  return 0;
}
