#include "include.h"
class library
{
private:
    int x;
    string y;
    string z;
public:
    library() {
        cout << "--- Work konstructor library---" << endl;
    }
    /*
    library(int valueX, string valueY, string valueZ) {
        x = valueX;
        y = valueY;
        z = valueZ;
    }                               ------ instructor with parameters
    */
    library(const library& other) {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
        cout << "copy CONSTRUCTOR "<< endl;
    }

    ~library() {
        cout << "--- Work destructor library ---" << endl;
    }
    float GetX() {
        return x;
    }
    string GetY() {
        return y;
    }
    string GetZ() {
        return z;
    }

    void SetX(float valueX) {
        x = valueX;
    }


    void SetY(string valueY) {
        y = valueY;
    }

    void SetZ(string valueZ) {
        z = valueZ;
    }
    void toString() {
        cout << "Name - " << y << endl << "Autor - " << z << endl << "Price - " << x << endl;
    }
};

class Myclass {
private:
     float m = 18;
public:
    Myclass() {
        cout<<"constructor Myclass" << endl;
    }
    void SetM(Myclass *valueM) {
        &valueM->m;
    }
    int Get() {
        return m;
    }
    void PRINT() {
        cout<<m<<endl;
    }

    ~Myclass(){
        cout << "destructor Myclass" << endl;
    }
};
