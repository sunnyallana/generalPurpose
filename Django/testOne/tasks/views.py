from django.shortcuts import render
from django import forms
# Create your views here.
tasksList = ["Eat", "Code", "Sleep", "Repeat"]
class addTask(forms.Form):
    task = forms.CharField(label = "New Task")
def index(request):
    return render(request, "tasks/index.html", {"tasksList": tasksList})
def add(request):
    return render(request, "tasks/add.html", {"addTask": addTask()})