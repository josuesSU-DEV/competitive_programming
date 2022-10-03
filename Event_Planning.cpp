#include <iostream>
using namespace std;
int N;
int B;
int H;
int W;
void solve(){
    while (cin >> N >> B >> H >> W){
        int p,a;
        int min = B + 1;
        for (int i= 0; i < H; i++){
            cin >> p;
            for (int j = 0; j < W; j++){
                cin >> a;
                if (min>=p*N && N<=a)min=p*N;
            }
        }
        (min <= B)?cout << min << endl:cout << "stay home" << endl;
    }
}
int main(){  
    solve();
    return 0;
}