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



struct ListNode
{
    string name;
    unordered_map<string, ListNode *> children;
    ListNode *parent;

    ListNode(const string &n, ListNode *p) : name(n), parent(p) {}
};


class FileSystem
{
private:
    ListNode *root;
    ListNode *currDict;

public:
    FileSystem()
    {
        root = new ListNode("KGS", nullptr);
        currDict = root;
    }

    void makeDirectory(const string &folder_name)
    {
        if (currDict->children.find(folder_name) != currDict->children.end())
        {
            cout << "Error: Already Exists" << endl;
        }
        else
        {
            ListNode *newFolder = new ListNode(folder_name, currDict);
            currDict->children[folder_name] = newFolder;
        }
    }

void removeDirectory(const string &subdirectory_name)
    {
        auto it = currDict->children.find(subdirectory_name);
        if (it != currDict->children.end() && it->second != nullptr)
        {
            ListNode *removedNode = it->second;
            currDict->children.erase(it);

            delete removedNode;
        }
        else
        {
            cout << "Error: No Such Directory" << endl;
        }
    }

    void changeDirectory(const string &folder_name)
    {
        if (folder_name == "..")
        {
            if (currDict->parent != nullptr)
            {
                currDict = currDict->parent;
            }
        }
        else if (currDict->children.find(folder_name) != currDict->children.end() &&
                 currDict->children[folder_name] != nullptr)
        {
            currDict = currDict->children[folder_name];
        }
        else
        {
            cout << "Error: No Such Directory" << endl;
        }
    }

    void printCurrentPath()
    {
        ListNode *temp = currDict;
        vector<string> path;

        while (temp != nullptr)
        {
            path.insert(path.begin(), temp->name);
            temp = temp->parent;
        }

        for (size_t i = 0; i < path.size(); ++i)
        {
            cout << path[i];
            if (i < path.size() - 1)
            {
                cout << "/";
            }
        }

        cout << endl;
    }

    void listDirectories()
    {
        if (currDict->children.empty())
        {
            return;
        }

        vector<string> subdirectories;

        for (const auto &entry : currDict->children)
        {
            subdirectories.push_back(entry.first);
        }

        sort(subdirectories.begin(), subdirectories.end());

        for (const string &subdirectory : subdirectories)
        {
            cout << subdirectory << endl;
        }
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    #endif
    FileSystem fs;
    ll int t = 1001;

    while (t--)
    {
        string command;
        getline(cin, command);

        istringstream iss(command);
        string cmd;
        iss >> cmd;

        if (cmd == "mkdir")
        {
            string folder_name;
            iss >> folder_name;
            fs.makeDirectory(folder_name);
        }
        else if (cmd == "cd")
        {
            string folder_name;
            iss >> folder_name;
            fs.changeDirectory(folder_name);
        }
        else if (cmd == "pwd")
        {
            fs.printCurrentPath();
        }
        else if (cmd == "ls")
        {
            fs.listDirectories();
        }
        else if (cmd == "rm")
        {
            string subdirectory_name;
            iss >> subdirectory_name;
            fs.removeDirectory(subdirectory_name);
        }
    }

    return 0;
}
