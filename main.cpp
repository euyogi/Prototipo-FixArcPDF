#include <iostream>
#include <string>
#include <windows.h>

int main(int argc, char* argv[]) {
    ShowWindow( GetConsoleWindow(), SW_HIDE ); // Esconde o console.

    if (argc != 2)
        return 1;

    system("start /min /b pythonw -m http.server 4242 -d /"); // Inicia um servidor local.

    std::string file = argv[1];
    std::string command = "start /min /b \"\" \"http://localhost:4242/" + file + "\"";

    system(command.c_str()); // Abre o arquivo pelo servidor.
    system("taskkill /IM Sandbox.exe"); // Encerra o programa junto com o servidor.
}
