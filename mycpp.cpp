#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

template <typename T>
const T *bsearch(const T *key, const T *base, size_t num,/* size_t size,*/
    int (*cmp)(const T *key, const T *elt))
{
  const T *start=base, *end=start+num, *pivot;
  int result;

  while (start < end) {
    pivot = start + ((end-start) >> 1);
    result = cmp(key, pivot);
    if (result == 0)
      return pivot;
    if (result > 0) {
      start = pivot + 1;
    }else
      end = pivot;
  }
  return NULL;
}

struct node{
  int v;
  char extra;
};

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
    auto r=bsearch<node>(&t,&ns[0],z,/*sizeof(node),*/cmp);
    assert(r->v==i);
  }
  free(ns);
  return 0;
}
