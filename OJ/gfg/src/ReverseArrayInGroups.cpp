#include <bits/stdc++.h>
using namespace std;
/*
Input
1
10 3
1 2 3 4 5 6 7 8 9 10

Output
3 2 1 5 4
 */
int main(){
//            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int t ;//=Integer.parseInt(br.readLine());
            scanf("%d",&t);
            while( t-- >  0){
//                String[] narr = br.readLine().split(" ");
                int n;//= Integer.parseInt(narr[0]);
                scanf("%d",&n);
                int g;//= Integer.parseInt(narr[1]);
                scanf("%d",&g);
               // String[] arr = br.readLine().split(" ");
                //StringBuilder sb = new StringBuilder();
                vector<int> arr;
                for(int i=0;i<n;i++) {
                    int in;
                    scanf("%d",&in);
                    arr.push_back(in);
                }


                int m = n / g;
                m = m * g; //

                int o = n - m; //
                for(int i = 1; i <= n/g; i++){
                    int mg = g*i;
                    int x = g;
                    while(x -- > 0){
//                        sb.append(arr[mg-1]+" ");
                        printf("%d ",arr[mg-1]);
                        mg--;
                    }
                }
                int i=n-1;
                while(o-- > 0){
//                    sb.append(arr[i--] +" ");
                    printf("%d ",arr[i--]);
                }
//                System.out.println(sb);
                printf("\n");

            }

    return 0;
}
