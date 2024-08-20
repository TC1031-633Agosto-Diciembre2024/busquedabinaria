//
// Created by Andrés Torres on 16/08/24.
//

#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;
class Persona {
public:
    Persona(string name);
    string getName();
    void setName(string name);
    bool operator == (const Persona& otra)const {
        return otra.name==name;
    }
    bool operator<(const Persona& otra)const {
        return name<otra.name;
    }
private:
    string name;
};


#endif //PERSONA_H
