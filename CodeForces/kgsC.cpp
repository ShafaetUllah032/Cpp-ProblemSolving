#include <bits/stdc++.h>
using namespace std;
long long  t[5*1000002];

  void create(vector<int>&a, int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        create(a, v*2, tl, tm);
        create(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}
int findTotal(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return findTotal(v*2, tl, tm, l, min(r, tm))
           + findTotal(v*2+1, tm+1, tr, max(l, tm+1), r);
}



int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    #endif
   
long long  n;
    cin>>n;
    vector<pair<string,long long int >>v;
 
    for(long long  i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        v.push_back({s,i});

    }
    sort(v.begin(),v.end());

    map<long long ,long long >mp;
    long long  z=0;

    for(auto x:v)
    {
        mp[x.second]=z;
        z++;
    }

    vector<int>arr(n,0);
    create(arr,1,0,n-1);
   
    long long  q;
    cin>>q;
    while(q--)
    {
        string ss;
        long long  x,y;
        cin>>ss>>x>>y;

        if(ss=="add")
        {
            int ll=findTotal(1,0,n-1,mp[x],mp[x]);
             update(1,0,n-1,mp[x],ll+y);
        }
        else if(ss=="delete")
        {
            int ll=findTotal(1,0,n-1,mp[x],mp[x]);

            int mn=min(ll,(int)y);
            // cout<<mn<<endl;
            update(1,0,n-1,mp[x],ll-mn);

           
        }
        else if(ss=="count"){
           int aa=min(mp[x],mp[y]);
            int bb=max(mp[x],mp[y]);
            int ll=findTotal(1,0,n-1,aa,bb);
            cout<<ll<<endl;

        }
    }


return 0;
} 