#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    float input;
    int i = 0;
    float sum = 0;

    while(scanf("%f",&input)!=EOF){
        if(input>=0.0 &&  input<=10.0){
            i++;
            sum += input;
            if(i==2){
                printf("media = %.2f\n",sum/2);
                i = 0;
                sum = 0;
                int n;
                while(true)
                {
                    scanf("%d",&n);
                    cout <<"novo calculo (1-sim 2-nao)"<<endl;
                    /*
                    if(n<1 || n>2){
                        cout <<"novo calculo (1-sim 2-nao)"<<endl;
                    }
                    */
                    if(n==2)return 0;
                    else if(n==1)break;
                }

            }


        }
        else{
            cout << "nota invalida" << endl;
        }


    }



}
