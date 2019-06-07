#ifndef MENU
#define MENU

#include <string>
#include <vector>

using namespace std;

class Menu
{
    private:
        string titulo;
        vector<string> opcoes;

    public:
        Menu(string titulo, vector<string> opcoes);
        const virtual int getEscolha();
};

#endif