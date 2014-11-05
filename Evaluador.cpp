#include "Evaluador.h"

bool existeEnLista(list<int>l,int n)
{
    for(list<int>::iterator i=l.begin();
        i!=l.end();
        i++)
        if((*i)==n)
            return true;
    return false;
}

void evaluar()
{
    double nota=0;

    list<int> l1a;
    l1a.push_back(100);
    l1a.push_back(200);
    l1a.push_back(300);
    l1a.push_back(250);

    list<int> l1b;
    l1b.push_back(4);
    l1b.push_back(1);
    l1b.push_back(3);
    l1b.push_back(2);

    cout<<"getUltimo():\t\t";
    if(*getUltimo(l1a)==250 && *getUltimo(l1b)==2)
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    set<int>s2a;
    s2a.insert(4);
    s2a.insert(8);
    s2a.insert(10);
    s2a.insert(2);


    set<int>s2b;
    s2b.insert(4);
    s2b.insert(3);
    s2b.insert(10);
    s2b.insert(2);

    set<int>s2c;
    s2c.insert(4);
    s2c.insert(8);
    s2c.insert(10);
    s2c.insert(1);

    cout<<"sonPares():\t\t";
    if(sonPares(s2a) && !sonPares(s2b) && !sonPares(s2c))
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    queue<int>q3a;
    q3a.push(10);
    q3a.push(20);
    q3a.push(30);
    q3a.push(40);

    queue<int>q3b;
    q3b.push(3);
    q3b.push(1);
    q3b.push(4);

    set<int>s3a = convertirASet(q3a);
    set<int>s3b = convertirASet(q3b);

    cout<<"convertirASet():\t";
    if(s3a.size()==4 && s3b.size()==3
        && s3a.find(10)!=s3a.end()
        && s3a.find(20)!=s3a.end()
        && s3a.find(30)!=s3a.end()
        && s3a.find(40)!=s3a.end()
        && s3a.find(50)==s3a.end()

        && s3b.find(3)!=s3b.end()
        && s3b.find(1)!=s3b.end()
        && s3b.find(4)!=s3b.end()
        && s3b.find(5)==s3b.end()
        )
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    multimap<string,int>m4a;
    m4a.insert(pair<string,int>("Juan",98949596));
    m4a.insert(pair<string,int>("Juan",2553245));
    m4a.insert(pair<string,int>("Juan",33567898));

    m4a.insert(pair<string,int>("Pedro",2559878));
    m4a.insert(pair<string,int>("Pedro",33569878));

    m4a.insert(pair<string,int>("Maria",98979892));


    multimap<string,int>m4b;
    m4b.insert(pair<string,int>("Juan",98949596));
    m4b.insert(pair<string,int>("Juan",2553245));

    m4b.insert(pair<string,int>("Pedro",2559878));
    m4b.insert(pair<string,int>("Pedro",33569878));

    m4b.insert(pair<string,int>("Maria",98979892));

    list<int>l4a=obtenerNumeros(m4a,"Juan");
    list<int>l4b=obtenerNumeros(m4a,"Pedro");
    list<int>l4c=obtenerNumeros(m4b,"Juan");
    list<int>l4d=obtenerNumeros(m4b,"Maria");

    cout<<"obtenerNumeros():\t";
    if(l4a.size()==3 && l4b.size()==2 && l4c.size()==2 && l4d.size()==1
        && existeEnLista(l4a,98949596)
        && existeEnLista(l4a,2553245)
        && existeEnLista(l4a,33567898)

        && existeEnLista(l4b,2559878)
        && existeEnLista(l4b,33569878)

        && existeEnLista(l4c,98949596)
        && existeEnLista(l4c,2553245)

        && existeEnLista(l4d,98979892)
        )
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

//
    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
