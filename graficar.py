import numpy as np
import matplotlib.pyplot as plt
import os

os.system ("g++ JuanVelasquez_Ejercicio27.cpp")
os.system ("./a.out")

a = np.loadtxt("potencial.dat")

plt.figure(figsize = (30,20))
ax = fig.add_subplot(111,projection='3d')
ax.plot(a[:,0],a[:,1],a[:,2])
plt.savefig("Potencial.png")

