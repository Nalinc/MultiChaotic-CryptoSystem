#12-09-2k13 First Progress Presentation(Minor Project) 
#Implementation of Hybrid Multichaotic system
#---------------------------------------------
#Includes use of:
#arnolds map for generating discrete binary output
#Rossler's map for genearting continous output &
#Henon map for generating discrete output 

import sys
import Image
from numpy import *
from scipy.misc import lena,imsave

# load image
s1="./orig/"
s2=str(sys.argv[1])
im = array(Image.open(s1+s2))
N = im.shape[0]

# create x and y components of Arnold's cat mapping
x,y = meshgrid(range(N),range(N))
xmap = (2*x+y) % N
ymap = (x+y) % N

for i in xrange(N+1):
      imsave("./frames/tux{0}.png".format(i),im)
      im = im[xmap,ymap]
