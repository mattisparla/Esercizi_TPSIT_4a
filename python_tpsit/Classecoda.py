class Coda():
    def __init__(self):
        self.coda=[]

    def enqueque(self,elemento):
        self.coda.append(elemento)

    def dequequ(self):
        if len(self.coda)==0:
            return self.coda.pop(0)
        else:
            return None

    def print(self):
        print(self.coda)

        
p1=Coda()#istanza della classe pila
p1.enqueque("ciao")
p1.enqueque("lol")
p1.print()
p1.dequequ()
p1.print()