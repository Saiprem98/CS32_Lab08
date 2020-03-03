// CustomItem.h

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"
#include <string>
#include <map>

class CustomItem: public IceCreamItem{
public:
	CustomItem(std::string size);
	// Constructs a custom ice cream order with a size. 
	// The only sizes an IceCreamItem may have are: small, medium, and large.
    // Each size will have a base price for the order 
	// (without the addition of toppings). 
	// A small size is $3.00, a medium size is $5.00, and a large size is $6.50.
	virtual ~CustomItem();

	void addTopping(std::string topping);
// 	A method that allows you to add a topping to the custom ice cream order.
// 	Toppings are not predefined and can be identified with strings. 
// 	You may assume any topping added to a CustomItem has a weight of 1 oz. 
// 	Each oz. increases the price of the CustomItem by $0.40 cents.
// 	You may add the same topping (i.e. represented as the same string) as many times you want, 
// 	with each topping addition being 1 oz.
// 	Your implementation will need to keep track of the number of ounces
// 	 for each topping and display the correct number of ounces w
// 	 hen constructing a string in composeItem. 
	virtual std::string composeItem();
	virtual double getPrice();
private:
	std::map <std::string, int> addTop;
};
#endif