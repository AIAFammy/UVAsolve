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
				visited[k][i][j] = -1;
			}
		}
	}
	
	

	cout<<floor<<" "<<row<<" "<<col<<endl;
     for(k=0;k<floor;k++){
         for(i=0;i<row;i++){
             for(j=0;j<col;j++){
                 cout<<map[k][i][j];
             }
			 cout<<endl;
         }
		 cout<<endl;
     }


	return 0;
}
