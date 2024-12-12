#include <iostream>

using namespace std;

class kasr
{
public:
    //ctor:
    kasr(int _surat = 1, int _makhraj = 1)
    {
        setSurat(_surat);
        setMakhraj(_makhraj);
    }

    //setter:
    void setSurat(int _surat)
    {
        surat = _surat;
    }
    void setMakhraj(int _makhraj)
    {
        if(_makhraj != 0)
            makhraj = _makhraj;
        else
            cout<< "Invalid value" << endl;
    }

    //getter:
    int getSurat()
    {
        return surat;
    }
    int getMakhraj()
    {
        return makhraj;
    }

    //operator overloading ++ (prefix increment):
    kasr operator++()
    {
        surat = makhraj + surat;
        return *this;
    }

    //operator overloading ++ (postfix increment):
    kasr operator++(int)
    {
        kasr temp(surat, makhraj);
        surat = surat + makhraj;
        return temp;
    }

    //overloading float data type:
    operator float()
    {
        return (float)surat / (float)makhraj;
    }

    //overloading " < ":
    bool operator <(const kasr &obj)
    {
        int s1 = surat * obj.makhraj;
        int s2 = obj.surat * makhraj;

        if(s1 < s2)
            return true;
        return false;
    }

    //overloading " > ":
    bool operator >(const kasr &obj)
    {
        int s1 = surat * obj.makhraj;
        int s2 = obj.surat * makhraj;

        if(s1 > s2)
            return true;
        return false;
    }

    //overloading " - " (unary minus):
    kasr operator -()
    {
        surat = -surat;
        return kasr(surat, makhraj);
    }

    //overloading for * operator:
    kasr operator *(kasr obj)
    {
        return kasr(surat * obj.surat, makhraj * obj.makhraj);
    }

    //overloading for / operator:
    kasr operator /(kasr obj)
    {
        return kasr(surat * obj.makhraj , makhraj * obj.surat);
    }

    //overloading for +:
    kasr operator +(kasr obj)
    {
        int s = (surat * obj.makhraj) + (obj.surat * makhraj);
        int m = makhraj * obj.makhraj;
        return kasr(s , m);
    }

    //overloading for -:
    kasr operator -(kasr obj)
    {
        int s = (surat * obj.makhraj) - (obj.surat * makhraj);
        int m = makhraj * obj.makhraj;
        return kasr(s , m);
    }

    bool operator ==(const kasr &obj)
    {
        if(surat == obj.surat && makhraj == obj. makhraj)
            return true;
        return false;
    }

    friend istream &operator >>(istream &in , kasr &obj);
    friend ostream &operator <<(ostream &out, kasr &obj);

    //show the fraction:
    void display()
    {
        cout<< getSurat() << "/" << getMakhraj() << endl;
    }

private:
    int surat , makhraj;
};

//insertion operator overloading (cin overloading)  :
istream &operator >>(istream &in , kasr &obj)
{
    cout<< "\nsurat: ";
    in>> obj.surat;
    cout<< "\nmakhraj: ";
    in>> obj.makhraj;
    return in;
}

//extraction operator overloading (cout overloading):
ostream &operator <<(ostream &out, kasr &obj)
{
    out << "\n" << obj.surat << "/" << obj.makhraj << endl;
    return out;
}

int main()
{
    kasr obj1, obj2;
    cin >> obj1;
    obj2 = obj1++; // obj1.operator++();
    obj2.display();

    float o2 = obj2;
    cout<< o2 << endl; //cout<< obj2 << endl;

    cout<< "\nobj1 = ";
    obj1.display();
    cout<< "obj2 = ";
    obj2.display();

    if(obj1 < obj2) // obj1.operator <(obj2);
        cout<< "\nobj1 is less than obj2" << endl;
    else
        cout<< "\nobj1 is greater than obj2" << endl;

    -obj1; //obj1.operator-();
    cout<< "\nobj1 after unary minus operator overloading: ";
    obj1.display();

    kasr zarb = obj1 * obj2;
    cout<< "\nobj * obj2 = ";
    zarb.display();

    kasr taghsim = obj1 / obj2;
    cout<< "\nobj / obj2 = ";
    taghsim.display();

    kasr jam = obj1 + obj2;
    cout<< "\nobj + obj2 = ";
    jam.display();

    kasr tafrigh = obj1 - obj2;
    cout<< "\nobj - obj2 = ";
    tafrigh.display();

    if(obj1 == obj2)
        cout<< "\nobj1 is equal to obj2 (obj1 == obj2)\n";
    else
        cout<< "\nobj1 is not equal to obj2 (obj != obj2)\n";

    kasr obj3;
    cin>>obj3;
    cout<< "obj3" <<obj3;

    return 0;
}
