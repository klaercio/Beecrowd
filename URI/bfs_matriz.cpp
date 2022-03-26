#include <stdio.h>
#include <stdlib.h>

typedef struct {
          int **Matriz, vertices, arestas;
        } Grafo;

int *Pre;

void bfs(Grafo G, int v);

int main() {
  int i, u, v;
  char x, y;
  Grafo G;

  scanf("%d %d", &G.vertices, &G.arestas);
  Pre = (int *) malloc(G.vertices * sizeof(int));
  G.Matriz = (int **) calloc(G.vertices, sizeof(int *));

  for (i = 0; i < G.vertices; i++)
    G.Matriz[i] = (int *) calloc(G.vertices, sizeof(int));

  for (i = 0; i < G.arestas; i++) {
    scanf(" %c %c", &x, &y);
    u = x - 'r';
    v = y - 'r';
    G.Matriz[u][v] = G.Matriz[v][u] = 1;
  }

  bfs(G, 1);
  free(Pre);
  free(G.Matriz);
  return 0;
}

void bfs(Grafo G, int s) {
  int u, v, cont = 0, Fila[G.vertices], fim = -1, inicio = 0;

  for (v = 0; v < G.vertices; v++)
    Pre[v] = -1;

  Pre[s] = cont++;
  Fila[++fim] = s;
  printf("%c", s + 'r');

  while (inicio <= fim) {
    u = Fila[inicio++];

    for (v = 0; v < G.vertices; v++)
      if (G.Matriz[u][v] && Pre[v] == -1) {
        Pre[v] = cont++;
        Fila[++fim] = v;
        printf(" %c", v + 'r');
      }
  }
}
