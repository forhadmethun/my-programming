//
// Created by forhad on 3/22/18.
//
#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100010

char T[MAX_N], P[MAX_N];
/*
 * T  = Text
 * P  = Pattern
 */
int b[MAX_N], n, m;
/*
 * b = back table
 * n = length of T
 * m = length P
 */


int main(){
    strcpy(T,"I DO NOT LIKE SEVENTY SEV BUT SEVENTY SEVEN");
    strcpy(P, "SEVENTY SEVEN");
    n = (int)strlen(T);
    m = (int)strlen(P);

    printf("T = %s\n", T);
    printf("P = %s\n", P);
    printf("\n");

    clock_t t0 = clock();
    printf("Naive Matching \n");
//    naiveMatching();
    clock_t t1 = clock();
    printf("Runtime = %.01f s\n\n",(t1-t0)/(double)CLOCKS_PER_SEC);

    printf("KMP\n");
//    kmpPreprocess();
    //kmpSearch();
    clock_t t2 = clock();
    printf("Runtime = %.01f s\n\n",(t2-t1)/(double)CLOCKS_PER_SEC);

    printf("String Library\n");
    char *pos = strstr(T,P);
    while(pos!=NULL){
        printf("P is found at index %d in T\n",pos-T);
        pos  = strstr(pos+1, P);
    }
    clock_t t3 = clock();
    clock_t t4 = clock(); 
    // printf(//)


    printf("Runtime = %.01f s\n\n",(t3-t2)/(double)CLOCKS_PER_SEC);


    return 0;
}