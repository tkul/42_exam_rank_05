# 42 Exam Rank 05

42 exam rank 05 sınavında bigint sorusunu başarıyla çözerek geçtim! Bu repo, çözümümü ve detaylı açıklamalarını içeriyor.

I successfully passed the 42 exam rank 05 by solving the bigint question! This repo contains my solution and detailed explanations.

---

## Türkçe Açıklama

# BigInt - Keyfi Hassasiyetli Tamsayı Uygulaması

Bu proje, C++ dilinde keyfi hassasiyette işaretsiz tamsayıları temsil eden bir `bigint` sınıfının tam implementasyonunu içerir.

## Proje Açıklaması

Bilgisayar bilimlerinde bignum (büyük sayı), keyfi bir hassasiyetteki sayıyı temsil eden bir nesnedir. Bu, herhangi bir hassasiyet kaybı olmadan `SIZE_MAX` değerinden büyük bir sayıyı depolamak istediğinizde kullanışlıdır. Bu implementasyon, sayının farklı "kısımlarını" içeren bir string yapısı kullanarak bu özelliği sağlar.

## Özellikler

### Desteklenen İşlemler:
- **Aritmetik İşlemler**: Toplama (`+`, `+=`)
- **Artırma İşlemleri**: Ön artırma (`++x`) ve son artırma (`x++`)
- **Rakam Kaydırma**: Sol kaydırma (`<<`, `<<=`) ve sağ kaydırma (`>>`, `>>=`)
- **Karşılaştırma İşlemleri**: `<`, `<=`, `>`, `>=`, `==`, `!=`
- **Çıktı İşlemi**: Akış operatörü (`<<`) ile yazdırma

### Rakam Kaydırma (Digit Shift):
Bit kaydırma işleminin rakam versiyonu:
- `42 << 3` = `42000` (sola 3 konum kaydırma = sonuna 3 sıfır ekleme)
- `1337 >> 2` = `13` (sağa 2 konum kaydırma = sondan 2 rakam silme)

---

## English Description

# BigInt - Arbitrary Precision Integer Implementation

This project contains a complete implementation of a `bigint` class that represents arbitrary precision unsigned integers in C++.

## Project Description

In computer science, a bignum is an object representing an arbitrary precision number. This is useful when you want to store a number bigger than `SIZE_MAX` without any loss of precision. This implementation achieves this by storing a string containing the different "parts" of the number.

## Features

### Supported Operations:
- **Arithmetic Operations**: Addition (`+`, `+=`)
- **Increment Operations**: Pre-increment (`++x`) and post-increment (`x++`)
- **Digit Shifting**: Left shift (`<<`, `<<=`) and right shift (`>>`, `>>=`)
- **Comparison Operations**: `<`, `<=`, `>`, `>=`, `==`, `!=`
- **Output Operation**: Stream operator (`<<`) for printing

### Digit Shift:
The digit version of bit shifting operations:
- `42 << 3` = `42000` (left shift by 3 positions = append 3 zeros)
- `1337 >> 2` = `13` (right shift by 2 positions = remove 2 digits from end)
---