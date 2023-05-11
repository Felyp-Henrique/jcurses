all: curses.so

%.so: src/main/native/%.c src/main/native/%.h
	gcc -lncurses -I ${JAVA_HOME}/include -I ${JAVA_HOME}/include/linux -fpic -shared $< -o src/main/native/$@

install:
	sudo cp src/main/native/*.so /usr/local/lib

clean:
	rm src/main/native/curses.so
	rm -r target
