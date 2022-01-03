import os
import sqlite3
import openpyxl
import subprocess

def sqlprompt(row):
    result = f'''
    insert into course
    (NULL,
    {row[0]},
    {row[1]},
    {row[2]},
    {row[3]},
    {row[4]},
    {row[5]},
    {row[6]},
    {row[7]},
    {row[8]},
    {row[9]},
    {row[10]},
    {row[11]},
    {row[12]},
    {row[13]},
    {row[14]},
    {row[15]},
    {row[16]},
    {row[17]},
    {row[18]},
    {row[19]},
    {row[20]},
    {row[21]},
    {row[22]},
    {row[23]},
    {row[24]},
    {row[25]},'''
    
    result += ");"
    return result

def getTimeList(str):
    dir = os.getcwd()+"\\a.exe"
    return subprocess.Popen(dir+str, stdout=subprocess.PIPE).communicate()[0].split()

dir = os.getcwd()
db = sqlite3.connect(dir + 'course.db');
cursor = db.cursor()
workbook = openpyxl.load_workbook(dir + "\\CourseExcel\\" + input("input the name of the excel file"))
sheet = workbook.worksheets[0]
#https://ithelp.ithome.com.tw/articles/10246377
for row in sheet.iter_rows(min_row=1, max_col=sheet.max_col, max_row=sheet.max_row, values_only=True):
    cursor.exec(sqlprompt(row))
db.commit()

=
