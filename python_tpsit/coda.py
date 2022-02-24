"""[0 , 1, 2, 3, 4]

    ^             ^
    |             |
    head         tail"""

def enqueque(coda,elemento):
    coda.append(elemento)

def dequeque(coda,elemento):
    if len(coda)>0:
        return coda.pop(0)
    else:
        return None


cliente1={"nome":"Mario Rossi",id:123456}
cliente2={"nome":"john doe",id:7891234}

coda=[]
enqueque(coda,cliente1)
enqueque(coda,cliente2)
print(coda)