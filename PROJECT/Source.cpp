#include <iostream>
#include <string>
#include "def.cpp"

class Transport {
public:
	Transport() {}
	Transport(int velocity,
		int weight,
		int capacity,
		int carryingCapacity)
	{
		velocity_ = velocity;
		weight_ = weight;
		capacity_ = capacity;
		carryingCapacity_ = carryingCapacity;
	}

	void setVelocity(int velocity) {
		velocity_ = velocity;
	}
	void setVelocity(int weight) {
		weight_ = weight;
	}
	void setVelocity(int capacity) {
		capacity_ = capacity;
	}
	void setVelocity(int carryingCapacity) {
		carryingCapacity_ = carryingCapacity;
	}
	int getVelocity() const {
		return velocity_;
	}
	int getWeight() const {
		return weight_;
	}
	int getCapacity() const {
		return capacity_;
	}
	int getCarryingCapacity() const {
		return carryingCapacity_;
	}
	virtual void move() {
		std::cout << "Wou, wou, wou, we move!!!\n";
		std::cout << "Captain we are moving at a speed of " << speed << "km / h\n";
	}
private:
	int velocity_;
	int weight_;
	int capacity_;
	int carryingCapacity_;
	int speed = 0;
};

class Motor :virtual public Transport {
public:
	Motor() {}
	void setPower(int power) {
		power_ = power;
	}
	void setDimensions(int dimensions) {
		dimensions_ = dimensions;
	}
	int getPower() const {
		return power_;
	}
	int get()const {
		return dimensions_;
	}
private:
	int power_;
	int dimensions_;
	int speed = 0;
};

class ICE : public Motor {
public:
	ICE() {}
	void setCountPiston(int countPiston) {
		countPiston_ = countPiston;
	}
	void setfuel(int fuel) {
		fuel_ = fuel;
	}
	void setVolumeFuel(int volumeFuel) {
		volumeFuel_ = volumeFuel;
	}
	int getCountPiston() const {
		return countPiston_;
	}
	std::string getfuel() const {
		return fuel_;
	}
	int getvolumeFuel()const {
		return volumeFuel_;
	}
	int refuel(int CountFuel = 0) {
		return CountFuel;
	}
private:
	int countPiston_;
	std::string fuel_;
	int volumeFuel_;
	int speed = 0;
};

class Electro : public Motor {
public:
	Electro() {}
	void setCharge(int charge) {
		charge_ = charge;
	}
	int getCharge()const {
		return charge_;
	}
	int charge(int ChM, int t) {//Çàðÿä â min, âðåìÿ çàðÿäêè
		return ChM * t;
	}
private:
	int charge_;
	int speed = 0;
};

class Muscule :virtual public Transport {
public:
	Muscule() {}
	void setCaloriesSec(int caloriesSec) {
		caloriesSec_ = caloriesSec;
	}
	int getCaloriesSec()const {
		return caloriesSec_;
	}
private:
	int caloriesSec_;
	int speed = 0;
};

class Bike : public Muscule {
public:
	Bike() {}
	void setRevolutionsSec(int revolutionsSec) {
		revolutionsSec_ = revolutionsSec;
	}
	int getRevolutionsSec()const {
		return revolutionsSec_;
	}
	void spin() {
		speed++;
	}
	virtual void move() {
		std::cout << "Wou, wou, wou, we move!!!\n";
		std::cout << "Captain we are moving at a speed of " << speed << "km / h\n";
	}
private:
	int revolutionsSec_;
	int speed = 0;
};

class Scooter : public Muscule {
public:
	Scooter() {}
	void setSquare(int square) {
		square_ = square;
	}
	int getSquare()const {
		return square_;
	}
	void push() {
		speed++;
	}
	virtual void move() {
		std::cout << "Wou, wou, wou, we move!!!\n";
		std::cout << "Captain we are moving at a speed of " << speed << "km / h\n";
	}
private:
	int square_;
	int speed = 0;
};

class ElectroBike : public Electro, public Bike {
public:
	ElectroBike() {}
	void setFreeRun_(int freeRun) {
		freeRun_ = freeRun;
	}
	int getFreeRun_()const {
		return freeRun_;
	}
	void spin() {
		speed += 2;
	}
	virtual void move() {
		std::cout << "Wou, wou, wou, we move!!!\n";
		std::cout << "Captain we are moving at a speed of " << speed << "km / h\n";
	}
private:
	int freeRun_;
	int speed = 0;
};


int main()
{
	setlocale(LC_ALL, "Russian");




	return 0;
}