#ifndef CHARACTER_H
#define CHARACTER_H

#include<string>
#include<iostream>
#include<qpaintdevice.h>
#include<QLabel>
using std::string;
using std::istream;
using std::ostream;

class Character
{
    unsigned int ataque;
    QLabel label;
    string name;
    bool vivo;
protected:
    unsigned int getAtaque()const;
public:
    Character(unsigned int, string, bool);
    Character();
    ~Character();
    virtual string toString()const;
    virtual int getHP()const = 0;
    virtual unsigned int getMagic()const=0;
    QLabel getLabel()const;
    string getName()const;
    bool isVivo()const;
};

#endif // CHARACTER_H
