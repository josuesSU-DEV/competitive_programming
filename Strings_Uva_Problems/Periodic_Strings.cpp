#include <iostream>

using namespace std;


string getSubtr(string str1,int begin, int last){
    string aux="";
    for(int i=begin;i<last;i++)aux+=str1[i];
    return aux;
}


int main(){

    std::ios::sync_with_stdio(false);
    int nCases;
    int k = 0;
    cin>>nCases;

    for(int i=0;i<nCases;i++){

        string input;
        cin>>input;
        if(k > 0) cout <<endl;

        for(int i = 0 ; i < input.size() ; i++){
            
            int substringSize = i + 1;
            
            if(input.size() % substringSize) continue;
            
            string substring=getSubtr(input,0,substringSize);
            
            
            int times = input.size() / substringSize;
            
            string strAux="";
            
            for(int i = 0 ; i < times ; i++){
                strAux += substring;
            }
            
            if(strAux == input){
                cout << substringSize << '\n';
                break;
            }
        
        }
        k++;

        
    }


    return 0;
}