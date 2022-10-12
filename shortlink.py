import pyshorteners
link = ('https://blog.thunkable.com/new-integration-announcement-webflow-cms-8784eb2019a')
 
ts = pyshorteners.Shortener()
rut_gon = ts.tinyurl.short(link)
print(rut_gon)
