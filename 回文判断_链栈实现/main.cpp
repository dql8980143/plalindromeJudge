#include "palindroom.h"

int main()
{
	Palindroom T;
	T.initStart();
	T.pushHalfdata();
	if(T.judgePalindroom())
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	system("pause");
	return 0;
}