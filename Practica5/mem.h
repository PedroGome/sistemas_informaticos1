#include<stdlib.h>

void ** ledger;

void* MemoryManager_malloc(const char *file, const char *func,
                           unsigned int line, size_t size){
  void * allocated;
  int point;

  point = sizeof(ledger)/sizeof(void*);

  allocated = malloc(size);
  ledger = malloc(sizeof(ledger)+sizeof(void*));
  ledger[point+1] = allocated;

  return allocated;
}

void * MemoryManager_calloc (const char *file, const char *func,
                             unsigned int line, size_t size){
  void * allocated;
  int point;

  point = sizeof(ledger)/sizeof(void*);

  allocated = calloc(sizeof(ledger)/sizeof(void*),);
  ledger = malloc(sizeof(ledger)+sizeof(void*));
  ledger[point+1] = allocated;

  return allocated;
}

void * MemoryManager_realloc (const char *file, const char *func,
                              unsigned int line, size_t size,
                              void* block);

void MemoryManager_free (const char *file, const char *func,
                         unsigned int line, void* block,
                         int ignore_free_null_flag);

void MemoryManager_DumpMemoryLeaks (void);

