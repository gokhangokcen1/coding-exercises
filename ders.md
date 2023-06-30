## Error Based SQL Injection

try-exception olmadığında nasıl olacak?

```python
id = request.get('id')

query = "SELECT * FROM haberler WHERE id="+id

if result.size() > 0:
	for i in result:
		print(i.title)
else:
	print("haber yok")
```

Syntax hatası olduğunda karşımızda direkt olarak bir hata dönüyorsa buradan veri çekmek için güzel bir yol vardır. 

![normal sorgu sonuna yalnızca tek tırnak koyduğumuzda dönen hata](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/117c15f3-0f23-4ef3-a02f-2affbfae5bab/Untitled.png)

normal sorgu sonuna yalnızca tek tırnak koyduğumuzda dönen hata

SQL Injection öğreniyorsan her zaman bir yanda da query altında egzersiz yapabileceğin bir veritabanı açık bulunsun. 

ExtractValue() helper fonksiyonu ne işe yarıyor: 

Bu fonksiyon parametre olarak XML alıp bu XML’i parse edip belirttiğin filtreye göre değer dönmesini sağlayabiliyorsun. 

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/d8c8ce86-36a2-4608-8526-45c61e711140/Untitled.png)
