
#include "stdio.h"
#include "stdlib.h"
#include "ht.h"
#include "list.h"
#include "misc.h"
//This is my code
struct sHashTable{
	tList l;
	int SIZE;	
	tList array[];
};

bool (*func_1)();

int (*func_2)();

tHashTable ht_initialize(int SIZE,bool (*compare_function)(),int(*hash_function)()){
		
		tHashTable h = "";
		h->SIZE = SIZE;
		func_1 = compare_function;
		func_2 = hash_function;
		
		for(int i=0;i<SIZE;i++){
			h->array[i] = list_initialize();
			
		}
		return h;
};
tHashTable ht_delete(tHashTable t, void* k){

	ht_foreach(t,list_remove);
	
	return t;
};
void ht_free(tHashTable k){
	
	for(int i=0;i<k->SIZE;i++){	
		
		list_free(k->array[i]);
	
	}
	free(k);

};
tHashTable ht_insert(tHashTable t, void* v){
	int sort = (int)v;
	sort = sort % t->SIZE;
	list_insert_beginning(t->array[sort],v);
	return t;
};
void *ht_lookup(tHashTable t, void* v){
		return list_find(t->array[0],func_1,v);
}

void ht_print(tHashTable k , void (*print_function)(void* d, bool last)){
	for(int i=0;i<k->SIZE;i++){
		printf("Bucket%d:",i+1);
		list_foreach(k->array[i],print_function);
		printf("\n");
	}
}
void 	ht_foreach(tHashTable t, void (*function)(void *,bool this)){
	for(int i=0;i<t->SIZE;i++){
		list_foreach(t->array[i],function);
	
	}

}
void       ht_foreach1(tHashTable, void (*function)(void *, void *), void*);
void       ht_foreach2(tHashTable,void (*function)(void *, void *, void *),void*, void*);










