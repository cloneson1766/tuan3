#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so N: "; cin >> n;
    int a[n];
    cout << "Nhap N so:" << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
            count++;
        }
        }
    }
    if(count==0){
        cout << "No";
    }else{
    cout << "Yes";
    }
}
