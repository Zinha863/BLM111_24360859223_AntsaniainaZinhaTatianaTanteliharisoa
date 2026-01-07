#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

#define GEZEGEN_SAYISI 8

char* GEZEGEN_ISIMLERI[8] = {
    "Merkur", "Venus", "Dunya", "Mars",
    "Jupiter", "Saturn", "Uranus", "Neptun"
};

void deneyler(){
    printf("1. Serbest Dusme Deneyi\n2. Yukari Atis Deneyi\n3. Agirlik Deneyi\n");
    printf("4. Kutlecekimsel Potansiyel Enerji Deneyi\n5. Hidrostatik Basinc Deneyi\n");
    printf("6. Arsimet Kaldirma Kuvveti Deneyi\n7. Basit Sarkac Periyodu Deneyi\n");
    printf("8. Sabit Ip Gerilmesi Deneyi\n9. Asansor Deneyi\n");
    printf("-1. Cikis\n");
    printf("\n-----------***-----------\n");
}

float mutlakDegeri(float n){
    return (n<0)?-n:n; //ternary operatör kullanımı
}

void serbestDusme(float* g){
    float sure;
    float* ptr=g; // Yerçekimi dizisi için pointer
    char** isim_ptr= GEZEGEN_ISIMLERI; // İsim dizisi için pointer)
    printf("\t\tSerbest Dusme Deneyi yapiliyor......\n");
    printf("Sure saniye cinsinden giriniz:\n-->");
    scanf("%f", &sure);
    sure=mutlakDegeri(sure);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
        float yol = 0.5*(*ptr)*(sure*sure);
        printf("%s gezegeni icin serbest dusme %.2f metredir.\n", *isim_ptr, yol);
        ptr++;  // Pointer aritmetiği
        isim_ptr++;  // Pointer aritmetiği
    }
}

void yukariAtis(float* g){
    float hiz;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Yukari Atis Deneyi yapiliyor......\n");
    printf("Cismin kac hizla firlatildigi giriniz:(m/s)\n-->");
    scanf("%f", &hiz);
    hiz=mutlakDegeri(hiz);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
        float yukseklik= (hiz*hiz)/(2*(*ptr));
        printf("%s gezegeni icin cismin maksimum cikalabilecegi yukseklik %.2f metredir.\n", *isim_ptr, yukseklik);
        ptr++;
        isim_ptr++;
    }
}

void agirlik(float* g){
    float kutle;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Agirlik Deneyi yapiliyor......\n");
    printf("Kutlesi kg cinsinden giriniz:(kg)\n-->");
    scanf("%f",&kutle);
    kutle=mutlakDegeri(kutle);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
        float agirligi= kutle*(*ptr);
        printf("%s gezegeni icin cismin agirligi %.2f N dir.\n", *isim_ptr, agirligi);
        ptr++;
        isim_ptr++;
    }
}

void potansiyel_enerji(float* g){
    float yukseklik1, kutle1;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Kutlecekimsel Potansiyel Enerji Deneyi yapiliyor......\n");
    printf("Kutlesi kg cinsinden giriniz:(kg)\n-->");
    scanf("%f",&kutle1);
    kutle1=mutlakDegeri(kutle1);
    printf("Yuksekligi metre cinsinden giriniz:(m)\n-->");
    scanf("%f", &yukseklik1);
    yukseklik1=mutlakDegeri(yukseklik1);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
        float enerji= kutle1*(*ptr)*yukseklik1;
        printf("%s gezegeni icin cismin potansiyel enerjisi(Ep) %.2f J dir.\n", *isim_ptr, enerji);
        ptr++;
        isim_ptr++;
    }
}

void hidrostatik_basinc(float* g){
    float yogunluk, derinlik;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Hidrostatik Basinc Deneyi yapiliyor......\n");
    printf("Sivinin yogunlugunu kg/m3 cinsinden giriniz:(kg/m3)\n-->");
    scanf("%f",&yogunluk);
    yogunluk=mutlakDegeri(yogunluk);
    printf("Derinligi metre cinsinden giriniz:(m)\n-->");
    scanf("%f", &derinlik);
    derinlik=mutlakDegeri(derinlik);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
    float basinc= yogunluk*(*ptr)*derinlik;
    printf("%s gezegeni icin sivinin uyguladigi hidrostatik basinc(Pa) %.2f Pa dir.\n", *isim_ptr, basinc);
    ptr++;
    isim_ptr++;
    }
}

void kaldirma_kuvveti(float* g){
    float yogunluk1, batan_hacmi;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Arsimet Kaldirma Kuvveti Deneyi yapiliyor......\n");
    printf("Sivinin yogunlugunu kg/m3 cinsinden giriniz:(kg/m3)\n-->");
    scanf("%f",&yogunluk1);
    yogunluk1=mutlakDegeri(yogunluk1);
    printf("Batan hacmi (V) m3 cinsinden giriniz:(m3)\n-->");
    scanf("%f",&batan_hacmi);
    batan_hacmi=mutlakDegeri(batan_hacmi);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
    float kuvvet= yogunluk1*(*ptr)*batan_hacmi;
    printf("%s gezegeni icin sivi içerisindeki cisme uygulanan kaldirma kuvvet(Fk) %.2f N dir.\n", *isim_ptr, kuvvet);
    ptr++;
    isim_ptr++;
    }
}

