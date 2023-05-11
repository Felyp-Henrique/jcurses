package com.github.felyphenrique;

public final class Curses {
    public static native int raw();

    public static native int cbreak();

    public static native int echo();

    public static native int noecho();

    public static native int keypad();

    static {
        System.load("/usr/local/lib/curses.so");
    }
}
