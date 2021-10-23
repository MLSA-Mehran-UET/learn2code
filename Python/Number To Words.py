# Works from Zero til One Thousand!
def InWords(num):
    # We must define all unique numbers
    TillTwelve = {0: "zero", 1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight",
                  9: "nine", 10: "ten", 11: "eleven", 12: "twelve", 13: "thirteen", 15: "fifteen"}
    MultiplesOfTen = {20: "twenty", 30: "thirty", 40: "forty", 50: "fifty", 60: "sixty", 70: "seventy", 80: "eighty",
                      90: "ninty", 100: "one hundred"}

    if type(num) != int:
        return "Invalid Input"
    else:
        if num < 20:
            try:
                return (TillTwelve[num])
            except KeyError:
                return (TillTwelve[int(str(num)[1])] + "teen")
        elif num % 10 == 0 and not (num > 100):
            return (MultiplesOfTen[num])

        elif num < 100:

            return (MultiplesOfTen[int(str(num)[0] + "0")] + " " + TillTwelve[int(str(num)[1])])


        elif num < 1000:
            try:
                return (TillTwelve[int(str(num)[0])] + " hundred and " + TillTwelve[int(str(num)[1:])])
            except KeyError:
                broken_number = InWords(int(str(num)[1:]))
                return (TillTwelve[int(str(num)[0])] + " hundred and " + broken_number)

        else:
            return "One Thousand! (or above)"

print(InWords(int(input("Enter Any number:"))))
input()
