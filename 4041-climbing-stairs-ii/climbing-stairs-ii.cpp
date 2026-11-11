class Solution {
public:
    int climbStairs(int n, vector<int>& costs){
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<>>pq;
        vector<long long>dist(n + 1, 1e18);
        dist[0]=0;
        pq.push({0,0});
        while(!pq.empty()){
            auto[d,u]=pq.top();
            pq.pop();
            if(u==n)return d;
            if(d>dist[u])continue;
            for(int step=1;step<=3;++step) {
                int v=u+step;
                if(v<=n){
                    long long weight=costs[v-1]+1LL*step*step;
                    if (d+weight<dist[v]){
                        dist[v]=d+weight;
                        pq.push({dist[v],v});
                    }
                }
            }
        }
        return dist[n];
    }
};