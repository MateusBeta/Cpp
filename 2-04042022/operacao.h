#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class Operacoes{
    public:
        void cadastro(string nome, string senha, string email, string permissao){
            cout << "Cadastro de usuário ralizado\n";
        }
        string login(string nome, string senha){
            return "\nSeja bem vindo!\n";
        }
        string trocarSenha(string nome, string senha){
            return "\n Senha alterada\n";
        }
};