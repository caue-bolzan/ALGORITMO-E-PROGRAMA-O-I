# Programa para identificar estado civil
escolha = input("")

# Pegamos apenas a primeira letra e colocamos em minúscula
letra = escolha[0].lower()

if letra == 'c':
    print("Casado")
elif letra == 's':
    print("Solteiro")
elif letra == 'd':
    print("Divorciado")
else:
    print("Alguma letra errada")
