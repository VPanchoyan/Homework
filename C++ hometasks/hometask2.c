#include <stdbool.h>

int current_time = 0;

struct Sun{
    int _daylight_duration;
    int _night_duration;
};

void Sun(struct Sun* s){
    s->_daylight_duration = 14;
    s->_night_duration = 12;
}

int GetDayDuration(struct Sun* s){
    return s->_daylight_duration;
}

int GetNightDuration(struct Sun* s){
    return s->_night_duration;
}

bool Shines(struct Sun* s){
    if(current_time > GetDayDuration(s)){
        return false;
    }
    return 1;
}

struct Tree{

};

bool Exudes_oxygen(struct Tree* t,struct Sun* s){
    if(Shines(s)){
        return 1;
    }
    return false;
}

struct Grass{};

struct Frog{
    int _age;
};

void Frog(struct Frog* f){
    f->_age = 0;
}

int GetAge(struct Frog* f){
    return f->_age;
}

bool Lives(struct Frog* f){
	if(GetAge(f) <= 10){
		return 1;
	}
	return false;
}

bool Eats(struct Frog* f,struct Grass* g){
	if(Lives(f)){
		return 1;
	}
	else return false;
};

bool Moves(struct Frog* f){
	if(Lives(f)){
		return 1;
	}
	return false;
};

bool Breaths(struct Frog* f,struct Tree* t,struct Sun* s){
	if(Exudes_oxygen(t,s) && Lives(f)){
		return 1;
	}
	return false;
}

bool Sleeps(struct Frog* f,struct Sun* s){ 
    if(Shines(s)){
		return 0;
	}
	return 1;
}

struct MiniWorld{
	struct Frog* frogs;
	struct Grass* grass;
	struct Tree* tree;
	struct Sun* sun;
};
