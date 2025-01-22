from flask import Flask, request, render_template, redirect
from database_config import get_db_connection

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/employees', methods=['GET'])
def view_employees():
    conn = get_db_connection()
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM Employees")
    employees = cursor.fetchall()
    conn.close()
    return render_template('view_employees.html', employees=employees)

@app.route('/add_employee', methods=['GET', 'POST'])
def add_employee():
    if request.method == 'POST':
        name = request.form['name']
        email = request.form['email']
        phone = request.form['phone']
        department = request.form['department']

        conn = get_db_connection()
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO Employees (Name, Email, Phone, Department) 
            VALUES (?, ?, ?, ?)
        """, (name, email, phone, department))
        conn.commit()
        conn.close()
        return redirect('/employees')

    return render_template('add_employee.html')

@app.route('/update_employee/<int:id>', methods=['GET', 'POST'])
def update_employee(id):
    conn = get_db_connection()
    cursor = conn.cursor()

    if request.method == 'POST':
        name = request.form['name']
        email = request.form['email']
        phone = request.form['phone']
        department = request.form['department']
        cursor.execute("""
            UPDATE Employees
            SET Name = ?, Email = ?, Phone = ?, Department = ?
            WHERE EmployeeID = ?
        """, (name, email, phone, department, id))
        conn.commit()
        conn.close()
        return redirect('/employees')

    cursor.execute("SELECT * FROM Employees WHERE EmployeeID = ?", (id,))
    employee = cursor.fetchone()
    conn.close()
    return render_template('update_employee.html', employee=employee)

@app.route('/delete_employee/<int:id>')
def delete_employee(id):
    conn = get_db_connection()
    cursor = conn.cursor()
    cursor.execute("DELETE FROM Employees WHERE EmployeeID = ?", (id,))
    conn.commit()
    conn.close()
    return redirect('/employees')

if __name__ == '__main__':
    app.run(debug=True)
