package leetcode.thread;

import java.util.concurrent.Semaphore;

public class PrintinOrder_1114 {}

class Foo{
    Semaphore s,t;
    public Foo() {       
        s = new Semaphore(0);
        t = new Semaphore(0);
    }

    public void first(Runnable printFirst) throws InterruptedException {
        // printFirst.run() outputs "first". Do not change or remove this line.
        printFirst.run();
        s.release();
    }

    public void second(Runnable printSecond) throws InterruptedException {
        // printSecond.run() outputs "second". Do not change or remove this line.
        s.acquire();
        printSecond.run();
        t.release();
    }

    public void third(Runnable printThird) throws InterruptedException {
        // printThird.run() outputs "third". Do not change or remove this line.
        t.acquire();
        printThird.run();
    }
}
