from django.shortcuts import render
from django import forms
# Create your views here.
tasksList = ["Eat","Sleep"]
class addTask(forms.Form):
    task = forms.CharField(label = "New Task")

def index(request):
    return render(request, "tasks/index.html", {"tasksList": tasksList})

def add(request):
    if request.method == "POST":
        form = addTask(request.POST)
        if form.is_valid():
            task = form.cleaned_data["task"]
            tasksList.append(task)
        else:
            return render(request, "tasks/add.html", {"addTask": form})
    return render(request, "tasks/add.html", {"addTask": addTask()})