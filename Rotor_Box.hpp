#ifndef __ROTOR_BOX_HPP
#define __ROTOR_BOX_HPP

class Rotor_Box : public Encryptor {
    list<Rotor> rotors;
    Reflector reflector;
public:
    Rotor_Box();
    void setup(list<string> rotorlist);
    virtual char map(char c);
};

#endif