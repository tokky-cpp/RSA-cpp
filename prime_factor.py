# -*- coding: utf-8 -*-
import math
import sys

n = int(raw_input())

for i in xrange(int(math.sqrt(n)+1)):
    if n%(i+2)==0:
        print (i+2)
        print n/(i+2)
        sys.exit()
