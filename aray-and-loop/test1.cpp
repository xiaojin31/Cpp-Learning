
#include <iostream>

// ��һ��, �߼�û���⣬��ʽ��΢�ĸľͺ��ˡ�
int main(){

	int a[10];

	// int i, j; // c++ 98 / c99 ֮����ʱ����i�� j����д��for�

	std::cout<<"Input 10 Number:"<<std::endl;

	// for (i = 0; i < 10; ++i)
	for (int i = 0; i < 10; ++i)
	{
		std::cin >> a[i];
	}

	// for (i = 0; i < 10; ++i)
	for (int i = 0; i < 10; ++i)
	{
		// for (j = 0; j < 9 - i; ++j)         // ����Ӧ����һ��������
		for (int j = 0; j < 9 - i; ++j)         // ����Ӧ����һ��������
        {
            if (a[j] <a[j + 1])             // ����������
            {
                int m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;               // ÿ��ֻдһ����
            }
        }
	}
	// std::cout <<"���ֵ:"<< a[0] <<" �δ�ֵ:"<< a[1] << std::endl;  // �Ժ��������ˡ�
	std::cout <<"max: "<< a[0] <<" second: "<< a[1] << std::endl;  // �Ժ��������ˡ�
	return 0;
}
