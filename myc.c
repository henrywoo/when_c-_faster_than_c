#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void *bsearch(const void *key, const void *base, size_t num, size_t size,
	      int (*cmp)(const void *key, const void *elt))
{
	const char *pivot;
	int result;

	while (num > 0) {
		pivot = base + (num >> 1) * size;
		result = cmp(key, pivot);
		if (result == 0)
			return (void *)pivot;
		if (result > 0) {
			base = pivot + size;
			num--;
		}
		num >>= 1;
	}
	return NULL;
}

typedef struct{
  int v;
  char extra;
} node;

int cmp(const node* a, const node* b){
  if(a->v < b->v) return -1;
  if(a->v > b->v) return 1;
  return 0;
}

int main(){
  static const int z=1024*1024*256;
  node* ns = (node*)malloc(z*sizeof(node));
  for(int i=0;i<z;i++){
    ns[i].v=i;
  }

  node t;
  for(int i=0;i<z;i++){
    t.v=i;
    node* r=(node*)bsearch(&t,&ns[0],z,sizeof(node),cmp);
    assert(r->v==i);
  }
  free(ns);
  return 0;
}
