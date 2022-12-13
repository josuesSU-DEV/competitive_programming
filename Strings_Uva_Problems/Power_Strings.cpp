#include <iostream>
#include <string>

using namespace std;

int main() {

    //std::ios::sync_with_stdio(false);

    int i;
    string s;
    
    string s1="";
    string s2="";
    
    bool areSame;
     
    while (cin>>s){
         
        
        if (s==".") break;
         
        areSame=false;
        
        
        for (i=1;i<s.size();i++){
            
            
            if (!(s.size()%i)){

                for (int j=0;j<s.size()-i;j=j+i){
                    
                    s1=s.substr(j,i);
                    
                    s2=s.substr(j+i,i);

                    
                    if (s1.compare(s2)) {
                        areSame=false;
                        break;
                    }
                    
                    areSame=true;
                }
                if(!areSame) continue;
                else break;
                
            }
        }
        cout<<s.size()/i<<endl;
         
    }
     
    return 0;
}
