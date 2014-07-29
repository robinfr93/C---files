#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
	cout<<"Starting C++ programming in\n";
	for (int i = 10; i > 0; i--)
	{
		cout<<i<<'\n';
		sleep(1);
		
	}
	cout<<"Program initiated!!\n";
	sleep(1);
	cout<<"Hello Rob !!\n";
	return 0;
}