#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool is_number(char ch)
{
    if(ch >='0' && ch<='9')return true;
    else return false;
}


int convert(char ch)
{
    return ch -'0' ;

}


 string input1;
 float *input2;
 vector<int> index_name;


int main()
{
    //cout << "working  " <<endl;


    //char input1[100];

     int how_many;
     cin>>how_many;


     int max = 0;

    while(how_many--)
    {
        getchar();
        cout <<endl;

        getline(cin,input1);

        for(unsigned int i=0;i<input1.size();i++)
        {
            if(is_number(input1[i])) {
               int j=i;
               int extractor = 0;

               while(is_number(input1[j]))
                {
                    extractor = extractor*10 + convert(input1[j]);
                    j++;
                }
                if(extractor > max) max = extractor;
                index_name.push_back(extractor);
                i = j;
            }
        }


        input2 = new float[max];

        for(int i=0;i<max;i++){
            float val;
            cin >> val;
            input2[index_name[i]-1] = val;
        }

        for(int i=0;i<max;i++){
            cout << input2[i] << endl;
        }
         delete(input2);
         index_name.clear();





    }


    return 0;

}
