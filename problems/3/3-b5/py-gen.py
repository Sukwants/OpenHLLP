import random

def generate_data(index: int) -> str:
    """
    生成测试数据。
    返回格式: "Y M D" (字符串)
    """
    # 1. 随机生成年份 (题目要求：任何合理整型，包括负数)
    if random.random() < 0.1:
        year = random.randint(-1000, 0)  # 10% 概率生成负数或0
    else:
        year = random.randint(1900, 3000)  # 90% 概率生成正常年份

    # 2. 决定测试场景类型
    # 0: 正常合法日期
    # 1: 月份错误 (<1 或 >12)
    # 2: 日期错误 (日 > 该月最大天数)
    # 3: 日期错误 (日 < 1)
    # 4: 闰年/平年 2月边界特测
    scenario = random.randint(0, 4)

    if scenario == 0:
        # --- 正常合法日期 ---
        month = random.randint(1, 12)
        # 判断闰年
        is_leap = (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

        if month in [1, 3, 5, 7, 8, 10, 12]:
            day = random.randint(1, 31)
        elif month in [4, 6, 9, 11]:
            day = random.randint(1, 30)
        else:  # Feb
            day = random.randint(1, 29 if is_leap else 28)

    elif scenario == 1:
        # --- 月份错误 ---
        if random.random() < 0.5:
            month = random.randint(13, 20)  # > 12
        else:
            month = random.randint(-10, 0)  # < 1
        day = random.randint(1, 30)  # 随便给个日

    elif scenario == 2:
        # --- 日期错误 (日 > 最大天数) ---
        month = random.choice([1, 2, 4])  # 选几个代表性月份
        if month == 2:
            # 2月给个 30 或 31，肯定错
            day = random.choice([30, 31])
        elif month == 4:
            # 小月给个 31
            day = 31
        else:
            # 大月给个 32
            day = 32

    elif scenario == 3:
        # --- 日期错误 (日 < 1) ---
        month = random.randint(1, 12)
        day = random.randint(-10, 0)

    else:  # scenario == 4
        # --- 闰年/平年 2月29日 特测 ---
        month = 2
        day = 29
        # 强制年份为平年或闰年，看随机
        if random.random() < 0.5:
            year = 2023  # 平年 -> 非法
        else:
            year = 2024  # 闰年 -> 合法

    return f"{year} {month} {day}"