# Super Trunfo – Projeto em C

Projeto desenvolvido em linguagem C como parte da disciplina **Introdução à Programação de Computadores**,
abrangendo os desafios **Nível Novato**, **Nível Aventureiro** e **Nível Mestre** do jogo Super Trunfo.

---

## 🔰 Nível Novato

### Descrição
Implementação básica do jogo Super Trunfo com cadastro de duas cartas e comparação simples de atributos,
utilizando estruturas `if` e `if-else`.

### Funcionalidades
- Cadastro de duas cartas de países
- Cálculo automático de:
  - Densidade demográfica
  - PIB per capita
- Comparação direta de atributos
- Exibição do resultado da comparação

---

## 🧭 Nível Aventureiro

### Descrição
Evolução do jogo com **interatividade**, permitindo que o usuário escolha qual atributo será usado
na comparação entre as cartas.

### Funcionalidades
- Menu interativo usando `switch-case`
- Escolha do atributo de comparação
- Comparação com regras específicas por atributo
- Regra especial para densidade demográfica
- Tratamento de empate
- Mensagens claras ao usuário

---

## 🏆 Nível Mestre

### Descrição
Implementação de **comparações avançadas**, permitindo a escolha de **dois atributos diferentes**
para comparação entre as cartas.

### Funcionalidades
- Escolha de dois atributos distintos
- Menu dinâmico (o segundo atributo não repete o primeiro)
- Comparação individual dos atributos
- Soma dos atributos para decisão final
- Tratamento completo de empates
- Uso de:
  - `switch-case`
  - `if-else` e `if-else` aninhados
  - Operador ternário

---

## 📊 Atributos Disponíveis para Comparação

1. População (vence o maior valor)
2. Área territorial (vence o maior valor)
3. PIB (vence o maior valor)
4. Pontos turísticos (vence o maior valor)
5. Densidade demográfica (**vence o menor valor**)

> **Regra especial:**  
> Para densidade demográfica, vence a carta com **menor valor**, pois representa menor concentração populacional
> e melhor qualidade de vida.

---

## ⚙️ Estruturas Utilizadas

- `switch-case`
- `if-else` e `if-else` aninhados
- Operador ternário
- Tipos de dados: `int`, `float`, `unsigned long int`
- Funções auxiliares para leitura segura (`fgets`)

---

## ▶️ Como Compilar e Executar

### Compilação
```bash
gcc super_trunfo.c -o super_trunfo
