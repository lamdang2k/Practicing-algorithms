#include<bits/stdc++.h>
using namespace std;

#define forn(i, from, to) for (int i = from; i < to; i++)
#define debug(a) std::cout << #a " is value " << (a) << std::endl;
#define ull unsigned long long
#define all(x) x.begin(), x.end()

enum Color{
        White,
        Gray,
        Black
    };

//Segment Tree
class SegmentTree {
    public:
        SegmentTree(int n){
            this->n = n;
            tree.resize(4*n);
        }
        //Build SegmentTree
        void build(vector<int> &a, int x, int l, int r) {
            if (l + 1 == r) {
                tree[x] = {a[l]};
                return;
            }
            int m = (l + r) / 2;
            build(a, 2 * x + 1, l, m);
            build(a, 2 * x + 2, m, r);
            merge(all(tree[2 * x + 1]), all(tree[2 * x + 2]), back_inserter(tree[x]));
        }
        //Query SegmentTree
        int query(int cur, int l, int r, int x, int y, int lb, int ub)
        {
            if( r <= x || l >= y )
            {
                return 0; //out of range
            }
            if( x <= l && r <= y )
            {
                //Binary search over the current sorted vector to find elements in the range [lb, ub]
                return lower_bound(all(tree[cur]), ub) - lower_bound(all(tree[cur]), lb);
            }
            int mid = (l+r)/2;
            return query(2*cur+1,l,mid,x,y,lb,ub)+query(2*cur+2,mid,r,x,y,lb,ub);
        }

        int query(int lq, int rq, int lb, int ub) {
            return query(0, 0, n, lq, rq, lb, ub);
        }

    private:
        vector<vector<int>> tree;
        int n;
};

// Add edge
void addEdge(vector<vector<int>>& adj, int s, int d) {
    adj[s].push_back(d);
    adj[d].push_back(s);
}

// Print the graph
void printGraph(vector<vector<int>>& adj) {
    int size = adj.size();
    for (int d = 0; d < size; ++d) {
        cout << "\n Vertex "
        << d << ":";
        for (auto x : adj[d])
        cout << "-> " << x;
        printf("\n");
    }
}

int findUnvisited(vector<Color>& c, vector<int>& v){
    forn(i, 0, v.size()){
        int sj = v[i];
        if(c[sj] == White) return sj;
    }
    return -1;
}

//DFS function
void dfs(vector<vector<int>>& g, int s0, vector<int>& tin, vector<int>& tout){
    int nbVertices = g.size();
    stack<int> p;
    int time = 0;
    vector<Color> c(nbVertices);
    fill(c.begin(), c.end(), White);
    p.push(s0);
    c[s0] = Gray;
    tin[s0] = time;
    while (!p.empty()){
        ++time;
        int si = p.top();
        int sj = findUnvisited(c, g[si]);
        if(sj != -1){
            p.push(sj);
            c[sj] = Gray;
            tin[sj] = time;    
        } else{
            p.pop();
            c[si] = Black;
            tout[si] = time;
        }
    }
}

void solve (){
    // Enter initial values
    int n, q;
    cin >> n >> q;

    // Create a graph
    vector<vector<int>> g(n, vector<int>());
    //Build adjacency matrix
    forn (i, 0, n - 1) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        addEdge(g, u, v);
    }

    //DFS
    vector<int> tin(n);     //When vertex becomes gray
    vector<int> tout(n);    //When vertex becomes black
    dfs(g, 0, tin, tout);

    //Permutation
    vector<int> perm(n), p(n);
    forn (i, 0, n){
        cin >> perm[i];
        --perm[i];
        p[i] = tin[perm[i]];
    }
    SegmentTree st(n);
    st.build(p, 0, 0, n);

    //Queries
    while (q--){
        int l, r, x;
        cin >> l >> r >> x;
        l--; x--;
        int count = st.query(l, r, tin[x], tout[x]);
        cout << ((count > 0) ? "Yes" :"No") << "\n";
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int t;
	cin >> t;
	while (t--) {
        solve();
        cout << " \n";
    }
    return 0;
}