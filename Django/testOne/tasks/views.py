from django.shortcuts import render

# Create your views here.
tasksList = ["Eat", "Code", "Sleep", "Repeat"]
def index(request):
    return render(request, "tasks/index.html", {"tasksList": tasksList})
def add(request):
    return render(request, "tasks/add.html")