#include<iostream>
using namespace std;

int main(){
	int row=5;
	int col=5;

for(int i=1;i<=row;i++){
    if(i % 2 != 0){
        for(int j=1;j<=col;j++){
	        cout<<j;
        }
    }
	else{
	    for(int j=col;j>=1;j--){
	        cout<<j;
        }
    }
    cout<<endl;
}
} 
