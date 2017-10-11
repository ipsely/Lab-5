include <iostream>

using namespace std;

int sum(int a[],int n) 
{
	int sum=0;
	int i;
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	return sum;
}


int main()
{
	int arr[20],num,s;
	cout<<"enter the number of elements in array"<<endl;
    cin>>num;
    cout<<"enter value of elements of array"<<"\n";
   for(int j=0;j<num;j++)
{
cin>>arr[j];
}
s=sum(arr,num);
cout<<s;
}
