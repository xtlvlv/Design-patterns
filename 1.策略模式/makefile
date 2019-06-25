# 用gcc, .h文件会先预编译为.h.gch文件
a.out:main.cpp ./myinclude/duck.h ./myinclude/behavior.h
	g++ main.cpp ./myinclude/duck.h ./myinclude/behavior.h

clear:
	rm -f a.out ./myinclude/*.gch