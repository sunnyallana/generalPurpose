from django.shortcuts import render
from django import forms
# Create your views here.
tasksList = ["Eat","Sleep"]
class addTask(forms.Form):
    taskGet = forms.CharField(label = "New Task")

def index(request):
    return render(request, "tasks/index.html", {"tasksList": tasksList})

def add(request):
    if request.method == "POST":
        formWithUserInput = addTask(request.POST)
        if formWithUserInput.is_valid():
            taskStore = formWithUserInput.cleaned_data["taskGet"]
            tasksList.append(taskStore)
        else:
            return render(request, "tasks/add.html", {"formPlug": formWithUserInput})
    return render(request, "tasks/add.html", {"formPlug": addTask()})