#include<stdio.h>
int adj[20][20],visited[20];
struct node{
	int vertex,key,par;
}str[20];
void sort(int n)
{
	int i,j;
	struct node temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(str[j].key>str[j+1].key)
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	
		for(j=0;j<n;j++)
		{
			printf("%d   ",str[j].key);
		}
		printf("\n");
}

int main()
{
	int n,i,j,m,s,d,w,copy,count=0,u,v;
	printf("enter the no. of vertices:");
	scanf("%d",&n);
	printf("enter the no. of edges:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			adj[i][j]=0;
		}
	}
	for(j=0;j<n;j++)
	{
		str[j].vertex=j;
		str[j].key=999;
		str[j].par=-1;
		visited[j]=0;
		//printf("%d",str[j].key);
	}
	printf("enter the edges followed by their weight:");
	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&s,&d,&w);
		adj[s][d]=w;
		adj[d][s]=w;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d   ",adj[i][j]);
		}
		printf("\n");
	}
	str[0].key=0;
	visited[0]=1;
	while(count!=n)
	{
		sort(n);

		u=str[0].vertex;
		visited[u]=1;
		for(i=0;i<n;i++)
		{
			
			if(visited[i]!=1&&adj[u][i]!=0&&adj[u][i]<str[i].key)
			{
				str[i].par=u;
				str[i].key=adj[u][i];
			}
		}
		count++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",str[i].key);
	}


return 0;
}
