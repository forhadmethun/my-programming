#include<bits/stdc++.h>
using namespace std;


int main(){
    //freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
    int word,line,character;
    while(scanf("%d%d%d\n",&word,&line,&character) == 3){
        vector<string> vs;
        for(int i=0;i<word;i++){
            string str;
            cin >> str;
            vs.push_back(str);
        }
        int character_count =0 ;
        int total_line = 1;
        //string test = "";
        for(int i=0;i<vs.size();i++){

            int len = vs[i].size();
            if(i == 0){
                character_count += len;
            }
            else {
                character_count += len + 1;


            }
            //cout << "charact-er count : " << character_count << endl;
            if(character_count>character){

                character_count = 0;
                character_count+=len;
                total_line++;
                //cout << "fuck e dhuksee " << character_count << endl;
            }

        }
        double tl= (double)total_line, l= (double) line;
        tl = tl/l;
        cout << ceil(tl) <<endl;
        //cout << total_line << endl;
        //cout << ceil((double)(total_line/line)) << endl;



    }

    return 0;
}