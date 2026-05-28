#include <iostream>
#include "BitmapaExt.h"
#include "Usrednianie.h"
#include "Dylatacja.h"
#include "ZlozeniePrzeksztalcen.h"
#include "MyExceptions.h"

int main() {
    try {
        BitmapaExt aa(5, 5);

        aa(1,1)=aa(2,1)=aa(3,1)=aa(2,2)=aa(1,3)=aa(2,3)=aa(3,3)=true;

        std::cout << aa << "\n";

        Usrednianie u;
        Dylatacja d;
        ZlozeniePrzeksztalcen z;

        z.dodajPrzeksztalcenie(&u);
        z.dodajPrzeksztalcenie(&d);
        z.przeksztalc(aa);

        std::cout << aa << "\n";

    } catch (const MyExceptions& e) {
        std::cerr << "Blad: " << e.what() << "\n";
    } catch (...) {
        std::cerr << "Nieznany blad!\n";
    }

    return 0;
}