#include <string>

enum Helicopter_types{
	combat,
	passenger,
	cargo
};


class Helicopter{
public:
	Helicopter(){};
	Helicopter(Helicopter_types t,
		std::string n,
		std::string m,
		std::string c,
		int w,
		int rc,
		int ms
	) : _type(t),_name(n),_model(m),_country(c),_weight(w),_rotor_count(rc),_max_speed(ms){}
	Helicopter(const Helicopter&);
	void SetType(Helicopter_types t);
	void SetName(std::string n);
	void SetModel(std::string m);
	void SetCountry(std::string c);
	void SetWeight(int w);
	void SetRotorCount(int rc);
	void SetMaxSpeed(int ms);
	std::string GetType() const;
	std::string GetName() const;
	std::string GetModel() const;
	std::string GetCountry() const;
	int GetWeight() const;
	int GetRotorCount() const;
	int GetMaxSpeed() const;
	~Helicopter(){};
private:
	Helicopter_types _type;
	std::string _name;
	std::string _model;
	std::string _country;
	int _weight;
	int _rotor_count;
	int _max_speed;
};