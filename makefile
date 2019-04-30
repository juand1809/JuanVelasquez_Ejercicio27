all: potencial.dat Potencial.png

%.png: %.dat Potencial.png
	python3 graficar.py
	
%.dat: a.out
	./a.out

a.out: JuanVelasquez_Ejercicio27.cpp
	g++ JuanVelasquez_Ejercicio27.cpp

clean:
	rm -rf *.x *.dat *.png