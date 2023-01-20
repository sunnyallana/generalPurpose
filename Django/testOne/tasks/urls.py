from django.urls import path
from . import views
urlpattern = [
    path('', views.tasks, name="index"),
]