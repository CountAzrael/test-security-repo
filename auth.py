def login(username, password):
    user = get_user(username)
    if user.password == password:
        return create_session(user)
