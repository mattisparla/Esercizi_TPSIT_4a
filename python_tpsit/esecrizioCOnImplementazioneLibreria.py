import pileCodeFile as pc

c=pc.Coda()
p=pc.Pila()
c2=pc.Coda()
n=int(input("Inserisci il numero di numeri che si vuole inserie: "))

for _ in range(n):
    num=int(input("Inserisci un numero : "))
    c.enqueque(num)
c.print()

for _ in range(n):
    p.push(c.dequequ())

for _ in range(n):
    c2.enqueque(p.pop())
c2.print()