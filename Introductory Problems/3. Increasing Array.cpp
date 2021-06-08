#include <iostream>
#include<bits/stdc++.h>
#include<vector>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 
int main(int argc, char** argv) {
vector<long long int> v;
int n;
cin>>n;
for(int i=0;i<n;i++){
	int z;
	cin>>z;
	v.push_back(z);
}
 
long long int count=0;
for(int i=1;i<n;i++){
	if(v[i]<v[i-1]){
	
	
	while(v[i]!=v[i-1])
	{
		v[i]=v[i]+1;
		count++;
		
	}
	
}
	
	
	
}
 
cout<<count;
 
 
 
 
 
	return 0;
}
