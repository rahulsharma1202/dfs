#include<stdio.h>
void dfs(int);
int a[10][10],visited[10],n;
void main(){
	int i,j;
	printf("enter the number of vertices:");
	scanf("%d",&n);
	printf("enter the matrix:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Dfs is:\n");
	for(i=0;i<n;i++)
		visited[i]=0;
		dfs(0);
	
	
}
void dfs(int i){
	int j;
	printf("%d\n",i);
	visited[i]=1;
	for(j=0;j<n;j++){
		if(!visited[j]&&a[i][j]==1){
			dfs(j);
		}
	}
}