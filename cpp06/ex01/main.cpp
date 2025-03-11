#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data data;

	data.value1 = 4242;
	data.value2 = 15;
	data.value3 = 22;

	Data *ptr(&data);
	std::cout << "value 1 = " << ptr->value1 << std::endl;
	std::cout << "value 2 = " << ptr->value2 << std::endl;
	std::cout << "value 3 = " << ptr->value3 << std::endl;
	std::cout << std::endl;

	uintptr_t raw(Serializer::serialize(&data));
    Data *deserialized(Serializer::deserialize(raw));
	
	std::cout << "value 1 = " << deserialized->value1 << std::endl;
	std::cout << "value 2 = " << deserialized->value2 << std::endl;
	std::cout << "value 3 = " << deserialized->value3 << std::endl;
}
