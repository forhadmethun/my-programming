#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int wt[1001];
int b[1000];
int MW[101];

//int b[] = {60, 100, 120};
//int wt[] = {10, 20, 30};

template <class T, class U> inline T max(T &a, U &b)
{
    return a > b ? a : b;
}
int knapsack(int n, int W)
{
    int K[n+1][W+1];
    for(int i=0; i<=n; i++)
    {
        for(int w=0; w<=W; w++)
        {
            if(i==0 || w==0) K[i][w] = 0 ;
            else if(wt[i-1] > w) K[i][w] = K[i-1][w];
            else
            {
                K[i][w] = max(K[i-1][w],b[i-1]+K[i-1][w-wt[i-1]]);
            }
        }

    }
    return K[n][W];
}



int main()
{
    /*
    int M = 50;
    int n = 3;

    printf("%d\n", knapsack(n,M));
    */
    //freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--)
    {
       int N;
       scanf("%d",&N);
       for(int i=0;i<N;i++){
          scanf("%d %d",&b[i],&wt[i]);
       }
       int G;
       scanf("%d",&G);
       for(int i=0;i<G;i++){
           scanf("%d",&MW[i]);
       }
       int sum = 0;
       for(int i=0;i<G;i++){
         sum += knapsack(N,MW[i]);
       }
       cout << sum << endl;




       //int P,W;



    }


    return 0;
}
