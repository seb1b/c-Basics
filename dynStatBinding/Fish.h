#ifndef FISH_H
#define FISH_H

#include "iostream"


class Fish{
	public:
		Fish(){}
		Fish(std::string name, int speed):name_(name),speed_(speed){}
		void print(){
			std::cout<<name_ <<" the fish swims " << speed_<< " per hour."<<std::endl;
		}


	private:
		std::string name_;
		int speed_;




};



#endif
