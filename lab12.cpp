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
complex complex:: adunare(complex x, complex y)
{
    complex sum;
    sum.r = x.r + y.r;
    sum.i = x.i + y.i;
    return sum;
}
complex complex::equals(complex z1,complex z2)
    {
        if((z1.r == z2.r)&&(z1.i == z2.i))
            return complex(1,1);
        else return complex();
    }

int main()
{
float x1,x2,y1,y2;
    int n;
    complex z1,z2,sum,inm,prod;

    cout<<"Re(z1)=";
    cin>>x1;
    cout<<"Im(z1)=";
    cin>>y1;
    cout<<"Re(z2)=";
    cin>>x2;
    cout<<"Im(z2)=";

    cin>>y2;

    z1 = complex(x1,y1);//Comentariu
    z2 = complex(x2,y2);
    sum = sum.adunare(z1,z2);
    cout<<"Suma:"<<sum.getReal()<<"+"<<sum.getImag()<<"i\n";

    inm = inm.inmultire(z1,z2);
    cout<<"Produsul:"<<inm.getReal()<<"+"<<inm.getImag()<<"i\n";
    
        cout<<"^ Re(z)=";
    cin>>x1;
    cout<<"^ Im(z)=";
    cin>>y1;
    z1 = complex(x1,y1);
    cout<<"^?";
    cin>>n;
    prod = prod.putere(z1,n);
    cout<<"Rezultat:\n"<<prod.getReal()<<"+"<<prod.getImag()<<"i\n";

    complex ok;
    ok = ok.equals(z1,z2);

    cout<<"fct egalitate\n";

    if(ok.getReal())
        cout<<z1.getReal()<<"+"<<z1.getImag()<<"i si "<<z2.getReal()<<"+"<<z2.getImag()<<"i sunt egale\n";
    else
        cout<<z1.getReal()<<"+"<<z1.getImag()<<"i si "<<z2.getReal()<<"+"<<z2.getImag()<<"i NU sunt egale\n";

    cout<<"Re(z)=:";
    cin>>x1;
    cout<<"Im(z)=";
    cin>>y1;
    z1 = complex(x1,y1);
    string str;
    str = z1.toString(z1);
    cout<<str;
return 0;
}
