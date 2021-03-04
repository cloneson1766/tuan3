#include <iostream>
#include <cstdlib>
#include <ctime>
int const MAX=30;
using namespace std;

int main()
{
	int a[MAX];
	srand(time(0));
	for(int i=0;i<MAX;i++){
		a[i]=1+rand() % (100+1-1);
	}
	for(int i=0;i<MAX;i++)
	{
		for(int j=i+1;j<MAX;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<MAX;i++)
	cout << a[i] << " ";
}
