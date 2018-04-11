# 2D-Graphic-simulation-using-OpenGL
Nume student: Vlad Gabriel
Grupa: 254
Anul: 2
Nume proiect: DOMINO 2D

Proiectul consta in simularea unui joc de domino folosind OpenGL in care am inclus biblioteciile GLUT si GLEW.
La rularea programului, pe ecran vor aparea 12 piese de domino de culoare rosie, care la apasarea unui click in zona ferestrei va declansa un intstrument care va impinge prima piesa, care o va rasturna pe cea din dreapta ei, procesul continuand pana la ultima piesa, acestea schimbandu-si culoarea de fiecare data cand piesa anterioara o atinge pe urmatoarea.
Piesele se rotesc in jurul uniui punct fix folosind functia glRotatef().
De asemenea, am folosit o matrice si am facut transformarile aferente cu ajutorul functiei glTranslatef().
Pe langa functiile de initializae, am folosit o functie numita ‘mouse’ care va detecta apasarea butonului de la mouse si va schimba unghiul de cadere al pieselor. Cand valoarea unghiului unei piese este 10 grade, atunci cealalta piesa va incepe sa cada la randul ei. Aceasta functie am apelat-o in main().
Variabilele angle1.. angle14 reprezinta unghiul fiecarei piese intr-un anumit moment si care la cadere nu va fi mai mare de 80 de grade cu exceptia ultimei piese, care are valoarea maxima a unghiului de 90 de grade.
De asemenea, am adaugat si o suprafata plana care imita o masa pe care se afla piesele, un intrument care impinge prima piesa, si un pahar cu apa pentru estetica.






