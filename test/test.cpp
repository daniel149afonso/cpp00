#include <iostream> //input, output objects (cout)
#include <string>
//using namespace std; not allowed

int	main(void)
{
	int i = 0;
	std::string name = "Daniel";
	while (i++ <= 4)
		std::cout << name;
	return (0);
}