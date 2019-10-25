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
	void initStart();//链栈初始化函数
	void pushHalfdata();//半字符串入栈函数
	bool judgePalindroom();//判断回文函数
};



