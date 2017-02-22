#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //cout <<collatg(3,100) << endl;
    long long a,l;
    long long i = 1;
    while(scanf("%lld %lld",&a,&l) == 2 && a!= -1 && l !=-1){
            long long sum = 0;
            long long ans = a;
    while(a <=l && a !=1)
    {

        if(a%2==0)a = a/2;
        else a = 3*a + 1;
        sum++;
       // cout << a+1 << endl;
    }
    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i++,ans,l,(a == 1)? (sum+=1) : sum);

    }

    return 0;
}
