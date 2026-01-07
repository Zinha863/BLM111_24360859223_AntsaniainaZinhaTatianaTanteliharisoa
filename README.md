# Fizik Deneyleri C Programı

---

##  Hazırlayan

- Ad Soyad : Antsaniaina Zinha Tanteliharisoa
- Öğrenci numarası : 24360859223
- Bölüm : Bilgisayar Mühendisliği
- Ders : Algoritma ve Programlama
- Şube : 1
- Akademik Yıl : 2025 – 2026

---

## Proje Açıklaması

Bu proje, Programlama / Fizik dersi kapsamında hazırlanmıştır.
Program, C dili kullanılarak geliştirilmiş olup, farklı fizik deneylerinin
Güneş Sistemi’ndeki çeşitli gezegenler için simülasyonunu gerçekleştirmektedir.

Program konsol (terminal) tabanlı olarak çalışmakta ve kullanıcı, menü
aracılığıyla yapmak istediği deneyi seçebilmektedir.

---

## Yapılabilen Deneyler

Programda aşağıdaki deneyler bulunmaktadır:

1. Serbest Düşme Deneyi
2. Yukarı Atış Deneyi
3. Ağırlık Deneyi
4. Kütleçekimsel Potansiyel Enerji Deneyi
5. Hidrostatik Basınç Deneyi
6. Arşimet Kaldırma Kuvveti Deneyi
7. Basit Sarkaç Periyodu Deneyi
8. Sabit İp Gerilmesi Deneyi
9. Asansör Deneyi

Hesaplamalar aşağıdaki 8 gezegen için yapılmaktadır:

- Merkür
- Venüs
- Dünya
- Mars
- Jüpiter
- Satürn
- Uranüs
- Neptün

---

##  Hesaplama Yöntemi

- Deneylerde kullanılan formüller proje dokumanda verilen fizik formüllerine
  dayanmaktadır.
- Gezegenlere ait yerçekimi ivmeleri bir dizi (array) içinde tanımlanmış ve
  fonksiyonlara pointer kullanılarak aktarılmıştır.
- Kullanıcıdan alınan negatif değerler, yazılan mutlak değer fonksiyonu ile
  pozitif hale getirilmiştir.
- Menü seçiminde kullanıcıdan alınan girişlerin sayısal olup olmadığı kontrol
  edilerek hatalı girişlerin programa zarar vermesi engellenmiştir.
- Her deney için ayrı bir fonksiyon yazılmıştır.

---

##  Asansör Deneyi

Asansör deneyinde cismin etkin ağırlığı, asansörün hareket yönü ve ivmesine
bağlı olarak hesaplanmıştır. Hesaplamalar proje dokümanında verilen tanımlara
uygun şekilde yapılmıştır:

- Asansör yukarı yönde hızlanırken veya aşağı yönde yavaşlarken:
  N = m(g + a)

- Asansör aşağı yönde hızlanırken veya yukarı yönde yavaşlarken:
  N = m(g − a)

---

##  Derleme ve Çalıştırma

Programın derlenmesi için:

gcc main.c -o proje -lm

Programı çalıştırmak için:

./proje

Not: math.h kütüphanesi kullanıldığı için -lm parametresi gereklidir.

---

##  Proje Dosya Yapısı

- main.c : Programın kaynak kodu
- README.md : Proje açıklaması
- Proje Raporu : Deneylerin teorik açıklamaları ve sonuçları

---



##  Sonuç

Bu projede fonksiyonlar, diziler, pointer kullanımı, koşullu ifadeler,
döngüler ve kullanıcıdan veri alma konuları başarıyla uygulanmıştır.
Program, ders kapsamında istenen tüm gereksinimleri karşılayacak şekilde geliştirilmiştir.
