#include <iostream>
using namespace std;

int linear_search(int a[],int n,int check){
	for(int i=0;i<n;i++){
		if (check==a[i]){
			cout<<"Number is stored in array at index "<< i;
		}
		
	}
	return -1;
	
	}

int main(){
int n;
cout<< "Enter number of elements in an array:"<< endl;
cin>> n;
int a[n];
cout << "Enter elements in array: "<<endl;
for (int i=0;i<n;i++){
	
	cin>>a[i];
	}
	int check;
	cout<<"Number to be checked : ";
	cin>> check;
  linear_search(a,n,check);
  return 0;	
}