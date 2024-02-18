#include <iostream>
#include <string>
#include <windows.h>

int main(int argc, char* argv[]) {
    ShowWindow( GetConsoleWindow(), SW_HIDE ); // Esconde o console.

    if (argc != 2)
        return 1;

    system("start /min /b python -m http.server -b 127.0.0.1 -d /"); // Inicia um servidor local.

    std::string file = argv[1]; // Diretório do arquivo.
    std::string command = "start /min /b \"\" \"http://127.0.0.1:8000/" + file + "\"";

    system(command.c_str()); // Abre o arquivo pelo servidor.

    system("taskkill /IM python3.12.exe"); // Encerra o servidor.
}
