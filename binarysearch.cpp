#include<iostream>
using namespace std;
int main()
{
	int low=0,high=0,size,mid,target;
	
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the element of the array :"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	high=size-1;
	cout<<"entert the search of the element "<<endl;
	cin>>target;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the target is at mid
        if (arr[mid] ==target) {
           cout << "Element " << target << " found at index: " << mid << endl;// Target found
        }
        else if (arr[ mid]<target)
        {
        	low=mid+1;
		}
		else
		{
			high=mid-1;
		}
return 0;
      
}
}