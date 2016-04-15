#include <iostream>
#include <ostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <cmath>
using namespace std;
//NV, PV, PM, FUE, RAP, PRE, SAB, ESP, ATA, DEF

//Numero aleatorio entre (0,200)
//IF (RAND < NV+(PRE/2) = "Crit" (ceil(((FUE+ATA)-E_DEF)*RAND(0.8,1))*3)
//IF RAND < (168 +PRE)-(48+E_Rap) = "Hit" (ceil((FUE+ATA)-E_DEF)*RAND(0.8,1))
//ELSE RAND > (168 +PRE)-(48+E_Rap) = "Miss"
int arq_char [10] = {7,46,26,30,22,48,19,14,2,7};
int llama_ene [10] = {10,50,25,20,5,5,2,20,20,20};

int main ()
{
srand (time(NULL));

Batalla:
string luchdef;
cout << "Quieres [Atacar], [Esperar], o [Rendirte]?\n";
int NumAl = (rand() %200);
int ModAl = (rand() %50+50);
int CritHit = ((arq_char [0])+ (arq_char [5]/2));
int DamHit = ((168 + arq_char [5]) - (48+ llama_ene [4]));
int DealCrit = (ceil((((((arq_char[3])+(arq_char[8]))-(llama_ene[9]))*ModAl)/100))*3);
int DealDam = (ceil(((((arq_char[3])+(arq_char[8]))-(llama_ene[9]))*ModAl)/100));

int EneCritHit = ((llama_ene [0])+ (llama_ene [5]/2));
int EneDamHit = ((168 + llama_ene [5]) - (48+ arq_char [4]));
int EneCrit = (ceil((((((llama_ene[3])+(llama_ene[8]))-(arq_char[9]))*ModAl)/100))*3);
int EneDam = (ceil(((((llama_ene[3])+(llama_ene[8]))-(arq_char[9]))*ModAl)/100));
cout << "los numeros son " << NumAl << " y " << ModAl << "\n";
cout << "CritHit = " << CritHit << " DamHit = " << DamHit << "\n";
getline (cin, luchdef);

if (luchdef == "Atacar")
{
    if (NumAl < CritHit)
    {
        cout << "Le asestaste un golpe critico contra el enemigo por " << DealCrit << " puntos de dano! \n";
        goto Batalla;
    }
    else if (CritHit < NumAl < DamHit)
    {
        cout << "Le asestaste " << DealDam << " puntos de dano contra el enemigo. \n";
        goto Batalla;
    }
    else if (NumAl > DamHit)
    {
        cout << "Tu fallaste.\n";
        goto Batalla;
    }
    else
    {
        return 0;
    }
}
else if (luchdef == "Rendirte")
{
    cout << "La llama enemiga no comprende merced y te devora sin ningun pensamiento mas...";
    return 0;
}
else if (luchdef == "Esperar")
{
    if (NumAl < EneCritHit)
    {
        cout << "Recibiste un golpe critico del enemigo por " << EneCrit << " puntos de dano! \n";
        goto Batalla;
    }
    else if (EneCritHit < NumAl < EneDamHit)
    {
        cout << "Recibiste " << EneDam << " puntos de dano del enemigo. \n";
        goto Batalla;
    }
    else if (NumAl > EneDamHit)
    {
        cout << "El golpe del enemigo fallo.\n";
        goto Batalla;
    }
    else
    {
        return 0;
    }
}
else
{
    cout << "No entiendo. Selecciona una opcion: [Atacar], [Esperar] o [Rendirte]";
    goto Batalla;
}
return 0;}
