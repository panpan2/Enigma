#ifndef __REFLECTOR_HPP
#define __REFLECTOR_HPP

#define REFLECTOR_OFFSET 13

class Reflector : public Encryptor {
public:
    /*
     * Map input character to another one
     */
    virtual char map(char c);
};

#endif
