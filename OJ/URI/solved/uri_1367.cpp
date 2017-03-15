    #include<bits/stdc++.h>
    using namespace std;


    int main(){
        freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
        int tc;
        while(scanf("%d\n",&tc)==1 && tc ){
            map<char,pair<int,bool> > map1;
            for(int i=0;i<tc;i++){
                char ch; int time; string str;

                cin >> ch >> time >> str;
                if(str == "correct"){
                    if(map1.count(ch) == 1){
                        map1[ch].first +=time;
                        map1[ch].second = true;

                    }
                    else{
                        map1[ch].first = time;
                        map1[ch].second= true;
                    }
                }
                else{
                    if(map1.count(ch) == 1){
                        map1[ch].first +=20;
                        map1[ch].second = false;
                    }
                    else{
                        map1[ch].first = 20;
                        map1[ch].second = false;
                    }

                }


                //map1[ch] = pair<int,string>(time, str);

            }

            int sum = 0,count = 0;
            for( map<char,pair<int,bool> > ::iterator it = map1.begin();it!=map1.end();it++){
                if(it->second.second == true){
                    sum+=it->second.first; count++;
                }
            }
            cout <<count << " " << sum << endl;

        }

        return 0;
    }