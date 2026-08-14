def search(query):
    sql = f"SELECT * FROM users WHERE name = '{query}'"
