#include "vector"
#include "iostream"



//const ref returning, pass by reference
//CAN GO WRONG because, reference to stack memory associated with local variable 'min'
const int & getMin_RefReturn(const std::vector<int> & data){
	int min = data[0];
	for(int i = 0; i < data.size(); i++){
		if(min > data[i]){
			min = data[i];
		}
	}
	return min;

}

//value returning, pass by reference 
int getMin_ValueRet(const std::vector<int> & data){
	int min = data[0];
	for(int i = 0; i < data.size(); i++){
		if(min > data[i]){
			min = data[i];
		}
	}
	return min;

}

//pass by value 
//works but need to copy vector
int getMin_ValuePass(std::vector<int> data){
	int min = data[0];
	for(int i = 0; i < data.size(); i++){
		if(min > data[i]){
			min = data[i];
		}
	}
	return min;

}

//creates a copy of the data vector
std::vector<int> reverse(std::vector<int> data){
	std::vector<int> reversed;
	for(int i = data.size()-1;i >= 0;i--){
		reversed.push_back(data[i]);
	}
	return reversed;

}

//changes directly the original data vector from main method
void reverseInPlace(std::vector<int> &data){
	int mid = data.size()/2;
	int j = data.size()-1;
	for(int i = 0;i<=mid; i++){
		int temp = data[i];
		data[i] = data[j];
		data[j] = temp;
		j--;		
	}
}


void printVector(const std::vector<int> &data){
	for(int i = 0; i<data.size();i++){
		std::cout<<data[i]<<" ";
	}
	std::cout<<std::endl;
}

int main(){

	 // the iterator constructor can also be used to construct from arrays:
	int ints[] = {5,17,100,2,-1,45,42,1,0,-2,99};
	std::vector<int> testData (ints, ints + sizeof(ints) / sizeof(int) );

	std::cout<<"const ref returning"<<getMin_RefReturn(testData)<<std::endl;

	std::cout<<"value returning, pass by reference"<<getMin_ValueRet(testData)<<std::endl;

	std::cout<<"value returning, pass by value"<<getMin_ValuePass(testData)<<std::endl;

	std::cout<<"original data: ";
	printVector(testData);
	std::vector<int> reversedData = reverse(testData);
	reverseInPlace(testData);

	std::cout<<"reversed data: ";
	printVector(reversedData);
	std::cout<<"reversed in place data: ";
	printVector(testData);

	return 0;

}
