#include "Candy.h"

namespace assignment1
{
	Candy::Candy(const char* newName, float newWeight)
		: Item(newName)
	{
		weight = newWeight;
	}
	unsigned int Candy::GetCost() const
	{
		//Returns the price in Cents
		unsigned int value = (unsigned int) round(weight * pricePerlb);
		return value;
	}
}
