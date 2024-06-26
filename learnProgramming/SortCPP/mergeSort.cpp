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

void mergeTheSort(vector<int> &arr,int low,int mid,int high)
{
    vector<int> temp;

    int x=low;
    int y=mid+1;
    while(x<=mid && y<=high)
    {
        if(arr[x]<arr[y])
        {
            temp.pb(arr[x]);
            x++;
        }
        else 
        {
            temp.pb(arr[y]);
            y++;
        }
    }
    while(y<=high)
        {
            temp.pb(arr[y]);
            y++;
        }
    
    while(x<=mid)
        {
            temp.pb(arr[x]);
            x++;
        }
    for(int i=low;i<= high;i++)
    {
        arr[i]=temp[i-low];
    }
}



void divideToMerge(vector<int> &arr,int low , int high)
{
    if(low>=high)
    {
        return ;
    }
    int mid=(low+high)/2;
    divideToMerge(arr, low,mid);
    divideToMerge(arr, mid+1,high);
    mergeTheSort(arr, low, mid,high);

}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    divideToMerge(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/