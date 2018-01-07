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

unsigned int ledgerSize(void);

void record(const char *file, const char *func, unsigned int line,
            void *allocated);


unsigned int ledgerSize(void){
  unsigned int i;

  i = sizeof(ledger)/sizeof(ledger_entry);

  return i;
}

void record(const char *file, const char *func, unsigned int line,
            void *allocated)
{
  int i;

  i = ledgerSize();

  ledger = realloc(ledger,sizeof(ledger)+sizeof(void*));

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
  unsigned int      size, sz, x;
  ledger_entry    *intermediate;

  sz = ledgerSize();

  for(x=0; x<sz; x++)
    if(ledger[x].pointer == block)
      break;

  x += 2;
  sz -= x;

  size = sizeof(ledger_entry) * sz;

  intermediate = (ledger_entry*) malloc(size);
  memcpy(intermediate, &ledger[x-1], size);

  memcpy(&ledger[x-2], intermediate, size);
  ledger = realloc(ledger, sizeof(ledger_entry) * (ledgerSize()-1));

  free(&file);
  free(&func);
  free(&line);
  free(&ignore_free_null_flag);

  free(block);
  free(intermediate);
}

void print(unsigned int i);

void print(unsigned int i)
{
  printf("En la linea %i "
         ,ledger[i].line);
  printf("De la funcion %s "
         ,ledger[i].function);
  printf("Del archivo %s "
         ,ledger[i].file);
  printf("no se liberado 0x%X\n"
         ,(int)ledger[i].pointer);
}

void MemoryManager_DumpMemoryLeaks (void)
{
  unsigned int i,sz;

  sz = ledgerSize();

  for(i=0;i<sz;i++)
    print(i);

  free(ledger);
}
