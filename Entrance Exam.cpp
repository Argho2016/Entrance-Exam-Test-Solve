#include <iostream>
#include<algorithm>

using namespace std;

long long int n,k,e,m;


int main() {
	int T;
	cin>>T;

	while(T--){
	    cin>>n>>k>>e>>m;
	    long long int sum_array[n-1];
	    for(int i=0; i<n-1; i++){
	        long long int sum=0;
	        for(int j=0; j<e; j++){
	            long long int temp;
	            cin>>temp;
	            sum = sum + temp;
	        }
	        sum_array[i] = sum;
	    }
	    long long int sum2=0;
	    for(int i=0; i<e-1; i++){
	        long long int temp;
	        cin>>temp;
	        sum2= sum2+temp;
	    }

	    sort(sum_array, sum_array+n-1);
	    long long int x = sum_array[n-k-1];

	    long long int result = x-sum2+1;
	    if(result>=0 && result <= m)
	    cout<<result<<endl;
	    else if(result > m)
	    cout<<"Impossible"<<endl;
	    else if(result < 0){
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
