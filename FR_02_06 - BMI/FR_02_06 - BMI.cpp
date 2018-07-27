/* Andrulewicz Artur
FR_02_06 - BMI
2018-07-27
*/

#include <iostream>
#include <vector>

using namespace std;

class Osoba
{
    private:
    int wzrost;
    int waga;
    public:
    string imie;
    Osoba(string imie,int waga,int wzrost):imie(imie),waga(waga),wzrost(wzrost){}
    double getBMI() const
    {
        double BMI=double(waga)/((double(wzrost)/100)*(double(wzrost)/100));
        return BMI;
    }
};

int main()
{
    int t;
    cin>>t;
    vector <Osoba*> niedowaga;
    vector <Osoba*> prawidlowa;
    vector <Osoba*> nadwaga;
    for(int i=0;i<t;i++)
    {
        string imie;
        int wzrost;
        int waga;
        cin>>imie>>waga>>wzrost;
        Osoba *osoba=new Osoba(imie,waga,wzrost);
        if(osoba->getBMI()>=25)
        nadwaga.push_back(osoba);
        else if(osoba->getBMI()<=18.5f)
        niedowaga.push_back(osoba);
        else
        prawidlowa.push_back(osoba);
    }
    cout<<endl<<"niedowaga"<<endl;
    for(vector<Osoba*>::iterator it=niedowaga.begin();it!=niedowaga.end();it++)
    {
        cout<<(*it)->imie<<endl;
        delete *it;
    }
    cout<<endl<<"wartosc prawidlowa"<<endl;
    for(vector<Osoba*>::iterator it=prawidlowa.begin();it!=prawidlowa.end();it++)
    {
        cout<<(*it)->imie<<endl;
        delete *it;
    }
    cout<<endl<<"nadwaga"<<endl;
    for(vector<Osoba*>::iterator it=nadwaga.begin();it!=nadwaga.end();it++)
    {
        cout<<(*it)->imie<<endl;
        delete *it;
    }
    return 0;
}
