#include <iostream>
using namespace std;

class Banana {
private:
	string color;
public:
	Banana() { color = "green"; }
	}
Banana(string fcolor) {color  = fcolor; }
	string getColor() { return ; }
void setColor(string fcolor) { color = fcolor; }
};

class Apple {
private:
	size_t weight;
	string type;
public:
	Apple() {
		weight = 0;
		type = "";
	}
	Apple(size_t fweight, string ftype) {
		weight = fweight;
		type = ftype;
	}
	size_t getWeight() { return weight; }
	string getType() { return type; }
	void setWeight(size_t fweight) { weight = fweight; }
	void setType(string ftype) { type = ftype; }
};





int main() {
	Apple a1;
	cout << a1.getType() << " " << a1.getWeight() << endl;
	a1.setType("pepin");
	a1.setWeight(100);

	return 0;
 }

