#include <iostream>
#include <locale.h>

using namespace std;

main()

{
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,media;

    cout<<"\nDigite a primeira nota : ";

    cin>>n1;
    if (n1 >= 9)
    {
        cout<<"Aluno obteve o conceito MB\n";
    }
    else if (n1 >= 7 )
    {
        cout<<"Aluno obteve o conceito B";
    }
    else if (n1 >=5)
    {
        cout<<"Aluno obteve o conceito R";
    }
    else if (n1 <=4)
    {
        cout<<"Aluno obteve o conceito I";
    }
    cout<<"\nDigite a segunda nota: : ";

    cin>>n2;
    if (n2 >= 9)
    {
        cout<<"Aluno obteve o conceito MB\n";
    }
    else if (n2 >= 7 )
    {
        cout<<"Aluno obteve o conceito B";
    }
    else if (n2 >=5)
    {
        cout<<"Aluno obteve o conceito R";
    }
    else if (n2 <=4)
    {
        cout<<"Aluno obteve o conceito I";
    }
    cout<<"\nDigite a terceira nota: ";

    cin>>n3;
    if (n3 >= 9)
    {
        cout<<"Aluno obteve o conceito MB\n";
    }
    else if (n3 >= 7 )
    {
        cout<<"Aluno obteve o conceito B";
    }
    else if (n3 >=5)
    {
        cout<<"Aluno obteve o conceito R";
    }
    else if (n3 <=4)
    {
        cout<<"Aluno obteve o conceito I";
    }
    media=(n1+n2+n3)/3;


    if(media>=9)

    {

        cout<<"\nA média do aluno é :  "<<media;
        cout<<"\nAprovado";

    }



    else

    {

        cout<<"\nA média do aluno é:"<<media;

        cout<<"\nRecuperação";

    }

}



