#include <iostream>
#include "usuario.h"
#include "operacao.h"

int main(){
    system("clear");
    Usuario us;
    Operacoes op;
    us.nome = "João";
    us.email = "joao@globo.com.br";
    us.senha = "123";
    us.permissao = "Admin";
    op.cadastro(us.nome,us.email,us.senha,us.permissao);
    return 0;
}