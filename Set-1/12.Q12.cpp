#include<iostream>
using namespace std;

int main(){
	int row=5;
	int col=5;

for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
	        if(i==1 || i==row || j==1 || j==col){
	            cout<<"1";
	        }
	        else{
	            cout<<"0";
	        }
    }
    cout<<endl;
}
} 
