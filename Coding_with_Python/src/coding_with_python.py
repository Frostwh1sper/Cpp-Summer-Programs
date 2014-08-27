"""
Author: Patrick Glenning
Date: 27 Aug 2014
Purpose: Messing around with python code
"""
# Import system libraries
from datetime import datetime

#functions
def get_month(now):
    if now.month == 1:
        return "January"
    elif now.month == 2:
        return "February"
    elif now.month == 3:
        return "March"
    elif now.month == 4:
        return "April"
    elif now.month == 5:
        return "May"
    elif now.month == 6:
        return "June"
    elif now.month == 7:
        return "July"
    elif now.month == 8:
        return "August"
    elif now.month == 9:
        return "September"
    elif now.month == 10:
        return "October"
    elif now.month == 11:
        return "November"
    elif now.month == 12:
        return "December"

#Begin Execution
name = raw_input("What is your name? ")
now = datetime.now()
month = get_month(now)
print "Hello %s, the time is %s:%s on %s %s, %s" % (name, now.hour, now.minute, month, now.day, now.year)
