#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    system ("color 05");
    pid_t pid;
    int number;

    printf("> Digite um numero inteiro: ");
    scanf("%d", &number);

    pid = fork();

    if (pid < 0) {
        perror("> Erro ao criar processo filho!");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        printf("> Processo filho (PID %d): Executando programa externo para calcular fatorial...\n", getpid());

        char *programPath = "./fatorial";

        char *args[] = {programPath, NULL};

        execv(programPath, args);

        perror("> Erro ao executar programa externo!");
        exit(EXIT_FAILURE);
    } else {
        wait(NULL);
        printf("> Processo pai (PID %d): Filho terminou. Encerrando.\n", getpid());
    }

    return 0;
}
