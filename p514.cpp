#include <cstdio>
#include <stack>
#include <iostream>
using namespace std;

void solve(){
    stack<int> station;
    int N;
    int i;
    int coach;
    int k;
    bool cont;

    

    while (1) {

        cin>>N;

        if (!N)break;
        

        while (1) {

            while (!station.empty())station.pop();
            

            for (k = i = 0; i < N; i++) {

                cin>>coach;

                if (!coach)break;
                

                while (k < N && k != coach) {
                    if (station.size() > 0 && station.top() == coach)break;
                    k++;
                    station.push(k);
                }

                if (station.top() == coach)station.pop();
                

            }

            if (!coach)break;

            (!station.size())?cout<<"Yes"<<endl:cout<<"No"<<endl;
            
        }

        cout<<endl;
    }
}


int main() {
    
    solve();
    return 0;
}