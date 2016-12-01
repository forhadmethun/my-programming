

int main()
{

    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    //1871
    int a,b;
    while(scanf("%d%d\n",&a,&b)==2){
        if( a== 0 && b == 0)break;
        int c = a+b;
        string s = to_string(c);
        for(int i=0;i<s.length();i++){
            if(s[i] != '0'){
                cout << s[i] ;
            }
        }
        cout << endl;
    }
    return 0;
}
