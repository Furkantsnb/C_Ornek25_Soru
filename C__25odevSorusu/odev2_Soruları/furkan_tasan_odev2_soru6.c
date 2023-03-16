#include <stdio.h>

int main(void) {
  int mesafe, galon;
  float galonBasinaGidilenyol;

  printf("Kac kilometre yol yaptiniz? ");
  scanf("%d", &mesafe);
  printf("Kac galon benzin harcadiniz? ");
  scanf("%d", &galon);

 galonBasinaGidilenyol = (float) mesafe / galon;
  printf("Her galon icin %.2f kilometre yol yapilmis.\n", galonBasinaGidilenyol);

  return 0;
}
