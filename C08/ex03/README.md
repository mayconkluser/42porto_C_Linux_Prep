
# Exercise 03 : ft_point.h

Este repositório contém um exemplo de como definir e usar um arquivo de cabeçalho em C para representar uma estrutura `t_point` com coordenadas `x` e `y`.

## 1. O que é um arquivo de cabeçalho (`ft_point.h`)?

- Arquivos de cabeçalho em C são usados para definir estruturas, macros, funções e variáveis que podem ser compartilhadas entre vários arquivos de um projeto.
- O arquivo `ft_point.h` define uma estrutura chamada `t_point` que representa um ponto em um sistema de coordenadas com dois valores inteiros `x` e `y`.

### Definição de `ft_point.h`

```c
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
    int x;
    int y;
}   t_point;

#endif
```

- **Guarda de inclusão**: As linhas `#ifndef FT_POINT_H`, `#define FT_POINT_H` e `#endif` são usadas para garantir que o conteúdo do arquivo seja incluído apenas uma vez no projeto, evitando erros de redefinição durante a compilação.
- **`typedef struct`**: A declaração `typedef struct s_point {...} t_point;` define uma estrutura chamada `s_point` com dois membros: `int x` e `int y`. `typedef` permite que a estrutura seja referida pelo nome `t_point` sem precisar usar a palavra `struct` todas as vezes.
  - `int x` e `int y` são variáveis que representam as coordenadas de um ponto.

## 2. O Código que usa `ft_point.h`

```c
#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);
    return (0);
}
```

- **`#include "ft_point.h"`**: Inclui o conteúdo do arquivo `ft_point.h` no arquivo de código, permitindo que a estrutura `t_point` seja usada.
- **Função `set_point`**: Esta função recebe um ponteiro para uma estrutura `t_point` e define os valores `x` e `y` do ponto para `42` e `21`, respectivamente.
  - `point->x` e `point->y` usam a sintaxe de ponteiro para acessar os membros da estrutura `t_point` apontada por `point`.
- **`main`**: A função `main` cria uma variável `point` do tipo `t_point`. A função `set_point` é chamada, passando o endereço de `point` com `&point`. Isso permite que `set_point` modifique diretamente os valores de `x` e `y` de `point`.

## Resumo

- O arquivo `ft_point.h` define uma estrutura para representar um ponto em um plano de coordenadas com dois inteiros, `x` e `y`.
- O programa define e inicializa uma instância dessa estrutura na função `main` e usa uma função para definir os valores das coordenadas.
- Essa abordagem ilustra a manipulação de estruturas, passagem de ponteiros para funções, e a modularização com arquivos de cabeçalho em C, que são conceitos fundamentais na programação C.
