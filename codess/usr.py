print("""

KULLANICI GİRİŞ EKRANI
(www.mustafasolmaz.com)

""")

sys_username = "cyberdarksky"
sys_password = "123456"

kullanici_adi = input("Kullanıcı Adını Giriniz: ")
sifre = input("Şifre'yi Giriniz: ")

if (kullanici_adi == sys_username) and (sifre != sys_password):
    print("Şifre yanlış..")

elif (kullanici_adi != sys_username) and (sifre == sys_password):
    print("Kullanıcı adı yanlış..")

elif (kullanici_adi != sys_username) and (sifre != sys_password):
    print("Kullanıcı adı ve şifre yanlış..")
else:
    print("Giriş yapıldı!")