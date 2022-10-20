#include <iostream>
#include <string.h>
using namespace std;
void rotate(char a[][20], char buf[][20], int n) {
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            buf[j][n-1-i] = a[i][j];
    }
}
void reflect(char a[][20], char buf[][20], int n) {
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            buf[n-1-i][j] = a[i][j];
}
void solve(){
    int n;
    int cases = 0;
    char a[20][20];
    char b[20][20];
    char c[20][20];
    char d[20][20];
    int i, j, k;
    while(cin>>n){
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        memset(d, 0, sizeof(d));
        for(i = 0; i < n; i++){
            cin>>a[i]>>b[i];
            
        }
        cases++;
        cout<<"Pattern "<< cases <<" was ";
        if(memcmp(a, b, sizeof(a)) == 0) {
            puts("preserved.");
            continue;
        }
        memcpy(c, a, sizeof(c));
        for(i = 0; i < 3; i++) {
            rotate(c, d, n);
            if(memcmp(d, b, sizeof(c)) == 0) {
                cout<<"rotated "<<90*i+90<<" degrees."<<endl;
                break;
            }
            memcpy(c, d, sizeof(c));
        }
        if(i != 3)continue;
        
        reflect(a, c, n);
        
        if(!memcmp(c, b, sizeof(c))) {
            puts("reflected vertically.");
            continue;
        }
        for(i = 0; i < 3; i++) {
            rotate(c, d, n);
            if(!memcmp(d, b, sizeof(c))) {
                cout<<"reflected vertically and rotated "<<90*i+90<<" degrees."<<endl;
                break;
            }
            memcpy(c, d, sizeof(c));
        }

        if(i != 3)continue;
        
        puts("improperly transformed.");
    }
}
int main() {
    solve();
    return 0;
}