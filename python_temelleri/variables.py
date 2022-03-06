# İşçiler ve maaşları
maasYakup = 5000
maasYahya = 4000
vergisi = 0.27

# İşçi maaş hesaplaması

print( maasYakup - (maasYakup * vergisi))
print( maasYahya - (maasYahya * vergisi))

# Değişken Tanılama Kuralları

# Rakam ile başlayamaz.
3
number1 = 10
print(number1)

number1 = 20
print(number1)

number1 += 30
print(number1)

number1 += 20
print(number1)

# Büyük küçük harf duyarlılığı vardır.

age = 20
AGE = 30

print(age)
print(AGE)

# KESİNLİKLE T"Ü"RK"Ç"E KARAKTER KULLANMA!!!

# yaş = 20  değil
yas = 20
#veya
_age = 20

x = 1                 #int
y = 2.1               #float
name = "Yakup"        #string
isStudent = True      #bool

print(x+y)
# x, y, name, isStudent = (1, 2.1, "Yakup", True)

firstName = "Yakup"
lastName = " Vurur"
print(firstName + lastName)   # Yakup Vurur