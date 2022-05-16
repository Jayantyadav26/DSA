#include <iostream>
using namespace std;
int main() {
int n;
cout<<"enter number of integer in array: "<< endl;
cin>>n;
int array[n];
cout<< "Enter integers in array: "<<endl;
for (int i=0;i<n;i++) {	
cin>> array[i];
 }
 for(int i=0;i<n-1;i++){
 	int min=i;
 	for(int j=i+1;j<n;j++){
 		if (array[j]<array[min]){              //comparing two elements of an array
 			min=j;
		 }
	 }
	 if (min !=i){
	 	int temp=array[min];           //swaping 
	 	array[min]=array[i];
	 	array[i]=temp;
	 }
 } 
 
 cout<<"sorted array: "<<endl;
 for (int i=0;i<n;i++){
 	cout<< array[i]<<" ";         //output is displayed
 }
 
 return 0;
 
 }