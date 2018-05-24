#include "Donut.h"
namespace assignment1
{
	Donut::Donut(const char* newName, unsigned int newCount)
		: Item(newName)
	{
		amount = newCount;
	}
	unsigned int Donut::GetCost() const
	{
		float unitPrice = dozenPrice / 12;
		//Return the price in Cents
		return (unsigned int) round(amount * unitPrice);
	}
}