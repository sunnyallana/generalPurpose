from django.shortcuts import render
from django import forms
# Create your views here.
class addTask(forms.Form):
    taskGet = forms.CharField(label = "New Task")

def index(request):
    if "tasks" not in request.session:
        request.session["tasks"] = []
    return render(request, "tasks/index.html", {"tasksList": request.session["tasks"]})

def add(request):
    if request.method == "POST":
        formWithUserInput = addTask(request.POST)
        if formWithUserInput.is_valid():
            taskStore = formWithUserInput.cleaned_data["taskGet"]
            request.session["tasks"] += taskStore
        else:
            return render(request, "tasks/add.html", {"formPlug": formWithUserInput})
    return render(request, "tasks/add.html", {"formPlug": addTask()})