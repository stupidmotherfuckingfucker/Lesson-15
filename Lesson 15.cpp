
#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		if (i % 2 == 0) //Проверка на четность 
		{
			std::cout << i << " ";  
		}
		else
			std::cout << i << " "; 
	}
}
