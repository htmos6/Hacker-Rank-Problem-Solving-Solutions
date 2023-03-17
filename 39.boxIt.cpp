class Box
{
    private:
        int l, h, b;
        
    public:
        Box();
        Box(const Box& B);
        Box(int length, int breadth, int height):l(length), b(breadth), h(height){};
        int getLength();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
        bool operator<(const Box& B1)
        {
            if (l < B1.l)
            {
               return true; 
            }
            else if ((b < B1.b) && (l == B1.l))
            {
                return true;
            }
            else if ((h < B1.h) && (l == B1.l) && (b == B1.b))
            {
                return true;
            }
            return false;
        }
        
        friend ostream& operator<<(ostream& os, const Box& B);
};

Box::Box()
{
    l = 0;
    h = 0;
    b = 0;
};

Box::Box(const Box& B)
{
    l = B.l;
    h = B.h;
    b = B.b;  
};

int Box::getLength()
{
    return l;    
}

int Box::getBreadth()
{
    return b;    
}

int Box::getHeight()
{
    return h;
}

long long Box::CalculateVolume()
{
    return (long long) l*b*h;
}

ostream& operator<<(ostream& os, const Box& B)
{
    os << B.l << ' ' << B.b <<  ' ' << B.h;
    return os;
}
