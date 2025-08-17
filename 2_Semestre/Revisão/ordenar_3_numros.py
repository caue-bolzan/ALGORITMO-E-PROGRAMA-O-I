# Entrada dos números
n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))
n3 = int(input("Digite o terceiro número: "))

# Ordem crescente
print("\nOrdem crescente: ", end="")
if n1 <= n2 and n2 <= n3:
    print(n1, n2, n3)
elif n1 <= n3 and n3 <= n2:
    print(n1, n3, n2)
elif n2 <= n1 and n1 <= n3:
    print(n2, n1, n3)
elif n2 <= n3 and n3 <= n1:
    print(n2, n3, n1)
elif n3 <= n1 and n1 <= n2:
    print(n3, n1, n2)
else:  # n3 <= n2 and n2 <= n1
    print(n3, n2, n1)

# Ordem decrescente
print("Ordem decrescente: ", end="")
if n1 >= n2 and n2 >= n3:
    print(n1, n2, n3)
elif n1 >= n3 and n3 >= n2:
    print(n1, n3, n2)
elif n2 >= n1 and n1 >= n3:
    print(n2, n1, n3)
elif n2 >= n3 and n3 >= n1:
    print(n2, n3, n1)
elif n3 >= n1 and n1 >= n2:
    print(n3, n1, n2)
else:  # n3 >= n2 and n2 >= n1
    print(n3, n2, n1)
