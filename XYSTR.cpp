#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='x')
            {
                if(s[i+1]=='y')
                {c+=1;
                ++i;}
            }
            else if(s[i]=='y')
            {
                if(s[i+1]=='x')
                {
                    c+=1;
                    ++i;
                }
            }
        }
        cout<<c<<"\n";
    }
}
