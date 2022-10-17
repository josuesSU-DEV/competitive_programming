#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



template <class T>
class FenwickTree {

    public:
	    vector<T> tree;
	    int n;

	    FenwickTree(int n):n(n){
            tree.assign(n + 1, 0);
        }
	    void update(int i, T v) {
		    while (i <= n)
                tree[i] += v, i += (i & (-i));
	    }
        T query(int r) {
		    T s = 0;
		    while (r > 0) 
                s += tree[r], r -= (r & (-r));
		    return s;
	    }
        T query(int l, int r){
            return query(r) - query(l - 1);
        }
};

void solve(){
    int N;
    int Q;
	cin >> N >> Q;
	
	FenwickTree<long long int> fenwickObj(N);
	
    for (int i = 0; i < Q; i++) {
		char c;
        int p; 
        cin>>c;
		if (c == '+') {
			int p; 
            long long int v;
			cin>>p>>v;
			fenwickObj.update(p + 1, v);
		}
		else{
			cin >> p;
			(!p)?cout << "0\n":cout << fenwickObj.query(p) << '\n';
		}
	}
}
int main() {
    solve();
	return 0;
}