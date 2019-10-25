#include "palindroom.h"

void Palindroom::initStart()
{
	Sp=NULL;
	cout<<"ÇëÊäÈëÐèÅÐ¶ÏµÄ×Ö·û´®str:";
	cin>>str;
	length=strlen(str);
}

//°ë×Ö·û´®ÈëÕ»º¯Êý
void Palindroom::pushHalfdata()
{
	int len=length/2;
	int i;
	stackNode* p;
	for(i=0;i<len;i++)
	{
		p=new stackNode;
		p->ch=str[i];
		p->next=Sp;
		Sp=p;
	}
}

//ÅÐ¶Ï»ØÎÄº¯Êý
bool Palindroom::judgePalindroom()
{
	int start=length/2;;
	if(length%2!=0)
	{
		start+=1;
	}
	bool key=true;
	while(Sp)
	{
		if(Sp->ch!=str[start])
		{
			key=false;
			break;
		}
		Sp=Sp->next;
		start++;
	}
	return key;
}

