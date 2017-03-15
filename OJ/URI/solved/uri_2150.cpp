#include<bits/stdc++.h>
using namespace std;
int main()
{

    //uri 2150
   freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
// freopen("D:\\googleDrive\\_CSE\\Code\\out.txt","w",stdout);
    string s1,s2;
    while(cin >> s1 ){
        getchar();
       getline(cin,s2);
        int len1= s1.length();
        set<char> sc;
        for(int i=0;i<len1;i++){
            sc.insert(s1[i]);
        }
        int count = 0;
        int len2 = s2.length();
        for(int i=0;i<len2;i++){
            if(sc.find(s2[i])!=sc.end()){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}