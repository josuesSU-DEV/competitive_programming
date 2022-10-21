#include<iostream>
using namespace std;
int reverse(int _input){ 
    int rev=0;
	while(_input)
	{ 
        rev=rev*10;
	    rev=rev+_input%10;
	    _input=_input/10;
	}

	return rev;
}
void fAux(int _input1,int _input2){ 
    int no1,no2,result;
    no1=_input1;
    no2=_input2;
    
    no1=reverse(no1);
    no2=reverse(no2);
    
    result=no1+no2;
    result=reverse(result);
    
    cout<<endl<<result<<endl;
}
int main(){
  int test;
  int i,j;
  int a[100];
  cin>>test;
  while(test){ 
    cin>>i>>j;
    fAux(i,j);
    test--;
  } 
  return 0;
}


