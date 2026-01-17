# Super Trunfo – Nível Aventureiro

## Descrição
Projeto desenvolvido em linguagem C como parte do **Desafio Nível Aventureiro** do jogo Super Trunfo.

Neste nível, o jogo evolui para um modelo **interativo**, permitindo que o usuário escolha, por meio de um **menu**, qual atributo será utilizado na comparação entre duas cartas de países.

O projeto utiliza estruturas de decisão `switch` e `if-else` aninhados, reforçando conceitos fundamentais da programação estruturada.

---

## Funcionalidades

- Cadastro de duas cartas de países
- Cálculo automático de:
  - Densidade demográfica
  - PIB per capita
- Menu interativo para escolha do atributo de comparação
- Comparação entre cartas com regras específicas por atributo
- Exibição clara do resultado da rodada
- Tratamento básico de entradas inválidas no menu

---

## Atributos disponíveis para comparação

- População (vence o maior valor)
- Área territorial (vence o maior valor)
- PIB (vence o maior valor)
- Pontos turísticos (vence o maior valor)
- Densidade demográfica (**vence o menor valor**)

> Regra especial:  
> Para a **densidade demográfica**, vence a carta com menor valor, pois representa melhor qualidade de vida (menor concentração populacional).

---

## Estruturas utilizadas

- `switch-case` para o menu de seleção
- `if-else` e `if-else` aninhados para comparação dos atributos
- Tipos de dados adequados (`int`, `float`, `unsigned long int`)
- Funções auxiliares para tratamento de entrada (`fgets`)

---

## Como compilar e executar

### Compilação
```bash
gcc super_trunfo.c -o super_trunfo
