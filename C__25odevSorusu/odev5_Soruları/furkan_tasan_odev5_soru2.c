#include <stdio.h>

int main() {
    int seats[10] = {0}; // Koltukların boş olduğunu göstermek için 0
    int section, seat;

    while (1) {
        printf("Sigara icilen bolum icin 1'e, sigara icilmeyen bolum icin 2'ye basiniz: ");
        scanf("%d", &section);

        if (section == 1) { // Sigara icilen bolum
            printf("Lutfen 1 ile 5 arasinda bir koltuk seciniz: ");
            scanf("%d", &seat);
            if (seat >= 1 && seat <= 5) { // Geçerli bir koltuk numarası girildi
                if (seats[seat-1] == 0) { // Koltuk boş
                    seats[seat-1] = 1; // Koltuk rezerve edildi
                    printf("Sigara icilen bolumden %d numarali koltuk rezerve edildi.\n", seat);
                } else { // Koltuk dolu
                    printf("Maalesef %d numarali koltuk dolu.\n", seat);
                    printf("Sigara icilmeyen bolumden bir koltuk ister misiniz? (1: Evet, 0: Hayir): ");
                    int response;
                    scanf("%d", &response);
                    if (response == 1) {
                        section = 2;
                    }
                }
            } else { // Geçersiz bir koltuk numarası girildi
                printf("Gecersiz koltuk numarasi.\n");
            }
        } else if (section == 2) { // Sigara icilmeyen bolum
            printf("Lutfen 6 ile 10 arasinda bir koltuk seciniz: ");
            scanf("%d", &seat);
            if (seat >= 6 && seat <= 10) { // Geçerli bir koltuk numarası girildi
                if (seats[seat-1] == 0) { // Koltuk boş
                    seats[seat-1] = 1; // Koltuk rezerve edildi
                    printf("Sigara icilmeyen bolumden %d numarali koltuk rezerve edildi.\n", seat);
                } else { // Koltuk dolu
                    printf("Maalesef %d numarali koltuk dolu.\n", seat);
                    printf("Sigara icilen bolumden bir koltuk ister misiniz? (1: Evet, 0: Hayir): ");
                    int response;
                    scanf("%d", &response);
                    if (response == 1) {
                        section = 1;
                    }
                }
            } else { // Geçersiz bir koltuk numarası girildi
                printf("Gecersiz koltuk numarasi.\n");
            }
        } else { // Geçersiz bir bölüm numarası girildi
            printf("Gecersiz bolum numarasi.\n");
        }
    }
    
    return 0;
}
