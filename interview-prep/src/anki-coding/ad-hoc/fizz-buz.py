class Solution(object):
    def fizz_buzz(self, num):
        for i in range (1, num+1):
            if(i%3 == 0 and i%5 == 0):
                print('FizzBuzz')
            elif i%5 == 0:
                print('Buzz')
            elif i%3 == 0:
                print('Fizz')
            else:
                print(i)

if __name__ == "__main__":
    solution = Solution()
    solution.fizz_buzz(15)
