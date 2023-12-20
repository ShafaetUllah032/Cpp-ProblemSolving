#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
bool sortrev(const pair<int,int> &a,  const pair<int,int> &b) 
{ 
  return (a.first > b.first); 
}

int main() 
{ 
  vector< pair <int,int> > v={ {1,6},{6,6},{2,5},{3,1} };
  cout<<"Vector pairs are:\n";
  for(int i=0; i<v.size(); i++)
   { cout<<v[i].first<<" "<<v[i].second<<endl;
   }
  
  sort(v.begin(), v.end(), sortrev);
  cout << "Sorting in Descending order :\n" ;
  for (int i=0; i<v.size(); i++)
   { cout<<v[i].first<<" "<<v[i].second<<endl;
   }
  return 0;
}