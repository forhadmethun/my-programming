    #include<bits/stdc++.h>
    using namespace std;


    int main(){
        //uri 1516

        freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
        int a,b;
        while(scanf("%d%d\n",&a,&b)==2){
            if( a == 0 && b ==0)break;
            char str[a][b];
            string temp;
            for(int i=0;i<a;i++){
                getline(cin,temp);

                for(int j=0;j<temp.size();j++){
                    str[i][j] = temp[j];
                 //   cout << str[i][j] ;
                }
                //cout << endl;

                //cout << temp << endl;
            }
            int c,d;
            cin >> c>> d;

            int length_extend = d/b,breadth_extend = c/a;
            for(int i=0;i<a;i++){
                for(int p = 0;p<breadth_extend;p++) {
                    for (int j = 0; j < b; j++) {
                        for (int x = 0; x < length_extend; x++) {

                            cout << str[i][j];
                        }
                    }
                    cout << endl;
                }
            }
            cout << endl;


        }

        return 0;
    }