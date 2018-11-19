#include <bits/stdc++.h>
using namespace std;
stack <int> v[3];
int a[10];
int main()
{
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int cnt=2;
    int iter=9;
    string s;
    while(cnt&&iter!=-1)
    {
        if(a[iter]!=0)
        {
            s+=char(a[iter]+48);
            a[iter]--;
            cnt--;
        }
        else iter--;
    }
    for(int i=0;i<10;i++)
        {
            for(int j=0;j<a[i];j++)
            {
                v[i%3].push(i);
            }
        }
    if(s.size()==2)
    {
        if((s[0]-48)+(s[1]+48)%3==0)
        {
            s+=char(v[0].top()+48);
            v[0].pop();
        }
        if((s[0]-48)+(s[1]+48)%3==1)
        {
            s+=char(v[1].top()+48);
            v[1].pop();
        }
        if((s[0]-48)+(s[1]+48)%3==2)
        {
            s+=v[2].top()+48);
            v[2].pop();
        }
        while(1)
        {
            if(v[((s[s.size()-3]-48)%3)].size())break;
            s+=(v[((s[s.size()-3]-48)%3)].top()+48);
            v[((s[s.size()-3]-48)%3)].top();
        }

    }
    cout<<s<<endl;
}
