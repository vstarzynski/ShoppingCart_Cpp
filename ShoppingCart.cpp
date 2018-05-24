#include "ShoppingCart.h"
#include "Item.h"

namespace assignment1
{
	ShoppingCart::ShoppingCart()
	{
		itemCount = 0;
		for (int i = 0; i < 10; i++)
		{
			itemsArray[i] = NULL;
		}
	}

	ShoppingCart::~ShoppingCart()
	{
		for (int i = 0; i < 10; i++)
		{
			RemoveItem(i);
		}
	}

	bool ShoppingCart::AddItem(const Item* item)
	{
		if (item && itemCount < 10)
		{
			//Sreach index to add Item
			for (int i = 0; i < 10; i++)
			{
				if (itemsArray[i] == NULL)
				{
					itemsArray[i] = item;
					itemCount++;
					return true;
				}
			}
		}
		return false;

	}
	bool ShoppingCart::RemoveItem(unsigned int index)
	{
		if (index < 10 && itemsArray[index])
		{
			delete itemsArray[index];
			itemsArray[index] = NULL;
			itemCount--;
			//Reorder array
			if (index != 9)
			{
				for (int i = 0; i < 9; i++)
				{
					if (itemsArray[i] == NULL)
					{
						itemsArray[i] = itemsArray[i + 1];
						itemsArray[i + 1] = NULL;
					}
				}
				itemsArray[9] = NULL;
			}
			return true;
		}
		return false;
	}

	const Item* ShoppingCart::GetItem(unsigned int index) const
	{
		if (index < 10 && itemsArray[index])
		{
			return itemsArray[index];
		}
		return NULL;
	}
	const Item* ShoppingCart::operator[](unsigned int index) const
	{
		if (index < 10 && itemsArray[index])
		{
			return itemsArray[index];
		}
		return NULL;
	}
	float ShoppingCart::GetTotal() const
	{
		float totalPrice = 0;
		for (int i = 0; i < 10; i++)
		{
			if (itemsArray[i])
			{
				totalPrice = totalPrice + itemsArray[i]->GetCost();
			}
		}
		return round(totalPrice) / 100;
	}
}