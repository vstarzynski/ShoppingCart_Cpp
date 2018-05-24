#include "Blizzard.h"
namespace assignment1
{
	Blizzard::Blizzard(const char* name, unsigned int scoops)
		: IceCream(name, scoops)
	{
	}
	unsigned int Blizzard::GetCost() const
	{
		return IceCream::GetCost() + 120;
	}
}