package com.github.felyphenrique;

public final class Curses {
    public static native void start();
    public static native void stop();

    public static void main(String[] args) {
        Curses.start();
    }

    static {
        System.load("/usr/local/lib/curses.so");
    }
}
