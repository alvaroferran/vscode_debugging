#!/usr/bin/env

import sys


def func():
    v = []
    size = int(sys.argv[1])
    for i in range(size):
        v.append(i)


if __name__ == "__main__":
    func()
