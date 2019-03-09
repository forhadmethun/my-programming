class UniqueCharsSet:
    def __init__(self):
        pass

    @staticmethod
    def has_unique_chars(self, string):
        if string is None:
            return False
        return len(set(string)) == len(string)


if __name__ == "__main__":
    uc = UniqueCharsSet()
    print(uc.has_unique_chars(uc,"abdul"))