#include <iostream>
using namespace std;
int main() {int n;

cout<< "enter number of integers in array: "<<endl;
cin>> n;
int array[n];
cout<<"enter integers in array: "<<endl;
for(int i=0;i<n;i++){
cin>> array[i];    
}

for(int j=1;j<n;j++){     //insertion sort
	int value;
	int index;
	value = array[j];
	index= j;
while(index>0 && array[index-1]>value)
{
	array[index]=array[index-1];   //swapping of elements
	index= index-1;

} 
array[index]=value;
}
cout<< "sorted array:" << endl;
for (int i=0;i<n;i++){

cout<< array[i]<<" ";
}cout<<endl;
	

return 0;
}