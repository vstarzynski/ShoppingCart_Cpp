#pragma once
#include "Item.h"
#include <math.h>

namespace assignment1
{
	class Donut : public Item
	{
	public:
		Donut(const char* name, unsigned int count);
		unsigned int GetCost() const;
	private:
		// private variables here
		const float dozenPrice = 899;
		int amount;
	};
}