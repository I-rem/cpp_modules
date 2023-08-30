#include <iostream>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 1;
		int j = 0;
		while (argv[i])
		{
			while(argv[i][j])
			{
				argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
				j++;
			}
			i++;
		}
	}
	else
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
