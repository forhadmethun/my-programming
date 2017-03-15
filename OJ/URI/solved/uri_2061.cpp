#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int a,b;scanf("%d%d\n",&a,&b);
    for(int i=0;i<b;i++){
        string str;getline(cin,str);
        if(str == "fechou"){
            a+=1;
        }
        else{
            a-=1;
        }
    }
    printf("%d\n",a);

    return 0;
}