#include "palindroom.h"

void Palindroom::initStart()
{
	Sp=NULL;
	cout<<"���������жϵ��ַ���str:";
	cin>>str;
	length=strlen(str);
}

//���ַ�����ջ����
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

//�жϻ��ĺ���
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

