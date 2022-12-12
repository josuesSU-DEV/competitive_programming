#include <iostream>

using namespace std;

#define lengthSet 10
string getSubtr(string str1,int begin, int last){
    string aux="";
    for(int i=begin;i<last;i++)aux+=str1[i];
    return aux;
}

int main() {
    std::ios::sync_with_stdio(false);
    string arrayCodes[lengthSet];
    int n;
    int Case = 1;
    while (cin >> arrayCodes[0]) {
        

        n = 0;
        do{
            n++;
            cin >> arrayCodes[n];
            
        }
        while (arrayCodes[n][0]!='9');
        
        bool isDecodability = 1;
        
        for (int i=0; i<n ; i++){
            
            if(!isDecodability)break;
            
            for (int j=i+1; j<n ; j++) {
                string subString;
                if(!isDecodability)break;
                
                subString=getSubtr(arrayCodes[i],0,arrayCodes[j].size());
                
                if (subString==arrayCodes[j]) isDecodability = 0;
                
                subString=getSubtr(arrayCodes[j],0,arrayCodes[i].size());
                if (subString==arrayCodes[i]) isDecodability = 0;
            
            }
        
        }
        (isDecodability)?cout<<"Set "<<Case<<" is immediately decodable"<<endl :cout<<"Set "<<Case<<" is not immediately decodable"<<endl;
        Case++;
    }
    return 0;
}