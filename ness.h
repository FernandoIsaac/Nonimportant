#ifndef NESS_H
#define NESS_H

#include"character.h"
#include<string>
#include<QLabel>
using std::string;

class Ness : public Character
{
    int HP;
    unsigned int magic;
    QLabel label;

public:
    Ness(unsigned int, string, bool, int, unsigned int, QLabel);
    Ness();
    ~Ness();
    virtual string toString()const;
    virtual int getHP()const;
    virtual unsigned int getMagic()const;
    QLabel getLabel()const;
};

#endif // NESS_H
