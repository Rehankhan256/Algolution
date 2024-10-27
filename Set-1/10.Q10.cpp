#include<iostream>
using namespace std;

int main(){
	int row=5;

if(row % 2 == 0){
cout<<"number of row must be odd"<<endl;
return false;
 } 
int n = row / 2;

for(int i=0;i<=n;i++){
	for(int j=0;j<n-i;j++){
		cout<<" ";
}
for(int j=0;j<2*i+1;j++){
		cout<<"*";
}
cout<<endl;
}

for(int i=n-1;i>=0;i--){
	for(int j=0;j<n-i;j++){
	cout<<" ";
}
for(int j=0;j<2*i+1;j++){
		cout<<"*";
}
cout<<endl;
}

} 
