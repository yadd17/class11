#include <iostream>
#include <string>
#include <queue>

int main()
{
	int a;
	std::cin >> a;
	std::cout << a << std::endl;
	std::string b = "hello";
	std::cout << b << std::endl;	
	std::string c = ",world!";
	std::cout << c << std::endl;
	std::string d = b + c;
	std::cout << d << std::endl;
	
	std::queue<std::string> myq;
	myq.push("no game ");
	myq.push("- no life");
	std::cout<< myq.size() << "\n";
	while (myq.size() != 0)
	{
		std::cout<<myq.front();
		myq.pop();
	}
	std::cout<<std::endl;
}

