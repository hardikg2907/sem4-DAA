#include <stdio.h>
#include <stdlib.h>

int findMaxDegree(int n,int arr[100][100])
{   
    int max=0;
    for(int i=1;i<=n;i++)
    {   
        int degree =0;
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]==1)
            {
                degree++;
            }
        }
    }
}


int main()
{   
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    int e;
    int arr[100][100];
    printf("Enter the number of edges: ");
    scanf("%d", &e);

    //initialising the whole graph to 0
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=0;
        }
    }

    printf("Enter the edges by space seperating vertices: ");
    for(int i=1;i<=e;i++)
    {   
        int u,v;
        scanf("%d %d", &u, &v);
        arr[u][v] = 1;
        arr[v][u] = 1;
    }




    return 0;
}