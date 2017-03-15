#include<bits/stdc++.h>
using namespace std;
int a[100005][100005];
int main()

{
    //## it is hash... ## it is two hashss...
   // freopen("in.txt","r",stdin);
    int m,i,j,k=1,l,t;
   while(cin >> m>>t){
    if(m== 0 && t== 0)break;
     //   memset(a, 0, sizeof(a[0][0]) * m * m);
   // int a[m+1][m+1];
   // for(i=0;i<m;i++)for(j=0;j<m;j++)a[i][j]=k++;
    /*
    for(i=0;i<m;i++){
    for(j=0;j<m;j++)cout<< a[i][j];
    cout<<endl;
    }
    */

    int n = m,p=m;
    int x  = m*m;
    k=0;l=0;
    while(k<m && l< n)
    {

    for(i=k;i<m;i++)a[i][n-1]=x--;
    n--;
    //cout<<endl;

    if(k<m)
    {
    for(i=n-1;i>=l;i--)
    {
         a[m-1][i]=x--;
    }
    m--;
            //cout<<endl;
    }
    if(k<m){
    for(i= m-1;i>=k;i--){
     a[i][l]=x--;


    }l++;
    //cout <<endl;
    }
    for(i=l;i<n;i++)
    {
     a[k][i]=x--;
    }
    k++;
    //cout<<endl;
    }
    k=0;l=0;m=p;n=p;
    /*
     while(k<m && l< n)
    {

    for(i=k;i<m;i++)cout<<a[i][n-1]<< " ";
    n--;
    cout<<endl;

    if(k<m)
    {
    for(i=n-1;i>=l;i--)
    {
        cout << a[m-1][i]<<" ";
    }
    m--;
            cout<<endl;
    }
    if(k<m){
    for(i= m-1;i>=k;i--){
    cout<< a[i][l]<"  ";


    }l++;
    cout <<endl;
    }
    for(i=l;i<n;i++)
    {
    cout<< a[k][i]<< " ";
    }
    k++;
    cout<<endl;
    }
    */
    m= p;
    for(i=0;i<m;i++)for(j=0;j<m;j++)
     if(a[i][j]==t){
     cout << "Line = " << p- i << ", column = " << j+1<<"."<<endl;
    break;
     }




}
    return 0;
}
