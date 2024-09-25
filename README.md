# README - Cálculo de Fatorial com fork() 🖩 🧮

Este projeto implementa o cálculo do fatorial de um número em C, utilizando o sistema de criação de processos com fork(). O trabalho foi desenvolvido para a disciplina Sistemas Operacionais, com o objetivo de explorar a criação e controle de processos no Linux.

### Objetivo
O programa realiza o cálculo do fatorial de um número dado, aproveitando o conceito de processos filhos e o uso do comando fork() para demonstrar como diferentes processos podem executar partes de um programa em paralelo.

### Funcionalidades
- Entrada de um número pelo usuário para calcular o seu fatorial.
- Criação de um processo filho que realiza o cálculo do fatorial.
- O processo pai aguarda a conclusão do processo filho utilizando a função wait().
- Exibição do resultado do fatorial após o término do cálculo.

### Como funciona:
- O programa utiliza o comando fork() para criar um processo filho.
- O processo filho é responsável por calcular o fatorial do número inserido pelo usuário.
- O processo pai aguarda o término do processo filho e, após a conclusão, exibe o resultado calculado.

### Requisitos
- Ambiente de desenvolvimento Linux (é recomendada a utilização de uma máquina virtual).
- Compilador C (como CodeBlocks).
