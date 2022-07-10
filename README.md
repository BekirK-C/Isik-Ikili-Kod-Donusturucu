
# Işık İkili Kod Dönüştürücü
Bir lazer ışınını 4 bitlik ikili sayısal koda dönüştürme projesi.

## Nasıl Çalışır
![0100](https://user-images.githubusercontent.com/80921292/178141451-91a1aab7-381c-4388-beac-6b636ee815be.jpeg)

Öncelikle 4x1 tuş takımından istenen kodlama tuşlanır. 
Yukarıdaki görselde tuşlama 0-1-0-0 olarak yapılmıştır (Sadece 2. butona basılmıştır).
2.butondan elde edilen "HIGH" durumu 2.servo motoru 45 derecelik bir pozisyona getirir.
Lazerden çıkan ışın 1. ışın bölücü'den (beam splitter cam) direkt karşıya geçer. 
2.ışın bölücü 45 derece olduğundan ışığın yarısı yansır diğer yarısı ise
karşıya geçer. 

![0100 Aynalar](https://user-images.githubusercontent.com/80921292/178142712-3f3eeac5-2d63-4385-aa5f-f5fade91672f.jpeg)

Geçen ışın yoluna devam edip diğer ışın bölücülere
ilerlerken yansıyan ışın LDR sensörün (ışık sensörü) üzerine düşer.
Üzerine ışık düşen LDR sensörün bağlı olduğu led (Bu örnekte 2.led)
yanar. Ve kontrol mekanizmamız tamamlanmış olur. 
Sonuç olarak tuş takımından girilen 0-1-0-0 durumu ledler aracılığıyla
gözlemlenmiş olur. Burada 1.led LSB biti 4.led ise MSB bitidir.
Tekrardan dönüştürme gerçekleştirilmek istendiğinde sarı butona basılır ve sistem sıfırlanır.

## Arduino Kodları

Öncelikle kullanacağımız kütüphane olan Servo kütüphanesi eklenmiştir. Ardından gerekli pin tanımları yapılıp setup kısmına geçilmiştir. Setup olarak Servoları başlangıç açıları, ledlerin, butonun ve tuşların modu tanıtılıp servonun bağlı olduğu bacağın tanımı yapılmıştır ve sonrasında loop bölümüne geçilir. İlk olarak sensörlerden analog ve tuşlardan dijital olarak veri alınır. İf yapılarıyla tuşlara basılıp basılmadığı kontrol edilir ve basılan tuşlarda servo açıları aynayı 45 derece ayarlayacak şekilde pozisyon alır. Tuşlarla 1-0 değerleri oluşturulduktan sonra sensörlere düşen ışık şiddetine göre ledler HIGH değerini alır. Son olarak butona basılıp basılmadığı kontrol edilerek basılması halinde servoların açıları sıfırlanır ve restart durumuna geçilir.

## NOT

Başka örnekler Images klasörüne eklenmiştir.
