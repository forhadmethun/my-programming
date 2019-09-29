#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("io.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int N,n;
    while(scanf("%d %d",&N,&n)==2)
    {
        getchar();
        if(!N && !n) break;

        char big_sqr[N+1][N+1];
        char sml_sqr[n+1][n+1];
        int a=0,b=0,c=0,d=0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                big_sqr[i][j]=getchar();
            }
            getchar();

        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                sml_sqr[i][j]=getchar();
            }
            getchar();

        }

        for(int i=0; i<=(N-n); i++)
        {
            for(int j=0; j<=(N-n); j++)
            {
                int flag=0;
                for(int k=0; k<n; k++)
                {
                    for(int l=0; l<n; l++)
                        if(big_sqr[i+k][j+l]!=sml_sqr[k][l])
                        {
                            flag=1;
                            break;
                        }
                    if(flag) break;
                }
                if(!flag)a++;
            }
        }



        for(int i=0; i<=(N-n); i++)
        {
            for(int j=0; j<=(N-n); j++)
            {
                int flag=0;
                for(int k=0; k<n; k++)
                {
                    for(int l=0; l<n; l++)
                        if(big_sqr[i+k][j+l]!=sml_sqr[n-l-1][k])
                        {
                            flag=1;
                            break;
                        }
                    if(flag) break;
                }
                if(!flag)b++;
            }
        }

        for(int i=0; i<=(N-n); i++)
        {
            for(int j=0; j<=(N-n); j++)
            {
                int flag=0;
                for(int k=0; k<n; k++)
                {
                    for(int l=0; l<n; l++)
                        if(big_sqr[i+k][j+l]!=sml_sqr[n-k-1][n-l-1])
                        {
                            flag=1;
                            break;
                        }
                    if(flag) break;
                }
                if(!flag)c++;
            }
        }
        for(int i=0; i<=(N-n); i++)
        {
            for(int j=0; j<=(N-n); j++)
            {
                int flag=0;
                for(int k=0; k<n; k++)
                {
                    for(int l=0; l<n; l++)
                        if(big_sqr[i+k][j+l]!=sml_sqr[l][n-k-1])
                        {
                            flag=1;
                            break;
                        }
                    if(flag) break;
                }
                if(!flag)d++;
            }
        }

         printf("%d %d %d %d\n",a,b,c,d);

    }


    return 0;
}
