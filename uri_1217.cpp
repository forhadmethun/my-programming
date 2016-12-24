using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
//    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int tc;
    scanf("%d\n",&tc);
    float weight = 0;
    float amount= 0;
    int day = 1;
    int sum = 0;
    while(tc--){
        float f;
        scanf("%f\n",&f);
        amount+=f;
        string s,temp ;getline(cin,s);
        stringstream ss(s);
        int count = 0;
        while(ss >> temp){
            count++;
        }
        weight+=count;
        sum+=  count;
        printf("day %d: %d kg\n",day++,count);

    }
    day--;
    printf("%0.2f kg by day\n",(float)sum/(float)day);
    printf("R$ %0.2f by day\n", amount/(float)day);


    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1217
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
