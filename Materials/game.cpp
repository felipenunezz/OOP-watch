#include <iostream>
#include <string>

class Character {
    std::string _name;
    int _health;
    int _power;
    int _armor;
 public:
    static int history_count;
    static int count;

    Character(const Character& c) : _health(c._health),
    _armor(c._armor), _power(c._power) {
        history_count++; count++;
        std::cout << "Copy constructer called\n";
    }

    Character(std::string name = "", int health = 100, int power = 10,
    int armor = 20) : _health(health), _power(power), _armor(armor) {
        if (name == "") 
            _name = "Character_" + std::to_string(history_count);
        else 
            _name = name;
        count++;
        history_count++;
    }

    int attack(Character& c) {
        return this->_power;
    }

    void save(Character& c, int damage) {
        this->_health -= damage;
        std::cout << c._name << " attack " << this->_name <<
        "!!! " << this->_name << " get " << damage <<
        " damage, left " << this->_health << "HP\n";
    }

    ~Character() {
        count--;
        std::cout <<
        "Character with name " << 
        _name << " was deleted, count of characters: " <<
        count << "\n";
    }
};

int Character::history_count = 0;
int Character::count = 0;

int main() {
    Character p1, p2("Bob", 120, 10, 30), p3("Piter");
    std::cout << p1.count << " " << Character::count << "\n";
    
    p1.save(p2, p2.attack(p1));
 
    return 0;
}