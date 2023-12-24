#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;


int search(vector<int>& nums, int target) {

        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int x=nums[0];
        int mid;
        if(nums[lo]<=nums[hi])
        {
            x=hi;
        }
        else{
            while(lo<=hi)
        {
            
            mid=(lo+hi)/2;
            cout<<mid<<endl;
            if(nums[mid]>nums[mid+1])
            {
                x=mid;
                break;
            }
            else if(nums[mid]>=x)
            {
                lo=mid+1;
            }
            else if(nums[mid]<x)
            {
                hi=mid-1;
            }
        }
        }
        cout<<"peak"<<x<<" "<<nums[x]<<endl;
        hi=x;
        int idx=-1;
        lo=0;
        cout<<lo<<" "<<hi<<endl;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            cout<<mid<<endl;
            if(nums[mid]==target)
            {
                idx=mid;
                break;
            }
            else if(nums[mid]>target)
            {
                hi=mid-1;
            }
            else if(nums[mid]<target)
            {
                lo=mid+1;
            }

        }
        cout<<idx<<" idx"<<endl;
        lo=x+1;
        hi=n-1;
        //cout<<lo<<" "<<hi<<endl;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;

            if(nums[mid]==target)
            {
                idx=mid;
                break;
            }
            else if(nums[mid]>target)
            {
                hi=mid-1;
            }
            else if(nums[mid]<target)
            {
                lo=mid+1;
            }

        }

        return idx;
        

    }


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x,y,a,b;
    
    vi data={3,4,5,6,7,1,2};
    t=4;

    n=search(data,t);
    cout<<n<<endl;

}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/