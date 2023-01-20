from django.shortcuts import render
import datetime


# Create your views here.
def newyear(request):
    current = datetime.datetime.now()
    return render(request,"newyear/index.html", {"newyear": current.date == 1 and current.month == 1})