#include<bits/stdc++.h>
using namespace std;
int BFS(int n,int m,int k) 
{
    queue<pair<int,int> > Q;
    map<pair<int,int>,int> M;
    M[{0,0}]=1;
    Q.push({0,0});
    while(Q.size())
    {
        int x=Q.front().first,y=Q.front().second,z=x+y;
        Q.pop();
        pair<int,int> Next[]={{0,y},{n,y},{x,0},{x,m},{max(0,z-m),
        min(z,m)},{min(z,n),max(0,z-n)}};
        for(auto v:Next)
        if(M[v]==0) 
        {
            M[v]=M[{x,y}]+1;
            Q.push(v);
            if(v.first==k||v.second==k) return M[v]-1;
        }
    }
    return -1;
}
int main()
{
    cout<<BFS(3,5,4);
}