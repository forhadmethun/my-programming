#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    map<string,string> Dictionary;
    /*
    string s;

    while(getline(cin,s)!=NULL)
    {
        string a, b,c;
        stringstream ss;
        ss << s;
        ss >> a;
        ss >> b;
        ss >> c;
        cout <<"Dictionary[\""<<a << "\"] = " << "\"" << b << " " << c << "\";" << endl;

    }
    cout << endl;
    */
    Dictionary["brasil"] = "Feliz Natal!";
Dictionary["alemanha"] = "Frohliche Weihnachten!";
Dictionary["austria"] = "Frohe Weihnacht!";
Dictionary["coreia"] = "Chuk Sung";
Dictionary["espanha"] = "Feliz Navidad!";
Dictionary["grecia"] = "Kala Christougena!";
Dictionary["estados-unidos"] = "Merry Christmas!";
Dictionary["inglaterra"] = "Merry Christmas!";
Dictionary["australia"] = "Merry Christmas!";
Dictionary["portugal"] = "Feliz Natal!";
Dictionary["suecia"] = "God Jul!";
Dictionary["turquia"] = "Mutlu Noeller";
Dictionary["argentina"] = "Feliz Navidad!";
Dictionary["chile"] = "Feliz Navidad!";
Dictionary["mexico"] = "Feliz Navidad!";
Dictionary["antardida"] = "Merry Christmas!";
Dictionary["canada"] = "Merry Christmas!";
Dictionary["irlanda"] = "Nollaig Shona";
Dictionary["belgica"] = "Zalig Kerstfeest!";
Dictionary["italia"] = "Buon Natale!";
Dictionary["libia"] = "Buon Natale!";
Dictionary["siria"] = "Milad Mubarak!";
Dictionary["marrocos"] = "Milad Mubarak!";
Dictionary["japao"] = "Merii Kurisumasu!";

  string test;
  while(getline(cin,test)!=NULL)
  {
      if(Dictionary.find(test) ==  Dictionary.end()){
        cout << "--- NOT FOUND ---" << endl;
      }
      else{
        cout <<Dictionary[test] << endl;
      }
  }





    return 0;
}
