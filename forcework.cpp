#include <iostream>
using namespace std;

int find(string ans,int n)
{
    if(ans[0]>=48 && ans[0]<=57)
    {
        return 4;
    }
    if(n>7)
    {
        return 3;
    }
    if(n<5)
    {
        return 0;
    }
    return 1;
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    string ans="";
    int count=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=' ')
        {
            
            ans=ans+s1[i];
        }
        if(s1[i]==' ')
        {
            int n=ans.length();
            count =count+find(ans,n);
            ans="";
        }
        
        
    }
    count =count +find(ans,ans.length());
    string ans1="";
    int count1=0;
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]!=' ')
        {
            ans1=ans1+s2[i];
        }
        if(s2[i]==' ')
        {
            int n=ans1.length();
            count1=count1+find(ans1,n);
            s2="";
        }
    }
    count1=count1+find(ans1,ans1.length());
    float x;
    x=(count1/count) *100;
    cout<<x<<endl;
    
    return 0;
}