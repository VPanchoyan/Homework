#include <string>

enum class Helicopter_types : char {
	Combat,
	Passenger,
	Cargo
};


class Helicopter {
public:
	Helicopter() = default;
	Helicopter(Helicopter_types t,
		const std::string& n,
		const std::string& m,
		const std::string& c,
		int w,
		int rc,
		int ms
	) : m_type {t}, m_name {n}, m_model {m}, m_country {c}, m_weight {w}, m_rotor_count {rc}, m_max_speed {ms} {}
	Helicopter(const Helicopter&);
	void SetType(Helicopter_types t);
	void SetName(const std::string& n);
	void SetModel(const std::string& m);
	void SetCountry(const std::string& c);
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
	~Helicopter() = default;
private:
	Helicopter_types m_type;
	std::string m_name;
	std::string m_model;
	std::string m_country;
	int m_weight;
	int m_rotor_count;
	int m_max_speed;
};
