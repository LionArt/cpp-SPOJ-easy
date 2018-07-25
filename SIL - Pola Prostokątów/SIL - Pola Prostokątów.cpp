/* Andrulewicz Artur
SIL - Pola Prostok¹tów
2018-07-25
*/

#include <iostream>
#include <cmath>

using namespace std;

class Punkt
{
    public:
    int x;
    int y;
    Punkt(int x,int y):x(x),y(y){}
};

class Prostokat
{
    public:
    Punkt A;
    Punkt B;
    int pole;
    Prostokat(Punkt A,Punkt B):A(A),B(B)
    {
        pole=abs(double(A.x-B.x))*abs(double(A.y-B.y));
    }
};

int main()
{
    int x1,x2,y1,y2;;
    while(cin>>x1>>y1>>x2>>y2)
    {
    int pole=0;
    Prostokat p1(Punkt(x1,y1),Punkt(x2,y2));
    cin>>x1>>y1>>x2>>y2;
    Prostokat p2(Punkt(x1,y1),Punkt(x2,y2));
    if(p2.A.x<=p1.A.x && p2.B.x>=p1.B.x && p2.A.y<=p1.A.y && p2.B.y>=p1.B.y)
    {
        Prostokat temp=p2;
        p2=p1;
        p1=temp;
    }
    // Prostokaty zaslaniaja sie calkowicie
    if(p1.A.x==p2.A.x && p1.B.x==p2.B.x && p1.A.y==p2.A.y && p1.B.y==p2.B.y)
    {
        pole=p1.pole;
    }
    // Prostokaty maja czesciowo wspolne pole
    // jesli wspolrzedna x pierwszego prostokata znajduje sie w zasiegu drugiego oraz wspolrzedna y znajduje sie
    // w zasiegu wspolrzednych y drugiego prostokata, oznacza to, ze prostokaty maja czesciowo wspolne pole,
    // a wynikiem bedzie roznica sumy pol oraz pola wspolnego tych prostokatow
    else if((((p1.A.x>=p2.A.x && p1.A.x<p2.B.x) || (p1.B.x<=p2.B.x && p1.B.x>p2.A.x)) && ((p1.A.y>=p2.A.y && p1.A.y<p2.B.y) || (p1.B.y<=p2.B.y && p1.B.y>p2.A.y))) || (((p2.A.x>=p1.A.x && p2.A.x<p1.B.x) || (p2.B.x<=p1.B.x && p2.B.x>p1.A.x)) && ((p2.A.y>=p1.A.y && p2.A.y<p1.B.y) || (p2.B.y<=p1.B.y && p2.B.y>p1.A.y))))
    {
        int x=0;
        int y=0;
        if(((p1.A.x>=p2.A.x && p1.A.x<p2.B.x) || (p1.B.x<=p2.B.x && p1.B.x>p2.A.x)) && ((p1.A.y>=p2.A.y && p1.A.y<p2.B.y) || (p1.B.y<=p2.B.y && p1.B.y>p2.A.y)))
        {
            if((p1.A.x>=p2.A.x && p1.A.x<p2.B.x))
            {
                if(p2.B.x>p1.B.x)
                x=abs(double(p1.A.x-p1.B.x));
                else
                x=abs(double(p1.A.x-p2.B.x));
            }
            else
            {
                if(p2.A.x>p1.A.x)
                x=abs(double(p2.A.x-p1.B.x));
                else
                x=abs(double(p1.A.x-p1.B.x));
            }
            if((p1.A.y>=p2.A.y && p1.A.y<p2.B.y))
            {
                if(p2.B.y>p1.B.y)
                y=abs(double(p1.A.y-p1.B.y));
                else
                y=abs(double(p1.A.y-p2.B.y));
            }
            else
            {
                if(p2.A.y>p1.A.y)
                y=abs(double(p2.A.y-p1.B.y));
                else
                y=abs(double(p1.A.y-p1.B.y));
            }
        }
        //Odwrotna sytuacja dla drugiego prostokata
        else
        {
            if((p2.A.x>=p1.A.x && p2.A.x<p1.B.x))
            {
                if(p1.B.x>p2.B.x)
                x=abs(double(p2.A.x-p2.B.x));
                else
                x=abs(double(p2.A.x-p1.B.x));
            }
            else
            {
                if(p1.A.x>p2.A.x)
                x=abs(double(p1.A.x-p2.B.x));
                else
                x=abs(double(p2.A.x-p2.B.x));
            }
            if((p2.A.y>=p1.A.y && p2.A.y<p1.B.y))
            {
                if(p1.B.y>p2.B.y)
                y=abs(double(p2.A.y-p2.B.y));
                else
                y=abs(double(p2.A.y-p1.B.y));
            }
            else
            {
                if(p1.A.y>p2.A.y)
                y=abs(double(p1.A.y-p2.B.y));
                else
                y=abs(double(p2.A.y-p2.B.y));
            }
        }
        pole=(p1.pole+p2.pole)-(x*y);
    }
    // Prostokaty maja oddzielne pola
    else
    {
        pole=p1.pole+p2.pole;
    }
    cout<<pole<<endl;
    }
    return 0;
}
