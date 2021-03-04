#include <iostream>
#include <string>
using namespace std;

bool checkpali(int number)
{
	int digit,rev=0;
	int n=number;

	do
     {
         digit=number%10;
         rev=(rev*10)+digit;
         number=number/10;
     } while (number!=0);

	if(n==rev){
		return true;
	}else{
	return false;
	}
}

int main()
{
	int T,A,B,counts=0;
	do{
		cout << "Nhap T: ";
		cin >> T;
	}while(T<1 || T>100);

	for(int i=1;i<=T;i++){
		cout << "Nhap A va B: "; cin >> A >> B;
		for(int j=A;j<=B;j++){
			if(checkpali(j)==true){
				counts++;
			}
		}
		cout << "So cac so nguyen N la so doi xung la: " << counts <<endl;
	}

}
