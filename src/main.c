#include <dirent.h>   // biblioteca para mexer com pastas
#include <stdbool.h>  // inclui o bool
#include <stdio.h>
#include "data_types.h"

// Paths
const signed char dataFolder[] = "/home/MestreVerde/Programação/Projetos_de_Programação/Invent-rio-componentes-el-tricos-main/data";

enum componenteSection { NONE = 0, Resistencia = 1, Condensador = 2, Bobina = 3 };

/**
 * @brief Verifica a integridade do inventário
 * 
 * @return 1 se correu algo mal,0 se não acusar nada.
 * @author M.V.
 */
_Bool setup() {
  DIR* dir = opendir(dataFolder);

  if (dir == NULL) {
    perror("Não foi possível abrir a pasta");
    return 1;
  }

  struct dirent* entry;
  while ((entry = readdir(dir)) != NULL) {
    printf("%s\n", entry->d_name);  // imprime cada arquivo/pasta
  }

  closedir(dir);  // fecha o diretório
  return 0;
}

int main(void) {
  if (setup()) goto end;

end:
  return 0;
}
