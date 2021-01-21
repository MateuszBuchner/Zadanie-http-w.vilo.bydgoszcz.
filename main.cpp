#include <iostream>
#include<fstream>
#include<string>
using namespace std;
 
int main()
{
    string s = "1001";
    int wynik=0;
    ifstream we("dane.txt"); 
     while(getline(we,s))
     {
         if(s[0]==s[s.length()-1])wynik++;
     }
 	string str(s);

    cout<<wynik<<endl;
 
    return 0;
}

