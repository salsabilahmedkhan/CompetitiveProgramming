#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10100
int rank[MAX], p[MAX],c;
char blank[MAX];

struct point {
    double x, y;
} V[MAX]={0.0,0.0};

struct edge {
    int u, v;
    double w;
} A[MAX]={0,0,0.0}, E[MAX]={0,0,0.0};

int cmp(const void *a, const void *b) {
    /*return (((struct edge*)a)->w - ((struct edge*)b)->w);*/
    if (((struct edge*)a)->w > ((struct edge*)b)->w) return 1;
    else if (((struct edge*)a)->w < ((struct edge*)b)->w) return -1;
    else return 0;
}

double dis(int u, int v) {
    double length= sqrt(pow(V[u].x-V[v].x,2.0)+pow(V[u].y-V[v].y,2.0));
    c++;
    printf("length: %lf\n",length);
    return length;
}

void make_set(int x) {
    p[x]=x;
    rank[x]=0;
}

int find_set(int x) {
    if (x!=p[x]) {
        p[x]=find_set(p[x]);
    }
    return p[x];
}

void link(int x, int y) {
    if (rank[x]>rank[y]) {
        p[y]=x;
    } else {
        p[x]=y;
        if (rank[x]==rank[y]) {
            rank[y]=rank[y]+1;
        }
    }
}

void uni(int x, int y) {
    link(find_set(x),find_set(y));
}

int kruskal(int num_vertex, int num_edge) {

    int idx_A=0, i;

    for (i=0 ; i<num_vertex ; i++) {
        make_set(i);
    }

    qsort(E,num_edge,sizeof(struct edge),cmp);

    for (i=0, idx_A=0 ; i<num_edge ; i++) {
        if (find_set(E[i].u)!=find_set(E[i].v)) {
            A[idx_A++]=E[i];
            uni(E[i].u,E[i].v);
        }
    }

    return idx_A;

}


int input(int num_vertex) {

    int i;

    for (i=0 ; i<num_vertex ; i++) {
        scanf("%lf %lf",&V[i].x,&V[i].y);
    }

    return num_vertex;
}

int edgify(int num_vertex) {

    int i, j, k;

    for (i=0, k=0 ; i<num_vertex ; i++) {
        for (j=0 ; j<num_vertex ; j++) {
            E[k].u = i;
            E[k].v = j;
            E[k].w = dis(i,j);
            k++;
        }
    }

    return k;

}


int main() {

    int i, num_vertex, test, blanker=1;
    double sum;

    scanf("%d",&test);
    getchar();

    while (test--) {

        gets(blank);
    c=0;
        scanf("%d",&num_vertex);
        getchar();

        sum = 0.0;

            int num_edge = edgify(input(num_vertex));

            int tree_count = kruskal(num_vertex,num_edge);

            for (i=0; i<tree_count ; i++) {
                sum = sum + A[i].w;
            }
            if (blanker++>1) putchar('\n');
            printf("%.2lf\n",sum);
            printf("%d\n",c);
    }

    return 0;
}
