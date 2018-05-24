#pragma once
#include <string>

namespace assignment1
{
	class Item
	{
	public:
		Item(const char* itemName);
		virtual unsigned int GetCost() const = 0;
		const std::string& GetName() const;
	protected:
		virtual ~Item();
	private:
		// private variables here
		friend class ShoppingCart;
		std::string name;
	};
}