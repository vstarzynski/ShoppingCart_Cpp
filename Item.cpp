#include "Item.h"

namespace assignment1
{
	Item::Item(const char* itemName)
	{
		name = itemName;
	}
	Item::~Item()
	{
	}
	const std::string& Item::GetName() const
	{
		return name;
	}
}