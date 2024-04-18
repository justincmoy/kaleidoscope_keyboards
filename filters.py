from jinja2.exceptions import UndefinedError

def kaleidoscope_key(key):
    return key["kaleidoscope"] if "kaleidoscope" in key else key

def model100_key(key):
    try:
        return key["model100"] if "model100" in key else kaleidoscope_key(key)
    except UndefinedError:
        pass

    return "XXX"

def model100_key_shift(key):
    out = model100_key(key)
    if out == "XXX":
        return out

    return f"LSHIFT({out})"
