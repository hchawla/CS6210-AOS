/*
 * test-31.c
 * Copyright (C) 2015 benjamin <benjamin@assus>
 *
 * Distributed under terms of the MIT license.
 */
#include <stdio.h>
#include <stdlib.h>
#include "gtthread.h"
gtthread_t t;

void test(gtthread_t arg) {
  if(gtthread_equal(gtthread_self(), arg)) {
    printf("Success.");
  } else {
    printf("Failure.");
  }
}

int main() {
    printf("test4a. Should print 'Success'.\n");

    gtthread_init(50000L);
    t = gtthread_self();
    test(t);
    return EXIT_SUCCESS;
}

