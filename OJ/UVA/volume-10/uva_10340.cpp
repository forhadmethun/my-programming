#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%d\n",&tc);
    double total;
    while(tc--)
    {
        int payChit[256];
        total = 0;

        for (int i = 0; i < 256; i++) {
			payChit[i] = 0;
		}

        //for(int i=0;i<10;i++)cout << payChit[i] << endl;
        int k;scanf("%d\n",&k);
        for(int i=0;i<k;i++)
        {

            int p;unsigned char c;
            scanf("%c %d\n",&c,&p);
           // cout << c << ":" << p << endl;
            payChit[(int)c] = p;

        }
        for (int i = 0; i < 256; i++) {
			//printf("%c ",i);cout  <<  payChit[i] << endl;
		}
        int m;
        scanf("%d\n",&m);
        for(int i=0;i<m;i++)
        {
            unsigned char c;
            while((c=cin.get())!='\n')
            {


                total+=payChit[(int)c];
               // cout << total << endl;
               // cout << c ;
            }
        }
       // printf("%.2lf\n",total);
       //cout << total << endl;
        cout << setprecision(2) << fixed<<total/100 << "$" << endl;

        //printf("%0.2lf$\n", (double)(total)/ 100.0);
    }

    return 0;
}
