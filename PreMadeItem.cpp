
#include "PreMadeItem.h"
#include "IceCreamItem.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

PreMadeItem::PreMadeItem(std::string name, std::string size): IceCreamItem(size){
	this->name = name;
	double incrPrice = 1.00;
	this->price += incrPrice;

}
PreMadeItem::~PreMadeItem(){
	// delete ?
}
double PreMadeItem::getPrice(){
	return this->price;
}
string PreMadeItem::composeItem(){
// "Pre-made Size: medium\n\
// Pre-made Item: Banana Slamma\n\
// Price: $6.00\n\
// -----\n\
// Total: $6.00\n";
	string add;
	add = "Pre-made Size: " + this->size + "\n";
	add += "Pre-made Item: " + this->name + "\n";
	stringstream stream;
	stream << fixed << setprecision(2) << this->price;
	add += "Price: $" + stream.str() + "\n"; 
	return add; 
}



