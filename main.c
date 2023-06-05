#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nombre[30];
    char genero; //m, f, o
} stAlumno;



stAlumno unalumbrado();
void mostrar(stAlumno a);
int carganeitor(stAlumno arr[], int dim);
void larepe(stAlumno a[], int val);
int buscandoanemo(stAlumno a[], int val, int dato);
int menores(stAlumno a[], int pos, int val);
int argentina(stAlumno a[], int val);
void areyougay(stAlumno a[], int val, char genero);
int incectoide (stAlumno a[], int val);
int generoso (stAlumno a[], int val, char chaqueno);





int main()
{
    int num;
    char yes;
    int val=0;
    stAlumno charly[100];
    do
    {
        printf("Bienvenido a doctops hoy presentaremos, los 9 ejercicios de estructuras mas perturbadores, elija uno, pero antes cuanto es 5+5? : ");
        fflush(stdin);
        scanf("%i", &num);
        switch(num)
        {
        case 1:
            val=carganeitor(charly, 30);
            break;

        case 2:
            val=carganeitor(charly, 30);
            larepe(charly, val);
            break;

        case 3:
            val=carganeitor(charly, 30);
            printf("\nIngrese el numero de matricula que desea buscar: ");
            fflush(stdin);
            scanf("%i",&num);
            buscandoanemo(charly,val,num);
            break;

        case 4:
            val=carganeitor(charly, 30);
            argentina(charly, val);
            larepe(charly, val);

            break;

        case 5:
            val=carganeitor(charly, 30);
            printf("\nIngrese el genero el cal desea ver todos sus integrantes: ");
            fflush(stdin);
            scanf("%c", &yes);
            areyougay(charly, val, yes);

            break;

        case 6:
            val=carganeitor(charly, 30);
            val=incectoide(charly,val);
            larepe(charly,val);
            break;

        case 7:
            val=carganeitor(charly, 30);
            ingerto(charly, val);
            larepe(charly, val);


            break;

        case 8:

            val=carganeitor(charly, 30);

            do
            {
                printf("\n Porfavor ingrese la primera letra del genero que desea buscar (m,f,o): ");
                fflush(stdin);
                scanf("%c",&yes);
                num=generoso(charly,val,yes);
                printf("\n El numero de %c es: %i ", yes, num);


                printf("\nDesea buscar por otro genero?? presione 's' para si ");
                fflush(stdin);
                scanf("%c", &yes);
            }
            while(yes=='s'||yes=='S');



            break;

        case 9:

            break;

        case 10:
            printf("We're no strangers to love\nYou know the rules and so do I (do I)\nA full commitment's what I'm thinking of\nYou wouldn't get this from any other guy\nI just wanna tell you how I'm feeling\nGotta make you understand\nNever gonna give you up\nNever gonna let you down\nNever gonna run around and desert you\nNever gonna make you cry\nNever gonna say goodbye\nNever gonna tell a lie and hurt you\nWe've known each other for so long\nYour heart's been aching, but you're too shy to say it (say it\nInside, we both know what's been going on (going on)\nWe know the game and we're gonna play it\nAnd if you ask me how I'm feeling\nDon't tell me you're too blind to see\nNever gonna give you up\nNever gonna let you down\nNever gonna run around and desert you\nNever gonna make you cry\nNever gonna say goodbye\nNever gonna tell a lie and hurt you\nNever gonna give you up\nNever gonna let you down\nNever gonna run around and desert you\nNever gonna make you cry\nNever gonna say goodbye\nNever gonna tell a lie and hurt you\nWe've known each other for so long\nYour heart's been aching, but you're too shy to say it (to say it)\nInside, we both know what's been going on (going on)\nWe know the game and we're gonna play it\nI just wanna tell you how I'm feeling\nGotta make you understand\nNever gonna give you up\nNever gonna let you down\nNever gonna run around and desert you\nNever gonna make you cry\nNever gonna say goodbye\nNever gonna tell a lie and hurt you\nNever gonna give you up\nNever gonna let you down\nNever gonna run around and desert you\nNever gonna make you cry\nNever gonna say goodbye\nNever gonna tell a lie and hurt you\nNever gonna give you up\nNever gonna let you down\nNever gonna run around and desert you\nNever gonna make you cry\nNever gonna say goodbye\nNever gonna tell a lie and hurt you\n");
            break;
        }
        printf("\nDesea continuar? presione 's' para si ");
        fflush(stdin);
        scanf("%c", &yes);


    }
    while(yes=='s'||yes=='S');
    return 0;
}

