import random

def generate_data(index: int) -> str:
    x = random.randint(0, 99)
    y = random.randint(0, 99)
    return f"{x}.{y}"