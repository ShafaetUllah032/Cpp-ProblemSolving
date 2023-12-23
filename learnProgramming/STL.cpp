#include<bits/stdc++.h>
using namespace std;


void explainPair()
{
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int,int> >b={1,{2,4}};

    cout<<b.first<<" "<<b.second.first<<" "<<b.second.second<<endl;

    pair<int,int>arr[]={{1,2},{3,4},{5,7}};

    for(int i=0;i<=2;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}


void explainVector()
{

    ///intialaization

    vector<int>v;

    v.push_back(1);
    v.emplace_back(7);
    v.push_back(11);
    v.emplace_back(19);

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(4,5);

    vector<int> vx(5,100);

    vector<int>vd(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    /// iteration

    vector<int>::iterator it =v.begin();

    it++;
    cout<< *(it)<<" ";

    it=it +2;

    cout<<*(it)<<endl;

    vector<int>::iterator it3=v.end();//out of size 

    //vector<int>::iterator it1=v.rend(); // -1 position -- is ++
    //vector<int>::iterator it2 =v.rbegin(); // positioning the last element of the vector

    cout<< v[0]<<" "<<v.at(0)<<endl;
    cout<<v.back()<<" "<<endl;


    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<endl;
    }
    for(auto it=v.begin();it != v.end();it++)
    {
        cout<<*(it)<<endl;
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    for(auto it:vec)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    ///deletion 

    





}










int main()
{
    //explainPair();
    
    explainVector();



    return 0;
}