# Projetos Iniciais em C

Um repositório dedicado ao aprendizado e prática dos fundamentos da linguagem de programação C, iniciado em janeiro de 2026.

## 📋 Sobre o Repositório

Este repositório marca o início de uma jornada de aprendizado na linguagem C, uma das linguagens de programação mais fundamentais e amplamente utilizadas em sistemas operacionais, desenvolvimento de software de baixo nível e educação em ciência da computação.

## 💻 Tecnologias Utilizadas

- **Linguagem C (100%)** - Todo o código deste repositório é escrito em C puro

## 🎯 Objetivo do Repositório

Este repositório tem como propósito:

1. **Aprender os fundamentos** da linguagem C desde o início
2. **Praticar conceitos básicos** como variáveis, estruturas de controle, funções e ponteiros
3. **Desenvolver lógica de programação** através de exercícios práticos
4. **Criar uma base sólida** para avançar para tópicos mais complexos
5. **Documentar o progresso** de aprendizado na linguagem

## 🚀 Como Compilar e Executar os Projetos

### Requisitos Básicos
- Compilador de C instalado (GCC, Clang, ou similar)
- Terminal ou linha de comando
- Editor de código (VS Code, Code::Blocks, Dev-C++, etc.)

### Passos para Compilar no Linux

#### 1. Verificar se o GCC está instalado
```bash
gcc --version
```

Se não estiver instalado, instale com o gerenciador de pacotes da sua distribuição:

**Ubuntu/Debian:**
```bash
sudo apt update
sudo apt install gcc
```

**Fedora/RHEL/CentOS:**
```bash
sudo dnf install gcc
```

**Arch Linux/Manjaro:**
```bash
sudo pacman -S gcc
```

#### 2. Navegar até a pasta do projeto
```bash
cd Projetos-iniciais-C/Aula1
```

#### 3. Compilar um arquivo C
```bash
# Compilação básica
gcc -o programa programa.c

# Compilação com avisos ativados (recomendado para aprendizado)
gcc -Wall -Wextra -o programa programa.c

# Compilação com informações de depuração
gcc -g -o programa programa.c
```

#### 4. Executar o programa compilado
```bash
./programa
```

#### 5. Compilação e execução em um único comando (para testes rápidos)
```bash
gcc -o programa programa.c && ./programa
```

#### 6. Usando Makefile (opcional para projetos com múltiplos arquivos)
Se existir um arquivo Makefile:
```bash
make
```

Ou compile manualmente com múltiplos arquivos:
```bash
gcc -o programa main.c funcoes.c biblioteca.c
```

### Passos para Compilar no Windows
```bash
# Com MinGW ou similar
gcc -o programa.exe programa.c
programa.exe
```

## 📚 Tópicos Esperados em Aulas Iniciais de C

Baseado no padrão de cursos de C para iniciantes, este repositório provavelmente abordará:

- **Sintaxe básica** da linguagem C
- **Tipos de dados** primitivos (int, float, char, double)
- **Estruturas de controle** (if-else, switch, for, while, do-while)
- **Funções** e escopo de variáveis
- **Arrays** e strings
- **Ponteiros** (conceito fundamental em C)
- **Alocação de memória** (malloc, free)
- **Estruturas** (struct)

## 🔧 Configuração do Ambiente de Desenvolvimento

### Opções Recomendadas para Linux:
1. **GCC** - Compilador GNU para C (padrão na maioria das distribuições)
2. **Clang** - Alternativa ao GCC, com mensagens de erro mais amigáveis
3. **VS Code** com extensão C/C++ - Editor com bom suporte para desenvolvimento em C
4. **Code::Blocks** - IDE específica para C/C++

### Verificação da Instalação no Linux:
```bash
# Verificar GCC
gcc --version

# Verificar Clang (se instalado)
clang --version

# Verificar Make
make --version
```

## 💡 Dicas para Iniciantes em C

1. **Comece com programas simples** - "Hello World" é o ponto de partida clássico
2. **Compreenda os ponteiros** - este é o conceito mais desafiador e importante
3. **Pratique a alocação de memória** - e sempre libere o que alocou!
4. **Use depuradores** (gdb) para entender o fluxo do programa
5. **Leia códigos de outros** para aprender diferentes abordagens

## 🤝 Contribuições

Como repositório de aprendizado, o foco principal é documentar a evolução no domínio da linguagem C. Sugestões de exercícios, correções de código ou melhorias na documentação são bem-vindas.

**Autor:** [Leandro Stanger](https://github.com/LeandroStanger)  
**Tipo:** Repositório de aprendizado em linguagem C  

*Este repositório representa o ponto de partida para dominar uma das linguagens de programação mais importantes e fundamentais da computação.*
