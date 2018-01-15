#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//////////////JIANU//////////
class complex
{
    float r;
    float i; 
public:
    float getReal()
    {
        return r;
    }
    float getImag()
    {
        return i;
    }
    complex(float re, float im)
    {
        r = re;
        i = im;
    }
    complex ()
    {
        r = 0;
        i = 0;
    }
    complex adunare(complex x,complex y);
    complex inmultire(complex x,complex y)
    {
        complex inm;
        inm.r = x.r*y.r - x.i*y.i;
        inm.i = x.r*y.i + y.r*x.i;
        return inm;
    }
    complex putere(complex z,int n)
    {
        complex rezultat;
        rezultat = z;
        for(int i = 1; i < n; i++)
            rezultat = inmultire(rezultat,z);
        return rezultat;
    }
    complex equals(complex z1,complex z2);
    string toString(complex z)
    {
        string str;
        std::ostringstream re,im;

        str = "Numarul complex este de forma: Re(z) = ";
        re << z.r;
        str += re.str();
        str += " Im(z) = ";

        im << z.i;
        str += im.str();
        str += "\n";
        return str;
    }

};
//////////////JIANU/////////

int main()
{

return 0;
}
