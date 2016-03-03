#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int floor, row, col;
	int i,j,k;
	cin>>floor>>row>>col;
	char map[floor][row][col];
	int visited[floor][row][col];
	for(k=0;k<floor;k++){
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cin>>map[k][i][j];
				if(map[k][i][j] == 'S'){
					visited[k][i][j]=0;
					que.push(1); que.push(i); que.push(j);
				}
				else if(map[k][i][j] == '#') visited[k][i][j]=0;
				else visited[k][i][j] = -1;
			}
		}
	}
	

    int x,y,z;
	while(!que.empty()){
		y = que.front();  que.pop();
		x = que.front();  que.pop();
		z = que.front();  que.pop();
		if(z-1 >= 0){
			if




 


	return 0;
}
