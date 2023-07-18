# Python 3
[n,q] = [int(x) for x in input().split(" ")]
vals = [int(x) for x in input().split(" ")]

#print(n,q,vals)

#http://stackoverflow.com/questions/2068372/fastest-way-to-list-all-primes-below-n
#don't really care about the primes part
def getprimes(n):
    """ Returns  a list of primes < n """
    sieve = [True] * n
    for i in range(3,int(n**0.5)+1,2):
        if sieve[i]:
            sieve[i*i::2*i]=[False]*int(((n-i*i-1)/(2*i)+1))
    return [2] + [i for i in range(3,n,2) if sieve[i]]

bp = [] #badplate (not divis)
gp = [] #goodplate (divis)
tp = [] #tempplate (holder for plate that are not divis)

bp.extend(vals)
primes = getprimes(10000) #magic number to get a little over 1200 primes

p = 0
currentPrime = primes[0]

while (p < q):    
    #print(currentPrime, p)
    while bp:
        cur = bp.pop()
        #print(cur, 'w', cur / currentPrime)
        if (cur % currentPrime == 0):            
            gp.append(cur)
        else:
            tp.append(cur)

    #refresh
    p += 1    
    currentPrime = primes[p]     
    
    #print good plates
    while gp:
        print(gp.pop())
    
    #rework stacks, good plates is already empty from the print above
    bp = tp[:]
    tp[:] = []
    
while bp:
    print(bp.pop()) #print remaining bad plates