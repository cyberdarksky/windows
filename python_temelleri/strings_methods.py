message = "Hello There. My name is Yakup Vurur"

"""
                          METİN EDİTLEME
"""
# message = message.upper()        # Tüm karakterler BÜYÜK
# message = message.lower()        # Tüm karakterler küçük
# message = message.title()        # Baş harfler Büyük
# message = message.capitalize()   # Sadece cümle başı büyük
# message = message.strip()        # Cümle başı ve sonu boşluğu siler (sağdan .rsplit soldan .lspilt)
# message = message.lstrip("abc")  # Cümlede abc karakterlerini siler (sağdan .rsplit soldan .lspilt)
"""
                            SPLİT KOMUTU
"""
# message = message.split()         # Her kelimeyi ayrı terimlere böler
# print(message[0])                 # Ayrılan terimlerden seçilen (0,1,2,3 vs.) terimi gösterir
# message = message.split(".")      # Nokta yazdığımız için cümleleri ayırır
# print(message[1])                 # Ayrılan cümlelerden seçilen (0,1,2,3 vs.) cümleyi gösterir
# message = "-" .join(message)      # Ayrılan kelimeleri arasına - koyarak birleştirir
"""
                            ARAMA İŞLEMLERİ
"""
# result = message.count("a")       # Message içinde kaç adet "a" karakteri olduğunu sorar
# result = message.count("a",0,10)  # Message'de 0 ile 10. karakterler arasında kaç adet "a" karakteri olduğunu sorar
# index = message.find("Yakup")     # Message içinde Yakup'un kaçıncı indexte (kaçıncı harf) başladığını gösterir.
# index = message.rfind("Yakup")    # Message içinde Sağdan Yakup'un kaçıncı indexte (kaçıncı harf) başladığını gösterir.
# isFound = message.startswith("H") # Messagenin başlangıç harfinin "H" olup olmadığını sorar
# isFound = message.endswith("r")   # Messagenin son harfinin "r" olup olmadığını sorar
# print(isFound)                    # Görüntüleme

# message = message.replace("Yakup","Yahya")     # Metinde Yakup'u Yahya olarak değiştirir
# print(message)                                 # Görüntüleme

# message = message.center(100)                  # Metni 100 karakter içine ortalar
# message = message.center(100, "*")             # Metni ortalayıp boşluk yerine "*" ekler
# print(message)                                 # Görüntüleme

# https://www.w3schools.com/python/python_ref_string.asp