#include<bits/stdc++.h>
using namespace std;
const int N=510;
const int INF=1e9+10;
int dir[N][N];

int main(){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j) dir[i][j]=0;
			dir[i][j]=INF;
		}
	}
	int n,m;
	cout<<"Enter number of vertices and edges\n";
	cin>>n>>m;
	cout<<"Enter edges and their weight\n";
	for(int i=0;i<m;i++){
		int x,y,wt;
		cin>>x>>y>>wt;
		dir[x][y]=wt;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				dir[i][j]=min(dir[i][j],dir[i][k]+dir[k][j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dir[i][j]==INF){
					cout<<"I ";
				}
				else 
					cout<<dir[i][j]<<" ";
			}
			cout<<endl;
		}	
}
