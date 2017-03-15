
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int B;
	int J;
}Task;

int N,caseCnt = 1;
Task data[10001];

int comp(const void *pa, const void *pb){
	Task *a=(Task*)pa, *b=(Task*)pb;
	return (b->J)-(a->J);
}

int main()
{
    //freopen("in.txt","r",stdin);
	int i,prefixB,endTime;
	while( EOF!=scanf("%d",&N) && N ){

		for(i=0;i<N;i++) scanf("%d %d",&data[i].B,&data[i].J);

		qsort(data, N, sizeof(Task), comp);

		for(i=0, prefixB=0, endTime=0;i<N;i++){
			prefixB += data[i].B;
			if(prefixB + data[i].J > endTime) endTime = prefixB + data[i].J;
		}

		printf("Case %d: %d\n",caseCnt++,endTime);
	}
	return 0;
}
