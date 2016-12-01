    #include<bits/stdc++.h>
    using namespace std;


    int main(){
        //uri 1169

        freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);

        int a,n;
        unsigned long long int x;
        scanf("%d",&a);
        while(a-->0)
        {
            scanf("%d",&n);
            x=pow(2,n)/12000;
            printf("%lld kg\n",x);
        }


        return 0;
    }