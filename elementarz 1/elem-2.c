#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   int i;
   for (i = sizeof(tabela)/sizeof(int)-1;i>=0;i--){
	printf("%d ",tabela[i]);  
   }
   
   return 0;
}
