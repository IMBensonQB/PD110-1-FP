import os
import sqlite3
import openpyxl
import subprocess

def sqlprompt(row):
    result = '''
    insert into course
    (NULL,
    '''
    clsromlst = [12,13,18,19,20,21]
    clasromstr = [""]*6
    for index in clsromlst:
        if (len(row[index]) > 3):
            clasromstr.append(row[index])
    for i in range(0,12):
        try:
            temp = int(row[i])
            result += str(temp) + ","
        except:
            result += "\"" + row[i] + "\"" + ","
    for i in range(0, 2):
        result +=  "\"" + clasromstr[i] + "\"" + ","
    for i in range(14, 18):
        try:
            temp = int(row[i])
            result += str(temp) + ","
        except:
            result += "\"" + row[i] + "\"" + ","
    for i in range(2, 6):
        result +=  "\"" + clasromstr[i] + "\"" + ","
    for i in range(21, 26):
        try:
            temp = int(row[i])
            result += str(temp) + ","
        except:
            result += "\"" + row[i] + "\"" + ","
    timeList = getTimeList(row[15])
    for i in range(0,20):
        result += str(timeList[i]) + ","
    if "限大一" in row[16]:
        result += "1,"
        if "限大二" in row[16]:
            result += "2,"
            if "限大三" in row[16]:
                    result += "3,"
                    if "限大四" in row[16]:
                        result += "4,"
                    else:
                        result+= "0,"
    if "限本系" in row[16]:
        result += "true,"
    else:
        result += "false,"
    result += input("Category1: 0 共同 1 通識 2 系上課") + ","
    result += input("Category2: 0 共同 1 通識 2 系上課") + ","
    if "初選不開放" in row[16]:
        result += "true,"
    else:
        result += "false,"
    #libcat
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
