all: curses.so

%.so: src/main/native/%.c src/main/native/%.h
	g++ -I ${JAVA_HOME}/include -I ${JAVA_HOME}/include/linux -fPIC -shared $< -o src/main/native/$@

clean:
	rm src/main/native/curses.so
	rm -r target
