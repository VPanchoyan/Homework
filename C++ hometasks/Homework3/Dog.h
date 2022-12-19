#include <string>

class Dog{
public:
	Dog(){}
	Dog(std::string n,
		std::string b,
		int a,
		int h,
		int w
	) : _name(n), _breed(b), _age(a),_height(h),_weight(w) {}
	Dog(const Dog& d);
	void SetName(std::string s);
	void SetBreed(std::string s);
	void SetAge(int a);
	void SetHeight(int h);
	void SetWeight(int w);
	std::string GetName() const;
	std::string GetBreed() const;
	int GetAge() const;
	int GetHeight() const;
	int GetWeight() const;
	~Dog(){}
private:
	std::string _name;
	std::string _breed;
	int _age;
	int _height;
	int _weight;
};
