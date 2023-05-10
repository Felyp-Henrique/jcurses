#include <ncurses.h>
#include <jni.h>

JNIEXPORT void JNICALL Java_com_github_felyphenrique_Curses_start(JNIEnv *env, jclass klass) {
    initscr();
}

JNIEXPORT void JNICALL Java_com_github_felyphenrique_Curses_stop(JNIEnv *env, jclass klass) {
    endwin();
}
