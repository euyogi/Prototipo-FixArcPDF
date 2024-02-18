#include <iostream>
#include <string>
#include <windows.h>
#include <thread>
#include <chrono>

int main(int argc, char* argv[]) {
    ShowWindow( GetConsoleWindow(), SW_HIDE ); // Esconde o console.

    if (argc != 2)
        return 1;

    system("start /min \"FixArcPDF\" python -m http.server -b 127.0.0.1 -d /"); // Inicia um servidor local.

    std::string file = argv[1]; // Diretório do arquivo.
    std::string command = "start /b \"\" \"http://127.0.0.1:8000/" + file + "\"";

    system(command.c_str()); // Abre o arquivo pelo servidor.

    std::this_thread::sleep_for(std::chrono::seconds(5));
    system("taskkill /FI \"WINDOWTITLE eq FixArcPDF\" /F"); // Encerra o servidor.
}
