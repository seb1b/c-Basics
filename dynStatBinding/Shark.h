#ifndef SHARK_H
#define SHARK_H

#include "iostream"
#include "Fish.h"

class Shark: public Fish{
	public:
		Shark(std::string name, int speed):name_(name),speed_(speed){}
		void print(){
			std::cout<<name_ <<" the shark swims " << speed_<< " per hour."<<std::endl;
		}


	private:
		std::string name_;
		int speed_;

};


#endif