//IceCreamItem.cpp

#include "IceCreamItem.h"

#include <string>
#include <iostream>

IceCreamItem::IceCreamItem(std::string size){
	this->size = size;
	this->price = 0; 

	if (size == "small"){
		this->price += 3.00;
	}
	else if( size == "medium"){
		this->price += 5.00;
	}
	else if( size == "large"){
		this->price += 6.50;
	}
	// check if no size is thrown what to do 
}	