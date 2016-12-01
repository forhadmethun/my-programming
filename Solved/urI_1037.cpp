#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    float input;
    scanf("%f",&input);
    if(input>=0 && input <= 25.0){
        printf("Intervalo (0,25]\n");
    }
    else if(input>25.0 && input <=50){
            printf("Intervalo (25,50]\n");
    }
    else if(input>50.0 && input<=75.0){
        printf("Intervalo (50,75]\n");
    }
    else{
        printf("Intervalo (75,100]\n");
    }

    return 0;
}
