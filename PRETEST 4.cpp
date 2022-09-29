#include <iostream>
using namespace std;

int main() {
    int n,hasil=1;
	cin>>n;
	cout<<n<<"! = 1";
	for(int i=1; i<=n; i++){
		hasil*=i;
		if(i!=n){
		    cout<<" x "<<i+1;
		}
	}
	cout<<" = "<<hasil;
}
