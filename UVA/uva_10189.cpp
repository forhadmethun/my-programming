#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[110][110];
    int m,n,tc=1;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(scanf("%d%d",&m,&n)==2 && (m!=0 && n!=0))
    {
        if(tc!=1)cout << endl;;
        getchar();
        for(int i=0;i<=m+1;i++)
            {
                for(int j=0;j<n+1;j++){
                    str[i][j] = '0';
                }
            }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++)
            {
                scanf("%c",&str[i][j]);
                if(str[i][j] == '.')str[i][j] = '0';
            }
            getchar();
        }
        printf("Field #%d:\n",tc++);
       // cout << tc++ << endl;

        ///calculation of the table
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++)
            {
                //printf("%c",str[i][j]);
                if(str[i][j] == '*'){
                    if(str[i-1][j-1] != '*')str[i-1][j-1]++;
                    if(str[i-1][j] !='*')str[i-1][j]++;
                    if(str[i-1][j+1] !='*')str[i-1][j+1]++;

                    if(str[i][j-1] !='*')str[i][j-1]++;
                    if(str[i][j]!='*')str[i][j]++;
                    if(str[i][j+1]!='*')str[i][j+1]++;

                    if(str[i+1][j-1]!='*')str[i+1][j-1]++;
                    if(str[i+1][j]!='*')str[i+1][j]++;
                    if(str[i+1][j+1]!='*')str[i+1][j+1]++;

                }
            }
            //getchar();
           // printf("\n");
        }




        ///printing the table
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++)
            {
                printf("%c",str[i][j]);
            }
            //getchar();
            printf("\n");
        }






    }


return 0;
}
