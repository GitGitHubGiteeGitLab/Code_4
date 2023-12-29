#3-2-1
motorcycles = ['honda', 'yamaha', 'suzuki']
motorcycles[0] = 'ducati'
print(motorcycles)
print()

#3-2-2
motorcycles = []
motorcycles.append('honda')
motorcycles.append('yamaha')
motorcycles.append('suzuki')
print(motorcycles)

motorcycles.insert(0, 'ducati')
print(motorcycles)
print()

#3-2-3
del motorcycles[0]
print(motorcycles)
motorcycles.pop()
print(motorcycles)
message = motorcycles.pop(0)
print(motorcycles)
print(f'\nA {message.title()} is too expensive for me.')
print()

motorcycles = ['honda', 'yamaha', 'suzuki', 'ducati', 'suzuki']
too_expensive = motorcycles.remove('suzuki')
print(motorcycles)
print()

#exercise
#3.4
person_list = ['k', 's', 'f']
print(person_list)

#3.5
absent_person = person_list.pop(1)
print(absent_person)
person_list.insert(1, 'a')
print(person_list)

person_list.insert(0,'hello')
person_list.insert(2, 'g')
person_list.append('L')
print(person_list)

print('只有两个人能被邀请从参加')
i = 5
while i > 1:
    delete_person = person_list.pop(i)
    print(f'Sorry, {delete_person}')
    i -= 1
i = 0
while i < 2:
    print(f'Welcome, {person_list[i]}')
    i += 1
i = 1
print(person_list)
while i > -1:
    del person_list[i]
    i -= 1
print(person_list)