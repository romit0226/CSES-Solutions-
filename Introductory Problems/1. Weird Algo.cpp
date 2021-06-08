#include <iostream>
#include<bits/stdc++.h>
#include<vector>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 
int main(int argc, char** argv) {
	long long int n;
	cin>>n;
cout<<n<<" ";
	while(n!=1){
		if(n%2==0){
			n=n/2;
			
			
		}
		else{
			n=3*n;
			n=n+1;
 
				
		}
		
		cout<<n<< " ";
	
		
		
		
	}
	
 
	
	return 0;
