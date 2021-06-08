#include <iostream>
#include<bits/stdc++.h>
#include<vector>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 
int main(int argc, char** argv) {
vector<long long int> v;
int n;
cin>>n;
for(int i=0;i<n-1;i++){
	int z;
	cin>>z;
	v.push_back(z);
}
int x=0;
	sort(v.begin(),v.end());
	
	for(int i=0;i<n-1;i++){
		if(v[i]!=i+1){
		
		 x=i+1;
		 break;
		}
		
	}
if(x==0){
	x=n;
}
cout<<x;	
	return 0;
}
