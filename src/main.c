#include <stdbool.h>  // inclui o bool
#include <stdio.h>

#define TMP_FOLDER "tmp/"
#define SCRIPT_FILE "scripts/GUI.py"

/**
 * @brief Verifica a integridade do inventário
 * 
 * @return 1 se correu algo mal,0 se não acusar nada.
 * @author M.V.
 */
_Bool setup() {
  return 0;
}

int main(void) {
  if (setup()) goto end;

end:
  return 0;
}
