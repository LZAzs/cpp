#include<iostream>
int djg=0;
int main()
{
	for (int i = 1; i <= 100; i++) 
	{
		if (i % 2 == 0 && djg % 5 != 0) 
		{
			std::cout << i << " ";
			djg++;
		}
		else if(i % 2 == 0 && djg % 5 == 0) 
		{
			if (djg == 0) 
			{
				std::cout << i << " ";
			}
			else 
			{
				std::cout <<"\n";
				std::cout << i << " ";
			}
			djg++;
		}
		
	}
	return 0;
}
