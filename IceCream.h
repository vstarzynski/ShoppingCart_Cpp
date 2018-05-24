#pragma once
#include "Item.h"

namespace assignment1
{
	class Cone;
	class IceCream : public Item
	{
	public:
		IceCream(const char* name, unsigned int numScoops);
		IceCream(const IceCream& iceCream);
		unsigned int GetCost() const;
		void AddCone();
		~IceCream();
	private:
		// private variables here
		Cone* mCone;
		int scoops;
		bool hasCone;
		const int pricePerOunce = 120;
	};
}