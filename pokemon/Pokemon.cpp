#include <iostream>
#include <string>
using namespace std;

struct Ataque {
    string nombre;
    int dano;
};

struct Pokemon {
    string nombre;
    int hp;
    Ataque ataques[2];
};

void mostrarPokemon(Pokemon p) {
    cout << p.nombre << " | HP: " << p.hp << endl;
    cout << "Ataques:\n";
    for (int i = 0; i < 2; i++) {
        cout << i+1 << ". " << p.ataques[i].nombre << " (Daño: " << p.ataques[i].dano << ")\n";
    }
}

void atacar(Pokemon &atacante, Pokemon &defensor) {
    int opcion;
    cout << "\nTurno de " << atacante.nombre << endl;
    cout << "Elige un ataque:\n";
    for (int i = 0; i < 2; i++) {
        cout << i+1 << ". " << atacante.ataques[i].nombre << "\n";
    }
    cin >> opcion;
    if (opcion < 1 || opcion > 2) opcion = 1;

    int dano = atacante.ataques[opcion - 1].dano;
    defensor.hp -= dano;
    if (defensor.hp < 0) defensor.hp = 0;

    cout << atacante.nombre << " usó " << atacante.ataques[opcion - 1].nombre << " y causó " << dano << " de daño!\n";
    cout << defensor.nombre << " ahora tiene " << defensor.hp << " de HP.\n";
}

int main() {
    
    Pokemon p1 = {"Charmander", 100, {{"Lanzallamas", 30}, {"Arañazo", 20}}};
    Pokemon p2 = {"Squirtle", 100, {{"Burbuja", 25}, {"Placaje", 15}}};

    cout << "--- COMIENZA LA BATALLA ---\n";
    mostrarPokemon(p1);
    mostrarPokemon(p2);

    
    while (p1.hp > 0 && p2.hp > 0) {
        atacar(p1, p2);
        if (p2.hp <= 0) break;
        atacar(p2, p1);
    }

    cout << "\n--- FIN DE LA BATALLA ---\n";
    if (p1.hp > 0) {
        cout << p1.nombre << " ha ganado la batalla!\n";
    } else {
        cout << p2.nombre << " ha ganado la batalla!\n";
    }

    return 0;
}
