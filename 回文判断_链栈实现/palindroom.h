#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

typedef struct stackNode
{
	char ch;
	struct stackNode* next;
}*linkstack;

class Palindroom
{
private:
	linkstack Sp;
	char str[MAX];
	int length;
public:
	void initStart();//��ջ��ʼ������
	void pushHalfdata();//���ַ�����ջ����
	bool judgePalindroom();//�жϻ��ĺ���
};



