#include<iostream>
#include<stdio.h>
using namespace std;
char a[1010],b[26];
int s,i,j,t;
void solve(){
    for(t=1;1;t++){
		gets(a);
		if(a[0]>'a')break;
		b[0]=a[0];
		s=1;
		for(i=1;'A'<=a[i];i++){
			if(a[i]>b[s-1])b[s++]=a[i];
			else
				for(j=0;j<s;j++){
					if(a[i]<=b[j]){
						b[j]=a[i];
						break;
					}
                }
        }
		cout<<"Case "<<t<<": "<<s<<endl;
	}
}
int main(){
    solve();
	
	return 0;
}