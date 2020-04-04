/*Cronometro que te permite elegir cuando parar*/

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    int option, amount = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    cout << "Bienvenido, esta es su cronometro personal, por favor digite la opcion en la cual usted podra elegir en cuanto tiempo se detendrá" << endl << endl;
    cout << "1. Horas" << endl;
    cout << "2. Minutos" << endl;
    cout << "3. Segundos" << endl;
    cin >> option;

    cout << "Perfecto, ahora coloque la cantidad deseada" << endl;
    cin >> amount; 

    for (hours = 0; hours <= 24; hours++) {
        for (minutes = 0; minutes < 60; minutes++) {
            for (seconds = 0; seconds < 60; seconds++) {

                Sleep(1000);

                printf("\r %i : %i : %i", hours,minutes,seconds);

                if (option == 1 && amount <= hours) {
                    cout << "\nCronometro Finalizado" << endl;
                    PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
                    system("pause");
                    return 0;
                }

                else if (option == 2 && amount <= minutes) {
                    cout << "\nCronometro Finalizado" << endl;
                    PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
                    system("pause");
                    return 0;
                }
                else if (option == 3 && amount <= seconds) {
                    cout << "\nCronometro Finalizado" << endl;
                    PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
                    system("pause");
                    return 0;
                }



            }
        }
    }
    return 0;
}
