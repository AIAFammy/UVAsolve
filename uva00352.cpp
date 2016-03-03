#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

queue<int> que;

int main()
{
    int n,eagle=0,count=0;
    int i,j,k,m,q,cur,x,y;
    if(scanf("%d",&n) != EOF){
		count++;
	  	int matrix[n][n], visited[n][n];
    	for(i=0;i<n;i++){
            for(j=0;j<n;j++){
				cin >> matrix[i][j];
				visited[i][j] = 0;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(visited[i][j] == 0){
					if(matrix[i][j] == 1){
						eagle++;
						que.push(10*i+j);
						while(!que.empty()){
							cur = que.front();
							que.pop();
							x=cur/10, y=cur%10;
							for(m=x-1;m<=x+1;m++){
								for(q=y-1;q<=y+1;q++){
									if(m>=0&&m<n&&q>=0&&q<n){
										if(matrix[m][q] == 1){
											que.push(10*m+q);
											visited[m][q]=1;
										}
										else visited[m][q]=1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<"Image number "<<count<<" contains "<<eagle<<" war eagles."<<endl;
	return 0;
}
