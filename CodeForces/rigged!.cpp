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
    int x,y;
    int a,b;
    int val;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        cin>>a>>b;
        val=a;
        //cout<<t<<" "<<n<<" "<<a<<" "<<b<<endl;
        for(int j=2;j<=n;j++)
        {
            cin>>x>>y;
            if(x>=a && y>=b)
            {
                val=-1;
            }
        }

        cout<<val<<endl;

    }

}



int main(){
  imp();
  int t;
  cin>>t;
  solve(t);
  return 0;
}