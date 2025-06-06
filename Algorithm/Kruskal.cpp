#include <bits/stdc++.h>
using namespace std;

struct GP
{
    int u,v,w;
    bool operator < (const GP&a)const
    {
        return a.w < w;
    }
};

const int sz = 1e5;
int n,e,u,v,w,ans;
priority_queue <GP> PQ;
int par[sz];
int mem[sz];

int fp(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    return par[x] = fp(par[x]);
}

void KK()
{
    while (!PQ.empty())
    {
        auto [u,v,w] = PQ.top();
        int pu = fp(u),pv = fp(v);
        PQ.pop();
        if (pu != pv)
        {
            if (mem[pu] >= mem[pv])
            {
                mem[pu] += mem[pv];
                par[pv] = pu;
            }
            else
            {
                mem[pv] += mem[pu];
                par[pu] = pv;
            }
            ans += w;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        mem[i] = 1;
    }
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        PQ.push({u,v,w});
    }
    KK();
    cout << ans;
    return 0;
}