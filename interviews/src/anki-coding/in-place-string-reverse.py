class Reversechars:
    def reverse(self, chars):
        if chars is None or not chars:
            return chars
        size = len(chars)
        for i in range(size // 2):
            chars[i], chars[(size - 1) - i] = \
                chars[(size - 1) - i], chars[i]
        return chars


if __name__ == '__main__':
    rs = Reversechars()
    chars = ['a', 'b', 'd', 'u', 'l']
    print (rs.reverse(chars))
