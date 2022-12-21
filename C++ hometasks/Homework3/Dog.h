#include <string>

class Dog {
public:
	Dog() = default;
	Dog(const std::string& n,
		const std::string& b,
		int a,
		int h,
		int w
	) : m_name {n}, m_breed {b}, m_age {a}, m_height {h}, m_weight {w} {}
	Dog(const Dog& d);
	void SetName(const std::string& s);
	void SetBreed(const std::string& s);
	void SetAge(int a);
	void SetHeight(int h);
	void SetWeight(int w);
	std::string GetName() const;
	std::string GetBreed() const;
	int GetAge() const;
	int GetHeight() const;
	int GetWeight() const;
	~Dog() = default;
private:
	std::string m_name;
	std::string m_breed;
	int m_age;
	int m_height;
	int m_weight;
};
