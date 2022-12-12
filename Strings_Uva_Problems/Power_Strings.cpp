#include <iostream>


using namespace std;
string getSubtr(string str1,int begin, int last){
    string aux="";
    for(int i=begin;i<last;i++)aux+=str1[i];
    return aux;
}
 
int main() {

    std::ios::sync_with_stdio(false);

    int i;
    string s;
    
    string s1="";
    string s2="";
    
    bool areSame;
     
    while (cin>>s){
         
        
         
        if (s==".") break;
         
        areSame=false;
        
        
        //tamanios de las posibles "a"
        
        for (i=1;i<s.size();i++){
            
            //si el tamanio no es multiplo del tamanio de "a"
            //no hay razon para probar 
            if (!s.size()%i){

                for (int j=0;j<s.size()-i;j=j+i){
                    
                    s1=getSubtr(s,j,i);
                    
                    s2=getSubtr(s,j+i,i);
                    
                    
                    if (s1!=s2) {
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