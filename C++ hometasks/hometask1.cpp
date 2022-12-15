int current_time = 0;

class Sun{	
public:
	Sun() : _daylight_duration(14), _night_duration(11){}
	bool Shines(){
		if(current_time > GetDayDuration()){
			return false;
		}
		return true;
	}
	int GetDayDuration() { return _daylight_duration;}
	int GetNightDuration() {return _night_duration;}
private:
	int _daylight_duration;
	int _night_duration;
};

class Tree{
	public:
	bool Exudes_oxygen(Sun& s){
		if(s.Shines()){
			return true;
		}
		return false;
	}
};

struct Grass{
	
};

class Frog{
public:
	Frog() : _age(0) {}
	int GetAge() { 
		return _age; 
	};
	bool Eats(const Grass& grass){
		if(Lives()){
			return true;
		}
		else return false;
	};
	bool Moves(){
		if(Lives()){
			return true;
		}
		return false;
	};
	bool Breaths(Tree& t,Sun& s){
		if(t.Exudes_oxygen(s) && Lives()){
			return true;
		}
		return false;
	}
	bool Sleeps(Sun& s){
		if(s.Shines()){
			return false;
		}
		return true;
	}
	bool Lives(){
		if(GetAge() <= 10){
			return true;
		}
		return false;
	}
private:
	int _age;
};


class MiniWorld{
	Frog* frogs;
	Grass* grass;
	Tree* tree;
	Sun* sun;
};

int main(){
	MiniWorld my_world;
	return 0;
}
