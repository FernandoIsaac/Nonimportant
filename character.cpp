#include "character.h"
#include <string>
#include <iostream>
#include <sstream>
#include <QApplication>
#include <QLabel>

using std::string;
using std::istream;
using std::ostream;
using std::stringstream;

Character::Character(unsigned int ataque, string name, bool vivo):ataque(ataque), name(name), vivo(vivo)
{

}

Character::~Character()
{

}

/*Character::Character(const Character& character):ataque(character.ataque), label(character.label), name(character.name), vivo(character.vivo){

}*/

string Character::toString()const{
    stringstream ss;
    ss<<"Name: "<<name<<" , Ataque: "<<ataque;
    return ss.str();
}

unsigned int Character::getAtaque()const{
    return ataque;
}

string Character::getName()const{
    return name;
}

bool Character::isVivo()const{
    return vivo;
}
