#include <iostream>
using namespace std;
int main(){
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"TRanspose of array is \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}