stAlumno unalumbrado()
{

    stAlumno a;



    printf("\nIngrese el numero de matricula: ");
    fflush(stdin);
    scanf("%d", &a.matricula);

    printf("\nIngrese el nombre del alumno: ");
    fflush(stdin);
    gets(a.nombre);

    printf("\nIngrese el genero del alumno: ");
    fflush(stdin);
    scanf("%c", &a.genero);

    return a;
}

int carganeitor(stAlumno arr[], int dim)
{
    int i= 0;
    char yes;

    do
    {
        arr[i]=unalumbrado();

        i++;

        printf("\nDesea continuar? presione 's' para si ");
        fflush(stdin);
        scanf("%c", &yes);
    }
    while(i<dim && yes=='s'||yes=='S');

    return i;
}

void mostrar(stAlumno a)
{
    printf("------------------------------------------\n");
    printf("numero de matricula: %i", a.matricula);
    printf("\n\n");
    printf("Nombre del alumno: %s", a.nombre);
    printf("\n\n");
    printf("Genero: %c",a.genero);
    printf("\n------------------------------------------");
    printf("\n\n");

}

void larepe(stAlumno a[], int val)
{
    int i=0;

    while(i<val)
    {
        mostrar(a[i]);
        i++;
    }
}

int buscandoanemo(stAlumno a[], int val, int dato)
{
    int i=0;

    while(i<val)
    {
        if(a[i].matricula==dato)
        {
            mostrar(a[i]);
            i++;
        }
        else
        {
            i++;
        }
    }
}

int argentina(stAlumno a[], int val)
{
    int men;
    int aux;
    int i=0;
    char aux1[1];
    stAlumno luis;


    while(i<val-1)
    {
        men=menores(a,i,val);
        luis=a[men];
        a[men]=a[i];
        a[i]=luis;

        i++;
    }

}

int menores(stAlumno a[], int pos, int val)
{
    int aux=a[pos].matricula;
    int men=pos;
    int i=pos+1;

    while(i<val)
    {
        if(aux>a[i].matricula)
        {
            aux=a[i].matricula;
            men=i;
        }
        i++;
    }
    return men;
}

void areyougay(stAlumno a[], int val, char genero)
{
    int i=0;
    int u=0;


    while(i<val)
    {
        if(genero==a[i].genero)
        {
            mostrar(a[i]);
            i++;
            u++;
        }
        i++;
    }
}

int incectoide (stAlumno a[], int val)
{
    int i=val-1;
    int num;
    char yes;
    stAlumno gustavo;

    do
    {
        printf("\nInserta un numero de matricula\n");
        gustavo=unalumbrado();

        while(i>=0 && gustavo.matricula<a[i].matricula)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=gustavo;

        printf("Quiere ingresar otro numero de matricula??");
        fflush(stdin);
        scanf("%c",&yes);
    }
    while(yes=='s'|| yes=='S');

    val++;
    return val;
}

// printf("\n\n 1CULOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO %i\n\n", val);

void ingerto(stAlumno a[], int val)
{
    int i=0;
    while(i<val-1)
    {
        newboy(a,i,a[i+1]);
        i++;
    }
}

void newboy(stAlumno a[], int val, stAlumno indio)
{
    int i=val;
    while(i>=0 && strcmp(indio.nombre,a[i].nombre)==-1)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=indio;
}

int generoso (stAlumno a[], int val, char chaqueno)
{
    int i=0;
    int hugo=0;
    while(i<val)
    {
        if (chaqueno==a[i].genero)
        {
            hugo++;
            i++;
        }
        else
        {
            i++;

        }
    }
    return hugo;
}
