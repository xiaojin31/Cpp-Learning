
#include <iostream>

// 第一题, 逻辑没问题，格式稍微改改就好了。
int main(){

	int a[10];

	// int i, j; // c++ 98 / c99 之后，临时变量i， j可以写到for里。

	std::cout<<"Input 10 Number:"<<std::endl;

	// for (i = 0; i < 10; ++i)
	for (int i = 0; i < 10; ++i)
	{
		std::cin >> a[i];
	}

	// for (i = 0; i < 10; ++i)
	for (int i = 0; i < 10; ++i)
	{
		// for (j = 0; j < 9 - i; ++j)         // 这里应该用一个花括号
		for (int j = 0; j < 9 - i; ++j)         // 这里应该用一个花括号
        {
            if (a[j] <a[j + 1])             // 缩进有问题
            {
                int m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;               // 每行只写一条！
            }
        }
	}
	// std::cout <<"最大值:"<< a[0] <<" 次大值:"<< a[1] << std::endl;  // 以后不用中文了。
	std::cout <<"max: "<< a[0] <<" second: "<< a[1] << std::endl;  // 以后不用中文了。
	return 0;
}
