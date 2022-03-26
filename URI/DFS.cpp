#include <bits/stdc++.h>

typedef struct graph *Graph;

typedef struct node *Node;

struct graph {
  Node *lista;
  Node raiz;
};

struct node {
  char valor;
  Node *prox;
};

int main() {




}

static void dfs( Graph G) {
  for (node a = G->lista[G.raiz]; a != NULL; a = a->prox) {
    node w = a->w;
      dfs( G, w);
  }
}
