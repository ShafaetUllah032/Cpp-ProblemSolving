#include<bits/stdc++.h>
using namespace std;



void imp(){

  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
}




int  solve(int t)
{
    int n;
    vector<int>a,b;
    int x=INT_MAX,y=INT_MAX;
    int d;
    long long int sum=0,sum1=0;;
    for(int __=1;__<=t;__++)
    {
        cin>>n;
        sum=0,sum1=0;
        x=INT_MAX,y=INT_MAX;
        a.clear();
        b.clear();
        for(int i=1;i<=n;i++)
        {
            cin>>d;
            x=min(d,x);
            a.push_back(d);
        }
        for(int i=1;i<=n;i++)
        {
            cin>>d;
            y=min(d,y);
            b.push_back(d);
        }
        //cout<<" MIN "<<min(x,y)<<endl;
            for(int i=0;i<n;i++)
            {
                //cout<<b[i]<<" "<<x<<endl;
                sum += (x+b[i]);
            }
            for(int i=0;i<n;i++)
            {
                sum1 += (y+a[i]);
            }
        

        cout<<min(sum,sum1)<<endl;
    }
}



int main(){
  imp();
  int t;
  cin>>t;
  solve(t);
  return 0;
}