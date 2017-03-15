#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        long a,b,c,d;
        scanf("%ld%ld",&a,&b);

        if(b>a || (a-b)%2 !=0)
        {
            cout <<"impossible" << endl;
        }
        else
        {
            c = (a-b)/2;
            d = c+b;

            printf("%ld %ld\n",d,c);
        }



    }

    return 0;
}
