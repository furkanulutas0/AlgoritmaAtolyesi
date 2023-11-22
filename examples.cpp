#include <iostream>
using namespace std;
int main()
{
  // Problem 1: [1,2,3,4,5,6,7,8,9,10] bu diziyi oluşturan kodu yazınız. //

  int dizi[10] = {};
  for (int i = 0; i < 10; i++)
  {
    dizi[i] = i + 1;
    cout << dizi[i] << " ";
  }

  // Problem 2: [1,-2,3,-4,5,-6,7,-8,9,-10] bu dizinin elemanlarını tersten yazdıran kodu yazınız.
  int dizi[10] = {};
  int negative = 1;
  for (int i = 0; i < 10; i++)
  {
    dizi[i] = (i + 1) * negative;
    negative *= -1;

    cout << dizi[i] << " ";
  }

  // Problem 3: Kullanıcıdan alınan bir sayının faktöriyelini hesaplayan kodu yazınız.

    int number;
    cout << "Bir Sayı Giriniz: ";
    cin >> number;

    int fact = 1;

    for (int i = 1; i <= number; i++)
    {
      fact *= i;
    }

    cout << number << " Faktöriyel: " << fact << endl;

  // Problem 4: Bir dizide tekrar eden elemanları bulunuz

    int numbers[] = {1,2,3,3,3,4,5,5,6};

    for (int i = 0; i < 8; i++)
    {
      for (int j = i+1; j < 8; j++)
      {
        if (numbers[i] == numbers[j])
        {
          cout << numbers[i] << " ";
          break;
        }

      }
    }


  // Problem 5: Çok boyutlu bir dizideki çift elemanları toplama  [[],[]] Çok boyutlu matris

    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (numbers[i][j] % 2 == 0)
        {
          sum = sum + numbers[i][j];
        }
      }
    }

    cout << sum;


  // Problem 6: Bir dizideki en büyük eleman ve en küçük elemanları bulma

    int numbers[][5] = {{1, 2, 3, 4, 5}, {-12, 24, 48, 96, 192}};

    int max = -99999;
    int min = 99999;

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        if (max < numbers[i][j])
        {
          max = numbers[i][j];
        }
        if (min > numbers[i][j])
        {
          min = numbers[i][j];
        }
      }
    }
    cout << "En Büyük Sayi: .. " << max << endl;
    cout << "En Küçük Sayi: .. " << min << endl;


  // Problem 7: Kullanıcıdan alınan sayıların toplamını ve giriş adedini bulan program yazın. Negatif sayı girişi programı sonlandıracaktır!

   int counter, x, sum;
   bool key = true;
   sum = 0;
   counter = 0;
   while (key == true)
   {
       cout << "Please type a number "; cin >> x;
       if (x >0)
       {
           sum += x;
           counter++;
       } else
       {
           cout << "Negatif sayi girildigi icin program durdurulu." << endl;
           key = false;
       }

   }
   cout << "Girilen pozitif sayi sayisi: " << counter << endl;
   cout << "Girilen pozitif sayilarin toplami: " << sum << endl;



  // Problem 8:

      string value;
     cin >> value;

     int lenght = 0;

     for (int i = 0; value[i]; i++)
     {
         lenght++;
     }

     for (int i = 0; i < lenght / 2; i++) {
         if (value[i] != value[lenght - i - 1]) {
             cout << "No";
         }
         else {
             // Return "Yes"
             cout << "Yes";
         }
     }

  // Problem 9:

      int n;

  // Kullanıcıdan kaç adet sayı gireceğini iste
  std::cout << "Kaç adet sayı gireceksiniz? ";
  std::cin >> n;

  // Sayıları içeren dizi
  int sayilar[n];

  // Kullanıcıdan sayıları al
  std::cout << "Sayıları girin:" << std::endl;
  for (int i = 0; i < n; ++i) {
      std::cin >> sayilar[i];
  }

  // Her sayının karekökünü hesapla ve en yakın sayıyı bul
  std::cout << "\nKareköklerle Karşılaştırma:" << std::endl;
  for (int i = 0; i < n; ++i) {
      int sayi = sayilar[i];
      double karekok = sqrt(sayi);

      // En yakın sayıyı bulma
      int enYakinSayi = sayilar[0];
      for (int j = 1; j < n; ++j) {
          if (abs(sayilar[j] - karekok) < abs(enYakinSayi - karekok)) {
              enYakinSayi = sayilar[j];
          }
      }

      // Sonuçları ekrana yazdır
      std::cout << "Sayı: " << sayi << ", Karekök: " << karekok
                << ". En yakın sayı: " << enYakinSayi << std::endl;
  }
}