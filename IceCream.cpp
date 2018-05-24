#include "IceCream.h"
#include "Cone.h"

namespace assignment1
{
	Cone::~Cone()
	{
	}

	//Constructor
	IceCream::IceCream(const char* name, unsigned int numScoops)
		: Item(name)
		, mCone(NULL)
	{
		scoops = numScoops;
		hasCone = false;
	}
	//Copy Constructor
	IceCream::IceCream(const IceCream& iceCream)
		: Item(iceCream)
		, mCone(NULL)
		, scoops(iceCream.scoops)
		, hasCone(iceCream.hasCone)
	{
		if (iceCream.hasCone)
		{
			mCone = new Cone();
			memcpy(mCone, iceCream.mCone, sizeof(mCone));
		}
	}

	//Destructor
	IceCream::~IceCream()
	{
		if (hasCone)
		{
			delete mCone;
			mCone = NULL;
		}
	}
	unsigned int IceCream::GetCost() const
	{
		unsigned int totalPrice = pricePerOunce * scoops * 2;
		if (mCone)
		{
			totalPrice = totalPrice + mCone->GetCost();
		}
		return totalPrice;
	}
	void IceCream::AddCone()
	{
		if (!hasCone)
		{
			mCone = new Cone();
			hasCone = true;
		}
	}
}