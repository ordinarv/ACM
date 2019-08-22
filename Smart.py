import os

all_cnt = 0


def main():
    os.system('git add .')
    os.system('git commit -m update')
    os.system('git push origin master')

if __name__ == '__main__':
    main()