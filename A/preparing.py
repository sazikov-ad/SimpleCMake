import os
import sys

file = os.path.join('A', 'index.h')


def make_dirs(base_dir):
    os.makedirs(os.path.join(base_dir, 'A'), exist_ok=True)


def write_file(base_dir):
    with open(os.path.join(base_dir, file), 'w') as handle:
        print(
'''#ifndef A_INDEX_H_
#define A_INDEX_H_

static int integer_add(int a, int b) {
  return a + b;
}

static int integer_sub(int a, int b) {
  return a - b;
}

#endif // A_INDEX_H_''', file=handle)


def main():
    base_dir = sys.argv[1]
    make_dirs(base_dir)
    write_file(base_dir)


if __name__ == '__main__':
    main()
