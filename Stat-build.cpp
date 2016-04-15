#include <iostream>
#include <ostream>
using namespace std;
// PV, PM, FUE, RAP, PRE, SAB, ESP



int main ()
{
int luch_bas [7] = {6,3,5,3,2,1,2};
int ladr_bas [7] = {4,3,3,5,2,2,1};
int arq_bas [7] = {4,4,3,2,5,2,1};
int mag_bas [7] = {3,5,2,1,3,5,2};
int cler_bas [7] = {2,6,1,2,3,2,5};
int pers1 [7] = {};



cout <<"     `+@@@        \n";
cout <<"    @@@@@@          \n";
cout <<"   @@      @           \n";
cout <<"   @       ,#              \n";
cout <<"    @@@@` @.                  \n";
cout <<"    .@'   +                      \n";
cout <<"   @      '                         \n";
cout <<"  @    .@@                             \n";
cout <<" .@``'@@ ,@'                              \n";
cout <<"  @@@@.                                      \n";
cout <<"                                                \n";
cout <<"              '@                                      \n";
cout <<"           `@@@@@                                        \n";
cout <<"          @@@@@@@   @                                       \n";
cout <<"        #@@@# @@   @@                    @#                    \n";
cout <<"       @@@@  '@+  :@   +@               ;@'                       \n";
cout <<"      @@@#   @@   @@   @@               @@                           \n";
cout <<"     `@@,   @@    @:   @                                            \n";
cout <<"     ,@@@@ `@@   ,@   ,      @@@@     `@@    +@@                    \n";
cout <<"     ;@    @@    @  `@@    ;@@@@    ;@@@@   @@,@                    \n";
cout <<"          .@@   @@  @@#   @@@' @:  @@@#@,  @' @@                    \n";
cout <<"          @@   `@  @@@   @@@  @@   @'  @  @@ '@                     \n";
cout <<"          @@   @: `@@   @@,  @@       ,' +@ @.                       \n";
cout <<"         ;@   @@  ;@    @@  #+@       @  @@.    `                    \n";
cout <<"         @@  +@   .@  `@@+ @#+@ .@   .+.+@@    @                     \n";
cout <<"         @@ '@     @@@@ ,@@@ @@@@    @@; @@@+@@                       \n";
cout <<"         .@@@'     @@@   @#  @@#    .@.   @@@#                       \n";
cout <<"          @@#                       @.                                  \n";
cout <<"                                   @#                                      \n";
cout <<"                                  @@                                          \n";
cout <<"                                 ,@'                                             \n";
cout <<"                                 @@                                          \n";
cout <<"                                 @                                              \n";
cout <<"                                                                                   \n";
cout <<"   F   -   A   -   N   -   T   -   A   -   S   -   T   -   I   -   C   -   O \n";
cout <<" \n";
  ClassPick:
  string clase;
  cout << " \n";
  cout << "Selecciona una clase: \n [Luchador] \n [Ladron] \n [Arquero] \n [Mago] \n [Clerigo] \n";
  cout << " \n";
  getline (cin,clase);

  if (clase == "Luchador")
    {int a = 0;
        while (a<7)
            {pers1[a] = luch_bas[a]; a++;}
    }
  else if (clase == "Ladron")
    {int a = 0;
        while (a<7)
            {pers1[a] = ladr_bas[a]; a++;}
    }
  else if (clase == "Arquero")
    {int a = 0;
        while (a<7)
            {pers1[a] = arq_bas[a]; a++;}
    }
  else if (clase == "Mago")
    {int a = 0;
        while (a<7)
            {pers1[a] = mag_bas[a]; a++;}
    }
  else if (clase == "Clerigo")
    {int a = 0;
        while (a<7)
            {pers1[a] = cler_bas[a]; a++;}
    }
  else
  {
      cout << "Esta clase no existe. \n";
      cout << " \n";
      goto ClassPick;
  }
  cout << " \n";
  cout << "Tiene los atributos siguientes: \n";
  cout << "Puntos de Vida (PV)... " << pers1[0] << "\n";
  cout << "Puntos de Magia (PM)..." << pers1[1] << "\n";
  cout << "Fuerza (FUE) ..." << pers1[2] << "\n";
  cout << "Rapidez (RAP) ..." << pers1[3] << "\n";
  cout << "Precision (PRE) ..." << pers1[4] << "\n";
  cout << "Sabiduria (SAB) ..." << pers1[5] << "\n";
  cout << "Espiritu (ESP) ..." << pers1[6] << "\n";
  cout << " \n";

string resp;
do{
    cout << "Quieres seleccionar esta clase? [Si] o [No].\n";
    getline (cin,resp);
    if (resp== "No")
        {goto ClassPick;}
    else if (resp=="Si")
        {cout << " \n";
        cout << "Procedemos... \n";
        cout << " \n";
        return 0;}
    else
        {cout << "No entiendo. \n";}
}while (resp != "Si");

 }





