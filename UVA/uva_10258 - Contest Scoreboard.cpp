#include<bits/stdc++.h>
using namespace std;
struct t
{

    int tN;
    int pN;
    int t;
    char s = 'N';
    bool hoise = false;
    int timeCount = 0;

};

struct p{
    int team;
    int solved;
    int time;

};

bool cmp(p a,p b)
{
    if(a.solved != b.solved) return a.solved > b.solved;
    else if(a.time != b.time) return a.time < b.time;
    else
    return a.team <b.team;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    getchar();
    getchar();
    while(tc--)
    {
        char str[50];
        map< pair<int,int>, t > mpt;
        set<int> si;
        while(gets(str))
        {
            if(strlen(str) == 0)break;
            int a,b,c;
            char d;
            // cout << str << endl;
            sscanf(str,"%d %d %d %c",&a,&b,&c,&d);

            si.insert(a);

            pair<int,int> ii(a,b);
            //pair<int , char>ic(c,d);
            if(mpt.find(ii)!=mpt.end())
            {
               // cout << mpt[ii].s << " founded --------------" << mpt[ii].timeCount  << endl;

                // cout << "dhuksii " << endl;
                if(d=='I' && !mpt[ii].hoise)
                {

                    mpt[ii].timeCount += 20;

                }
                else if(d == 'C')
                {
                   // cout << "khechii" <<endl;
                    if(mpt[ii].hoise == true)
                    {
                        continue;

                    }
                    else
                    {
                      //  cout << "khechiicccccccccccccccc" <<endl;

                        mpt[ii].timeCount += c;
                        mpt[ii].hoise = true;
                    }

                }

            }

            else
            {

                // cout << "dhuksi : "<<  a << ":" << b  << endl;
                t team;


                if(d == 'I')
                {
                    c = 20;

                }
                else if (d == 'C')
                {
                    team.hoise = true;
                    c = c;

                }
                else
                {
                    c = 0;
                    team.hoise = false;
                }



                team.tN = a;
                team.pN = b;
                team.t = c;
                team.s = d;
                team.timeCount = c;


                mpt[ii] = team;
                //cout << "\t\t\t temp " <<endl;


            }







        }
        map<int, pair<int,int> > mp;
        for(set<int>::iterator is=si.begin(); is!=si.end(); is++)
        {
            int solved = 0;
            int race = 0;
            for(map<pair<int,int>, t>::iterator it=mpt.begin(); it!=mpt.end(); it++)
            {
                //cout << (*it).tN <<  " : " << (*it).pN << endl;
                if(*is == (int)(*it).second.tN  && (bool)(*it).second.hoise)
                {
                  //  cout << (int)(*it).second.tN << ": " << (int)(*it).second.pN  << " : " << (int)(*it).second.timeCount  << endl;
                    solved++;
                    race += (int)(*it).second.timeCount ;

                }

            }
            //cout << "\t\t\t\\t : "  << race << endl;
            pair<int,int> pii(solved,race);
            mp[*is] = pii;
        }

        vector<p> ans;
        for(map<int, pair<int,int> >::iterator it=mp.begin(); it!=mp.end(); it++)
        {

           // cout << (int)(*it).first << " " <<  (int)(*it).second.first << " " <<  (int)(*it).second.second << endl;
           p a;
           a.team = (int)(*it).first ;
           a.solved = (int)(*it).second.first;
           a.time = (int)(*it).second.second;
           ans.push_back(a);
        }
        sort(ans.begin(),ans.end(),cmp);
        for(int i=0;i<ans.size();i++)
        {
            cout << ans[i].team << " " << ans[i].solved << " " << ans[i].time << endl;

        }
        if(tc)cout << endl;

    }


    return 0;
}
