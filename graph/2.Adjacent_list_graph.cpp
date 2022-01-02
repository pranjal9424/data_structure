#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) buildtin_popcount(x)



const int N=1e5+2, MOD=1e9+7;
vi adj[N];

int main()
{
    int n,m;
    cin>> n>>m;
    
    vvi adjm(n+1, vi(n+1,0));
    
    rep(i,0,m){
        int x,y;
        cin>> x>> y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    rep(i,1,n+1){
        cout<<i<<" -> ";
        
        vector<int> :: iterator it;
        
        for(it = adj[i].begin(); it!=adj[i].end();it++)
            cout<<*it <<" ";
        
        cout<< endl;
    }
    

    return 0;
}
