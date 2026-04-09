import random

def generate_data(index: int) -> str:
    x = random.randint(-100, 100)
    if not -10 <= x <= 65:
        return f"{x}\n{random.randint(-10, 65)}\n"
    return f"{x}"