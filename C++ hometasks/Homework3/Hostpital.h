#include <string>

enum class Hospital_types : char {
	Military,
	Civil,
	Children,
	Maternity
};

class Hospital {
public:
	Hospital() = default;
	Hospital(const std::string& n,
		const std::string& addr,
		Hospital_types t,
		int sc,
		int fb,
	) m_name{n}, m_address{addr}, m_type{t}, m_staff_count{sc}, m_patients{0}, m_free_beds{b} {}
	Hospital(const Hospital&);
	void SetName(const std::string& name);
	void SetAddress(const std::string& addr);
	void SetType(Hospital_types t);
	void SetStaffCount(int sc);
	void SetPatientsCount(int pc);
	std::string GetName() const;
	std::string GetAddress() const;
	Hospital_types GetType() const;
	int GetStaffCount() const;
	int GetPatientsCount() const;
	int GetFreeBeds() const;
	~Hospital() = default;
private:
	std::string m_name;
	std::string m_address;
	Hospital_types m_type;
	int m_staff_count;
	int m_patients;
	int m_free_beds;
};
