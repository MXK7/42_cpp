#pragma once

#include <stdint.h>

typedef struct	SData
{
	int	value1;
	int	value2;
	int	value3;
}				Data;

class Serializer
{
	private :
		Serializer();
		Serializer(Serializer const &other);

		Serializer &operator=(Serializer const &other);

	public :
		~Serializer();

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};