void sarkac_periyodu(float* g){
    float uzunluk;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Basit Sarkac Periyodu Deneyi yapiliyor......\n");
    printf("Sarkacin uzunlugu metre cinsinden giriniz:(m)\n-->");
    scanf("%f", &uzunluk);
    uzunluk=mutlakDegeri(uzunluk);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
    float sure1= 2*PI*sqrt(uzunluk/(*ptr));
    printf("%s gezegeni icin gecen sure %.2f s dir.\n", *isim_ptr, sure1);
    ptr++;
    isim_ptr++;
    }
}

void ip_gerilmesi(float* g){
    float kutle4;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Sabit Ip Gerilmesi Deneyi yapiliyor......\n");
    printf("Kutlesi kg cinsinden giriniz:(kg)\n-->");
    scanf("%f",&kutle4);
    kutle4=mutlakDegeri(kutle4);
    for (int i=0; i<GEZEGEN_SAYISI;i++){
        float kuvvet1= kutle4*(*ptr);
        printf("%s gezegeni icin ipin gerilme kuvveti(T) %.2f N dir.\n", *isim_ptr, kuvvet1);
        ptr++;
        isim_ptr++;
    }
}

void asansor(float* g){
    float ivme, kutle5, agirligi1;
    int durum;
    float* ptr=g;
    char** isim_ptr= GEZEGEN_ISIMLERI;
    printf("Asansor Deneyi yapiliyor......\n");
    printf("Cismin kutlesi kg cinsinden giriniz:(kg)\n-->");
    scanf("%f",&kutle5);
    kutle5=mutlakDegeri(kutle5);
    printf("Asansorun ivmesi giriniz(m/s2):\n-->");
    scanf("%f", &ivme);
    float a=mutlakDegeri(ivme);

    printf("Durumu seciniz:\n");
    printf("1 - Yukari cikarken hizlaniyor\n");
    printf("2 - Asagi inerken yavasliyor\n");
    printf("3 - Asagi inerken hizlaniyor\n");
    printf("4 - Yukari cikarken yavasliyor\n-->");
    scanf("%d", &durum);

    for (int i=0; i<GEZEGEN_SAYISI;i++){
        if (durum==1 || durum==2)
            agirligi1=kutle5*(*ptr+a);
        else if (durum==3 || durum==4)
            agirligi1=kutle5*(*ptr-a);
        else{
            printf("Gecersiz secim!\n");
            return;
        }

        printf("%s gezegeni icin cismin etkin agirligi(N) %.2f N dir.\n", *isim_ptr, agirligi1);
        ptr++;
        isim_ptr++;
    }
}

int main()
{
    printf("\t\t\tDeneyler baslayalim\n\n");
    float yer_cekimi[8]={3.70, //Merkür
                    8.87, //Venüs
                    9.81, //Dünya
                    3.73, //Mars
                    24.79, //Jüpiter
                    10.44, //Satürn
                    8.69, //Üranüs
                    11.15  //Neptün
                    };
    int calisma=1;
    int deney_numara;
    char adi[100]={};
    printf("Adiniz giriniz:");
    gets(adi);

    while (calisma==1){
        printf("\n-----------***-----------\n");
        deneyler();
        printf("\nHangi deney yapmak istiyorsunuz?(Deneyinin numarasi giriniz)\n-->");
        if (scanf("%d", &deney_numara) != 1) {
        printf("Lutfen sadece sayi giriniz!\n");
        while (getchar() != '\n');
        continue;
        }
        switch (deney_numara){
        case -1:
            printf("\n\t\tProgram bitirildi.");
            calisma=0;
            break;
        case 1:
            serbestDusme(yer_cekimi);
            break;
        case 2:
            yukariAtis(yer_cekimi);
            break;
        case 3:
            agirlik(yer_cekimi);
            break;
        case 4:
            potansiyel_enerji(yer_cekimi);
            break;
        case 5:
            hidrostatik_basinc(yer_cekimi);
            break;
        case 6:
            kaldirma_kuvveti(yer_cekimi);
            break;
        case 7:
            sarkac_periyodu(yer_cekimi);
            break;
        case 8:
            ip_gerilmesi(yer_cekimi);
            break;
        case 9:
            asansor(yer_cekimi);
            break;
        default:
            printf("\n\t\tGirdiniz hane gecerli degil!!!\n\t\tTekrar giriniz.\n\n");
        }
        printf("\n\n\t\t%s\n\n", adi);
    }

    return 0;
}
