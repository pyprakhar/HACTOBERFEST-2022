#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int prod = 1;
	int maxprod = INT8_MIN;	
	for (int j = 0; j < n; j++)
	{
		prod *= arr[j];
		if(prod < 0){
			prod *= -1;
		}
		maxprod = max(maxprod,prod);		
		if(prod == 0)
		{
			prod = 1;
		}
	}	
	cout<<maxprod<<endl;	
}
