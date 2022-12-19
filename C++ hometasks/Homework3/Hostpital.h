#include <string>

enum Hospital_types{
	military,
	civil,
	children,
	maternity
};

class Hospital{
public:
	Hospital(){}
	Hospital( std::string n,
		std::string addr,
		Hospital_types t,
		int sc,
		int fb,
	) _name(n), _address(addr), _type(t), _staff_count(sc), _patients(0), _free_beds(b){}
	Hospital(const Hospital&);
	void SetName(std::string name);
	void SetAddress(std::string addr);
	void SetType(Hospital_types t);
	void SetStaffCount(int sc);
	void SetPatientsCount(int pc);
	std::string GetName() const;
	std::string GetAddress() const;
	Hospital_types GetType() const;
	int GetStaffCount() const;
	int GetPatientsCount() const;
	int GetFreeBeds() const;
	~Hospital(){}
private:
	std::string _name;
	std::string _address;
	Hospital_types _type;
	int _staff_count;
	int _patients;
	int _free_beds;
};