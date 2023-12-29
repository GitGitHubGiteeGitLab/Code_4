#3-3-1
cars = ['bmw', 'audi', 'toyota', 'subaru']
print(cars)
cars.sort()
print(cars)
cars.sort(reverse=True)
print(cars)
print()

#3-3-2
cars = ['bmw', 'audi', 'toyota', 'subaru']
print('Here is the original list:')
print(cars)
print(sorted(cars))
print()

#3-3-3
cars = ['bmw', 'audi', 'toyota', 'subaru']
print(cars)
cars.reverse()
print(cars)
print()

#3-3-4
cars = ['bmw', 'audi', 'toyota', 'subaru']
print(len(cars))
print()

#exercise
#3.8
places = ['Beijing', 'Chengdu', "Xi'an", 'Shanghai', 'Guangzhou']
print(places)
print(sorted(places))
print(places)
print(sorted(places, reverse=True))
print(places)
places.reverse()
print(places)
places.reverse()
print(places)
places.sort()
print(places)
places.sort(reverse=True)
print(places)

#3.9
print(len(places))

#3.10
language = ['c', 'java', 'python', 'go', 'rust', 'javaScript', 'kotlin', 'c#', 'Dart', 'lua']
print(language)
language.append('VB')
print(language)
language.insert(5, 'Swift')
print(language)
del language[5]
print(language)
language.pop()
print(language)
delete = language.pop(8)
print(f'pop[8]: {delete}')
print(language)
language.remove("c#")
print(language)
print(f'sorted: {sorted(language)}')
print(language)
print(f'sort: {language.sort()}')
print(language)
print(f'reverse：{language.reverse()}')
print(language)
print(len(language))

