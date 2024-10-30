
# Exercise 01 : ft_boolean.h

Este arquivo de cabeçalho `ft_boolean.h` é uma definição de tipos e macros que fornece uma estrutura para criar uma função que distingue números pares de ímpares e exibe mensagens adequadas. Aqui está uma explicação detalhada de cada componente e seu propósito.

## Estrutura e Função do Cabeçalho `ft_boolean.h`

O `ft_boolean.h` define componentes fundamentais para trabalhar com valores booleanos e mensagens de saída, especificamente:

### 1. Diretivas de Preprocessador (`#ifndef`, `#define`, `#endif`)
Essas diretivas são utilizadas para proteger o cabeçalho de inclusão múltipla. Em C, se um cabeçalho for incluído várias vezes, pode ocorrer uma duplicação de definições. Com essas diretivas, o compilador inclui o conteúdo do arquivo apenas uma vez por compilação.

- `#ifndef FT_BOOLEAN_H`: Verifica se `FT_BOOLEAN_H` não foi definido anteriormente.
- `#define FT_BOOLEAN_H`: Define `FT_BOOLEAN_H` se ele ainda não estiver definido.
- `#endif`: Fecha a proteção, garantindo que o conteúdo só seja incluído uma vez.

### 2. Inclusão da Biblioteca `<unistd.h>`
- `#include <unistd.h>` adiciona funções padrão do sistema Unix, como `write`, que é usada para imprimir dados no terminal. No caso, `write` é necessária para a função `ft_putstr`, que imprime uma string no terminal caractere por caractere.

### 3. Definição do Tipo `t_bool`
- `typedef int t_bool;`: Em C, não existe um tipo booleano nativo (ao menos, não até o padrão C99). Por isso, aqui estamos definindo `t_bool` como um tipo `int`, para que possamos representar valores booleanos.
- `t_bool` será usado como tipo de retorno de funções que retornam `TRUE` ou `FALSE`.

### 4. Macros para Valores Booleanos: `TRUE` e `FALSE`
- `#define TRUE 1` e `#define FALSE 0`: Essas macros são definições de valores que representam verdadeiro (1) e falso (0).
- Essas definições permitem que o código trabalhe com valores booleanos de forma mais legível, usando `TRUE` e `FALSE` em vez de números.

### 5. Macro para Verificação de Número Par: `EVEN`
- `#define EVEN(n) ((n) % 2 == 0)`: Essa macro verifica se um número `n` é par.
- O operador `%` calcula o resto da divisão de `n` por 2. Se o resultado for zero (`n % 2 == 0`), `n` é par, caso contrário, é ímpar.
- Essa macro facilita a verificação, permitindo que o programa determine se o número de argumentos é par ou ímpar com uma expressão simples e reutilizável.

### 6. Mensagens para Saída: `EVEN_MSG` e `ODD_MSG`
- `#define EVEN_MSG "I have an even number of arguments.\n"` e `#define ODD_MSG "I have an odd number of arguments.\n"`: Essas macros definem mensagens que o programa imprimirá dependendo do número de argumentos passados.
- `EVEN_MSG` será exibida se o número de argumentos for par, e `ODD_MSG` será exibida se for ímpar.
- O `\n` no final de cada mensagem representa uma quebra de linha, garantindo que a saída fique bem formatada.

### 7. Código de Sucesso: `SUCCESS`
- `#define SUCCESS 0`: Define um código de retorno para indicar o sucesso da execução do programa.
- Em C, retornar `0` (ou `SUCCESS`) na função `main` indica que o programa foi executado com êxito.

## Como Esse Cabeçalho Funciona no Contexto do Programa

Quando o arquivo `ft_boolean.h` é incluído em um programa em C, ele permite que o programa use tipos e macros definidos para verificar a paridade de argumentos e exibir uma mensagem apropriada. Aqui está o fluxo básico do que acontece:

### Exemplo do `main` Funcionando com `ft_boolean.h`

O programa em `main.c` pode ser estruturado como este exemplo, com o cabeçalho `ft_boolean.h`:

```c
#include "ft_boolean.h"

void ft_putstr(char *str) {
    while (*str) {
        write(1, str++, 1);
    }
}

t_bool ft_is_even(int nbr) {
    return (EVEN(nbr) ? TRUE : FALSE);
}

int main(int argc, char **argv) {
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE) {
        ft_putstr(EVEN_MSG);
    } else {
        ft_putstr(ODD_MSG);
    }
    return (SUCCESS);
}
```

1. **Função `ft_putstr`**: Esta função percorre cada caractere da string e usa `write` para exibi-los no terminal. A string será `EVEN_MSG` ou `ODD_MSG`, dependendo da paridade do número de argumentos.
2. **Função `ft_is_even`**: Usa a macro `EVEN` para verificar se o número é par e retorna `TRUE` ou `FALSE`.
3. **Função `main`**: Determina a mensagem a ser impressa com base no número de argumentos.

Com essa estrutura, o programa imprimirá:
- `"I have an even number of arguments.\n"` se o número de argumentos for par.
- `"I have an odd number of arguments.\n"` se o número de argumentos for ímpar.

Essas macros e tipos tornam o código mais legível e modular.
