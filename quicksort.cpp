#include <iostream>
using namespace std;

//void swap(int arr[],int i,int j ){
//	int temp=arr[i];
//	arr[i]=arr[j];
//	arr[j]=temp;
//}

int partition(int arr[],int l,int r){
	int pivot=arr[r];
	int i=l;
	for(int j=l;j<r;j++){
		if(arr[j]<pivot){
			int temp = arr[j];
			arr[j]= arr[i];
			arr[i]= temp;
			i++;
			
		}
	}
	int  temp= arr[r];
	arr[l]=arr[i];
	arr[i]=temp;
	return i;
}

void  quicksort(int arr[], int l, int r){
	if(l<r){
		int pi= partition(arr,l,r);
		quicksort(arr,l,(pi-1));
		quicksort(arr,(pi+1),r) ;
	}
	

}

int main(){
cout<<"enter number of element in array:"<<endl;
int n;
cin>> n;
cout<<"Enter elements in array:"<<endl;
int arr[n];
for (int i;i<n;i++){
	cin>> arr[i];
}	
quicksort(arr,0,n-1);
cout<<"sorted array: "<<endl; 
	for(int i=0;i<n;i++){
	
	cout<<arr<<" ";
}

return 0;	
	
}