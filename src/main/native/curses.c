#include <stdio.h>
#include <ncurses.h>
#include <jni.h>
/*
 * Class:     com_github_felyphenrique_Curses
 * Method:    raw
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_felyphenrique_Curses_raw(JNIEnv *env, jclass klass) {
    return raw();
}

/*
 * Class:     com_github_felyphenrique_Curses
 * Method:    cbreak
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_felyphenrique_Curses_cbreak(JNIEnv *env, jclass klass) {
    return cbreak();
}

/*
 * Class:     com_github_felyphenrique_Curses
 * Method:    echo
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_felyphenrique_Curses_echo(JNIEnv *env, jclass klass) {
    return echo();
}

/*
 * Class:     com_github_felyphenrique_Curses
 * Method:    noecho
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_felyphenrique_Curses_noecho(JNIEnv *env, jclass klass) {
    return noecho();
}

/*
 * Class:     com_github_felyphenrique_Curses
 * Method:    keypad
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_felyphenrique_Curses_keypad(JNIEnv *env, jclass klass) {
    return keypad(NULL, TRUE);
}