#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,sum=0;
    string name;
    map<string, int>m;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int c=0;
        cin>>c;
        if(c==1)
        {
            int s=0;
            cin>>name>>s;
            // m.insert(make_pair(name,s));
            m[name]=m[name]+s;
        }
        else if(c==2)
        {
            cin>>name;
            m.erase(name);
        }
        else if(c==3)
        {
            cin>>name;
            map<string,int>::iterator itr=m.find(name);
            if(itr==m.end())
            {
                cout<<"0"<<"\n";
            }
            else
            {
                cout<<m[name]<<"\n";
            }
        }
        
    }
    
    return 0;
}
