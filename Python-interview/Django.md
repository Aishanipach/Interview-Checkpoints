### Model-View-Template design

1. Model: The presentable data from DB, it delivers data as an ORM. Helps extract data easily using helper functions for an SQL DB. Models for that are in models.py.

2. View: For each http request it handles what data to be shown or used by importing relevant models. Found in views.py

3. Templates: Thise is where the end result is displayed, generally an HTML file.

   URL, in urls.py, is where routes for a website can go and used for easy navigation.
