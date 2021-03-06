#include<stdlib.h>
#include<string.h>
#include<stdio.h>

typedef struct{
  void          *pointer;
  char          *file;
  char          *function;
  unsigned int  line;
}ledger_entry;

ledger_entry ** ledger;

unsigned int ledgerSize(void);

void record(const char *file, const char *func, unsigned int line,
            void *allocated);


unsigned int ledgerSize(void){
  unsigned int i;

  i = sizeof(ledger)/sizeof(ledger_entry*);

  return i;
}

void record(const char *file, const char *func, unsigned int line,
            void *allocated)
{
  int i;
  ledger_entry *b;

  b = (ledger_entry *) malloc(sizeof(ledger_entry));
  i = ledgerSize()-1;

  /* printf("sizeof ledger: %d\n\n", (int)sizeof(ledger)); */

  ledger = realloc(ledger,sizeof(ledger)+sizeof(ledger_entry*));
  ledger[i] = b;

  ledger[i]->function = (char *) malloc(sizeof(func));
  ledger[i]->file = (char *) malloc(sizeof(file));

  ledger[i]->pointer = allocated;
  strcpy(ledger[i]->file, file);
  strcpy(ledger[i]->function, func);
  ledger[i]->line = line;
}

void* MemoryManager_malloc(const char *file, const char *func,
                           unsigned int line, size_t size)
{
  void *allocated=0x0;

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
  unsigned int      size, sz, x, nsize;

  sz = ledgerSize();

  for(x=0; x<sz; x++)
    if(ledger[x]->pointer == block)
      break;

  if(x == sz) {
    printf("Puntero no encontrado\n");
    return;}

  free(block);

  sz -= 1+x;

  size = sizeof(ledger_entry) * sz;
  nsize = ledgerSize();
  nsize = sizeof(ledger_entry) * (nsize-1);

  memmove(&ledger[x], &ledger[x+1], size);
  ledger = realloc(ledger, nsize);
}

void print(unsigned int i);

void print(unsigned int i)
{
  printf("En la linea %i "
         ,ledger[i]->line);
  printf("de la funcion %s "
         ,ledger[i]->function);
  printf("del archivo %s "
         ,ledger[i]->file);
  printf("no se liberado 0x%X\n"
         ,(int)ledger[i]->pointer);
}

void MemoryManager_DumpMemoryLeaks (void)
{
  unsigned int i,sz;

  sz = ledgerSize();

  if (ledger == 0x0)
    free(ledger);

  else
    {
      for(i=0;i<sz;i++)
        print(i);
      free(ledger);
    }
}
