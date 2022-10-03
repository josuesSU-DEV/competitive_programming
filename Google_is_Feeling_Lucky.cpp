#include<iostream>
using namespace std;
int main(){
	int t;
	
	cin>>t;
	for(int i=1;i<=t;i++){
		int evaluation[10];
		char links[10][100];
		
        
		
        int longest;
		for(int j=0;j<10;j++){
			
            cin>>links[j];
            cin>>evaluation[j];
		    longest=0;
        }
        for(int j=0;j<10;j++){
            if(evaluation[j]>longest) longest=evaluation[j];
        }
		cout<< "Case #"<<i<<endl;
        
        for(int j=0;j<10;j++){
            if(evaluation[j]==longest)cout<< links[j]<<endl;
        }
			
	}
	return 0;
}