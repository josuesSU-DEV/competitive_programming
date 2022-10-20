#include <iostream>
using namespace std;

int leftToSoldier[100000];
int rightToSoldier[100000];

int main(){
    int s, b, l, r;

    while(cin>>s>>b ){
        if(!(s || b))break;
        for(int i = 0; i < s+1; i++){
            leftToSoldier[i] = i - 1;
            rightToSoldier[i] = i + 1;
        }

        for(int i = 0; i < b; i++){
            
            cin>>l>>r;
            (leftToSoldier[l] < 1)? cout<<"*":cout<<leftToSoldier[l];

            (rightToSoldier[r] > s)? cout<<" *"<<endl:cout<<" "<<rightToSoldier[r]<<endl;

            leftToSoldier[rightToSoldier[r]] = leftToSoldier[l];
            rightToSoldier[leftToSoldier[l]] = rightToSoldier[r];
        }
        cout<<"-"<<endl;
    }

    return 0;
}