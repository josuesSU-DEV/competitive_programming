#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int X;
    vector<int> values;
    while (cin >> X){
        values.push_back(X);
        
        nth_element(values.begin(),values.begin() + values.size() / 2, values.end());

        
        int aux1,aux2;
        aux2=aux1= *(values.begin() + values.size() / 2);
        
        if (!values.size() % 2){
            nth_element(values.begin(),values.begin() + values.size() / 2 - 1,values.end());
            aux2=*(values.begin()+values.size()/2 - 1);
        }
        
        cout << (aux1 + aux2) / 2 << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}