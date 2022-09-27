
//Some operators checks about the relationship between two values and these operators are called relational operators. Given two numerical values your job is just to find out the relationship between them
//that is (i) First one is greater than the second (ii) First one is less than the second or (iii) First and second one is equal.
#include<iostream>

using namespace std;
void solve(string a, string b){
    
    int a_integer,b_integer;
    a_integer=stoi(a);
    b_integer=stoi(b);
    if(a_integer>b_integer)cout<<">"<<endl;
    else if(a_integer<b_integer)cout<<"<"<<endl;
    else cout<<"="<<endl;
}
int main(){
    int num_sets;
    cin>>num_sets;
    for(int i=0;i<num_sets;i++){
        string num_1,num_2;
        cin>>num_1>>num_2;
        solve(num_1,num_2);
    }
    return 0;
}