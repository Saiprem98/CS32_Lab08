


#include "CustomItem.h"
#include "IceCreamItem.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <map>

using namespace std;

CustomItem::CustomItem(std::string size):  IceCreamItem(size)
{

	// this->size = size;

	// this->price = getPrice(); 
}
CustomItem::~CustomItem(){
	// do we even need ??? 

}
void CustomItem::addTopping(std::string topping){

	if(this->addTop.find(topping)!=addTop.end()){
		int incr =0;
		incr = this -> addTop.find(topping) -> second;
		incr++;
		this -> addTop.find(topping) -> second = incr;
	}
	else{
		//insert 
		this -> addTop.insert(pair<string, int>(topping, 1)); 
	//this->price += 0.40;
	}
	this->price += 0.40;
}

string CustomItem::composeItem(){
	std::string print;
	print += "Custom Size: " + this->size + "\n";
	print +="Toppings:\n";
	// create iterator for toppings -> stored in map 
	map<string,int>::iterator it;
	for( it = addTop.begin();it != addTop.end(); it++){
		print += it->first +": ";
		stringstream stream;
		stream << it->second ;
		print += stream.str()+ " oz\n" ;
	}
	stringstream stream;
	stream << fixed << setprecision(2) << this->price;
	print += "Price: $" + stream.str() + "\n"; 

// "Custom Size: large\n\
// Toppings:\n\
// oreos: 1 oz\n\
// peanuts: 2 oz\n\
// Price: $7.70\n\
// -----\n\
// Total: $7.70\n";

	return print;
}
double CustomItem::getPrice(){
	//
	double total= 0;
	total += this->price; 
	return total; 
}