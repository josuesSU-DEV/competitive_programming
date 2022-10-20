#include <iostream>
#include <string.h>
using namespace std;

char g[26][26];
char p[26];
char u[26];
char cflag;
char tot;
void depthFirstSearch(int nd, int p) {
    u[nd] = 1;
    if(cflag)return;
    int i;
    tot++;
    for(i = 0; i < 26; i++) {
        if(g[nd][i] && u[i] && i != p)cflag = 1;
        if(g[nd][i] && u[i] == 0)depthFirstSearch(i, nd);
    }
}
void solve(){
    int t, i;
    char cmd[128];
    cin>>t;
    while(getchar() != '\n');
    while(t) {
        memset(g, 0, sizeof(g));
        memset(p, 0, sizeof(p));
        memset(u, 0, sizeof(u));
        while(gets(cmd) && cmd[0] != '*') {
            g[cmd[1]-'A'][cmd[3]-'A'] = 1;
            g[cmd[3]-'A'][cmd[1]-'A'] = 1;
        }
        memset(cmd, 0, sizeof(cmd));
        gets(cmd);
        for(i = 0; cmd[i]; i += 2)p[cmd[i]-'A'] = 1;
        int tree,acorn ;
        tree=acorn=0;

        
        for(i = 0; i < 26; i++) {
            if(p[i] && u[i] == 0) {
                cflag = 0, tot = 0;
                depthFirstSearch(i, -1);
                if(cflag == 0 && tot > 1)tree++;
                if(tot == 1)acorn++;
            }
        }
        cout<<"There are "<<tree<<" tree(s) and "<<acorn<<" acorn(s)."<<endl;
        t--;
    }
}
int main() {
    solve();
    return 0;
}