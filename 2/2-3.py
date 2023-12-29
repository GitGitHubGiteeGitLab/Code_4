#2-3-1 title() upper() lower()
name = "ada lovelace"
name.title()
print(name)
print(name.title())
name = name.title()
print(name)
print(name.upper())
print(name.lower())
print()

#2-3-2 format string
first_name = 'ada'
last_name = 'lovelace'
full_name = f'{first_name} {last_name}'
print(full_name)
message = f'Hello, {full_name.title()}'
print(message)
print()

#2-3-3 space
print("Languages:\n\tPython\n\tC\n\tJavaScript")
print()

#2-3-4 strip
favorite_language = ' python '
print(favorite_language)
print(favorite_language.strip())
print()

#2-3-5 removesuffix
url = 'https://nostarch.com'
url = url.removeprefix('https://')
print(url)
print()

#exercise 2.3
name = 'Eric'
message = f'Hello {name}, would like to learn some Python today'
print(message)
print()

#exercise 2.4
name = 'Oliver Smith'
name = name.lower()
print(name)
name = name.upper()
print(name)
name = name.title()
print(name)
print()

#exercise 2.5
print('Albert Einstein once said, "A person who never made a mistake never tried anything new"')
print()

#exercise 2.6
famous_person = 'Albert Einstein'
message = f'{famous_person} once said, "A person who never made a mistake never tried anything new"'
print(message)

#exercise 2.7
name = '\tOliver Smith \n'
print(name.lstrip())
print(name.rstrip())
print(name.strip())
print()

#exercise 2.8
filename = 'python_note.txt'
print(filename.removesuffix('.txt'))
print()