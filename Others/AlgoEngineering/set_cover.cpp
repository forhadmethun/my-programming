#include<bits/stdc++.h>
using namespace std;


//double minCostCollection(set<int> unv,vector< set<int> > sets,map<set<int>, double> costs,vector<set<int> >list,int pos){
//    if (unv.size() == 0)
//    {
//        double  cost = 0;
//        for (int i=0;i< list.size();i++)
//        {
//            cost = cost + costs[(list[i])];
//        }
//        return cost;
//    }
//    if(pos < 0) return INT_MAX;
//    set<int> unvCopy(unv);
//    vector<set<int> >list1(list);
//    set<int> s = sets[pos];
//    for(auto it=s.begin();it!=s.end();it++){
//        unv.erase(unv.find(*it));
//    }
//
//    double cost1 = minCostCollection(unv, sets, costs, list, pos - 1);
//    double cost2 = minCostCollection(unvCopy, sets, costs, list1, pos - 1);
//    return min(cost1, cost2);
//
//}
int main(){
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int tc;scanf("%d",&tc);
    while(tc--){
        int element_number;
        scanf("%d",&element_number);
        set<int> unv;
        for(int i=0;i<element_number;i++){
            unv.insert(i);
        }
        int subset_number;
        scanf("%d",&subset_number);
        map< set<int> , double> costs; //takes input of everything...
        vector< set<int> > v;
        for(int i=0;i<subset_number;i++){
            set<int> s;
            double cost;scanf("%lf",&cost);
            int subset_element;
            scanf("%d",&subset_element);
            for(int j=0;j<subset_element;j++){
                int in;scanf("%d",&in);
                s.insert(in);
            }
            costs[s] = cost;
            v.push_back(s);
           // cout << "--> " << cost << endl;
        }
        cout << costs.size() << endl;
        vector<set<int> >list;
    }

    return 0;
}