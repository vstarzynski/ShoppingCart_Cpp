#include <iostream>
#include <iomanip>
#include "Item.h"
#include "Candy.h"
#include "Donut.h"
#include "IceCream.h"
#include "Blizzard.h"
#include "ShoppingCart.h"


using namespace assignment1;
int main()
{
	ShoppingCart cart;
	Item* blizzard = new Blizzard("Smarties Blizzard", 3);
	Item* candy = new Candy("Gummy Bears", 2.5f);
	Item* donut = new Donut("Canadian Maple", 4);
	IceCream* icecream = new IceCream("Vanilla", 2);
	icecream->AddCone();
	cart.AddItem(blizzard);
	cart.AddItem(candy);
	cart.AddItem(donut);
	cart.AddItem(icecream);
	std::cout << cart.GetTotal() << std::endl; // should print 18

	cart.RemoveItem(2);
	cart.RemoveItem(0);
	cart.RemoveItem(3);
	cart.RemoveItem(0);

	Item* candy2 = new Candy("Gummy Bears", 2.5f);
	cart.AddItem(candy2);
	cart.RemoveItem(0);


}