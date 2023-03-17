Complex operator+(Complex no1, Complex no2)
{
    Complex no3;
    no3.a = no1.a + no2.a;
    no3.b = no1.b + no2.b;    
    return no3;
}

ostream& operator<<(ostream& os, const Complex& no)
{
    os << no.a << "+i" << no.b << endl;
    return os;
}
