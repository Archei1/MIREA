#ifndef MIREACPPPRACTIC_OCEAN_H
#define MIREACPPPRACTIC_OCEAN_H


#include <string>

using namespace std;

class Ocean {
protected:
    string name;
    string location;
    float size;
    float depth;
public:
    Ocean();
    Ocean(string name, string location, float size, float depth);
    virtual void showInfo();
};



#endif
