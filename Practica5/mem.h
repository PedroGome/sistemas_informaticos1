#include<stdlib.h>
#include<string.h>
#include<stdio.h>

typedef struct{
  void          *pointer;
  char          file[20];
  char          function[20];
  unsigned int  line;
}ledger_entry;

ledger_entry *ledger;

void record(const char *file, const char *func, unsigned int line,
            void *allocated)
{
  int i;

  i = 1 + sizeof(ledger)/sizeof(ledger_entry);

  allocated = malloc(sizeof(ledger)+sizeof(ledger_entry));
  ledger = malloc(sizeof(ledger)+sizeof(void*));

  ledger[i].pointer = allocated;
  strcpy(ledger[i].file, file);
  strcpy(ledger[i].function, func);
  ledger[i].line = line;
}

void* MemoryManager_malloc(const char *file, const char *func,
                           unsigned int line, size_t size)
{
  void *allocated;

  allocated = malloc(size);
  record(file, func, line, allocated);

  return allocated;
}

void * MemoryManager_calloc (const char *file, const char *func,
                             unsigned int line, size_t nmeb,
                             size_t size)
{
  void *allocated;

  allocated = calloc(nmeb,size);
  record(file, func, line, allocated);

  return allocated;
}

void * MemoryManager_realloc (const char *file, const char *func,
                              unsigned int line, size_t size,
                              void* block)
{
  void *allocated;

  allocated = realloc(block, size);
  record(file, func, line, allocated);

  return allocated;
}

void MemoryManager_free (const char *file, const char *func,
                         unsigned int line, void* block,
                         int ignore_free_null_flag)
{
  free(block);

  printf("I am way too tired to implement this function");
}

void MemoryManager_DumpMemoryLeaks (void)
{
  printf("I am way too tired to implement this function");
}

