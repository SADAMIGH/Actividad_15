#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> str;
    string op;

    while (true)
    {
        cout << "1) Agregar al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Eliminar Ultimo" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1") {
            string s;

            cout << "string: ";
            cin >> s; cin.ignore();

            str.push_back(s);
        }
        else if (op == "2") {
            for (size_t i = 0; i < str.size(); i++) {
                cout << str[i] << ", ";
            }
            cout << endl;
        }
        else if (op == "3") {
            size_t n;
            string s;

            cout << "tam: ";
            cin >> n;
            cout << "string: ";
            cin >> s; cin.ignore();

            str = vector<string>(n, s);
        }    
        else if (op == "4")
        {
            if (str.empty()) {
                cout << "vector está vacío" << endl;
            }
            else {
                cout << str.front() << endl;
            }
        }
        else if (op == "5")
        {
            if (str.empty()) {
                cout << "vector está vacío" << endl;
            }
            else {
                cout << str.back() << endl;
            }
        }      
        else if (op == "6")
        {   
            sort(str.begin(), str.end());
            
        }
        else if (op == "7")
        {
            size_t p;
            string s;

            cout << "posición: ";
            cin >> p;
            cout << "string: ";
            cin >> s; cin.ignore();

            if (p >= str.size()) {
                cout << "posición no válida" << endl;
            }
            else {
                str.insert(str.begin()+p, s);
            }
        }
        else if (op == "8")
        {
            size_t p;

            cout << "posición: ";
            cin >> p; cin.ignore();

            if (p >= str.size()) {
                cout << "posición no válida" << endl;
            }
            else {
                str.erase(str.begin()+p);
            }
        }
        else if (op == "9")
        {
            if (str.empty()) {
                cout << "vector está vacío" << endl;
            }
            else {
                str.pop_back();
            }
        }
        
        else if (op == "0") {
            break;
        }
    }
    
    return 0;
}