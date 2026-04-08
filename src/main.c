#include <dirent.h>   // biblioteca para mexer com pastas
#include <stdbool.h>  // inclui o bool
#include <stdio.h>

/**
 * @brief Verifica a integridade do inventário
 * 
 * @return 1 se correu algo mal,0 se não acusar nada.
 * @author M.V.
 */
_Bool setup() {
}

int main(void) {
  if (setup()) goto end;



end:
  return 0;
}
