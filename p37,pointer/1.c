#include<stdio.h>
int main()
{
	(*(void (*)())0)();
	//void (*)()是一个函数指针   (void(*)())0代表将int类型的0强制转换为函数指针类型 解引用之后就是函数 
	//最后加上括号就是函数名加()
	void(*signal(int, void(*)))();
	//signal(int,void(*))是对一个函数的声明 函数名为signal
	//void(*     )()为函数指针的声明
	//所以此语句为一个函数指针
	typedef void(*pfun_t)();
	//因为函数指针的声明太复杂 所以可以使用typedef 将函数指针定义为一个简单的名字
	pfun_t signal(int, pfun_t);
	return 0;
}