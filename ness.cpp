#include "character.h"
#include "ness.h"
#include <string>
#include <sstream>
#include <QLabel>
using std::string;
using std::stringstream;

Ness::Ness(unsigned int ataque, string name, bool vivo, int HP, unsigned int magic)
    :Character(ataque, name, vivo), HP(HP), magic(magic), label(label)
{

}

int Ness::getHP()const{

}

Ness::~Ness()
{

}

