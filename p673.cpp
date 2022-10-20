#include<iostream>
#include<stack>

using namespace std;
string openChars="[(";
string closeChars="])";

void solve(string _input){
    stack<char>stackToString;
    int indexChar;
    for(auto it:_input){
        if(it==openChars[0]){
            stackToString.push(it);
            indexChar=0;
        }
        else if(it==openChars[0]){
            stackToString.push(it);
            indexChar=1;
        }
        else if(it==closeChars[0]){
            



        }
        else if(it==closeChars[1]){
            



        }

    }
    (stackToString.empty())?cout<<"Yes"<<endl:cout<<"No"<<endl;
    
}
int main(){
    int n;
    string input;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>input;

        }
    }
    return 0;
}