struct Departamento {
    char nome[100];
    int id;
    char localizacao[100];
    struct Empregado *empregados;
    int numEmpregados;
};

void adicionarEmpregado(struct Departamento *departamento, struct Empregado *novoEmpregado) {

}

void removerEmpregado(struct Departamento *departamento, int empregadoId) {

}

void infoEmpregadosDepartamento(struct Departamento *departamentos, int numDepartamentos, int departamentoId) {

}