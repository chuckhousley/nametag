import re


def main():
    i = 0
    f = open('cnoun.txt', 'r')
    q = open('output.txt', 'w')
    # print f.read()
    for line in f:
        a = re.split('\",\W+', line)
        for w in a:
            if len (w) > 0 and w[0] == '"':
                w = w[1:]
            if len(w) > 0:
                q.write('prog_char string_' + str(i) + '[] PROGMEM = "' + w + '";\n')
                i += 1

    q.write('\nPROGMEM const char *string_table[] = {\n')
    s = 0
    for x in range(i):
        q.write('string_' + str(x) + ', ')
        s += 1
        if s == 7:
            q.write('\n')
            s = 0
    q.write('};')
    f.close()
    q.close()


if __name__ == "__main__":
    main()
