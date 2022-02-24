class Pila():
    def __init__(self):
        self.pila=[]

    def push(self,elemento):
        self.pila.append(elemento)

    def pop(self):
        if len(self.pila)==0:
            return None
        else:
            return self.pila.pop()

    def print(self):
        print(self.pila)

        
p1=Pila()#istanza della classe pila
p1.push("ciao")
p1.push("shsh")
p1.print()

