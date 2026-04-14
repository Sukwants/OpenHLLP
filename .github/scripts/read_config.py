import sys

import yaml


def main() -> int:
    if len(sys.argv) != 2:
        return 0

    path = sys.argv[1]

    try:
        with open(path, encoding="utf-8") as file:
            config = yaml.safe_load(file) or {}
    except FileNotFoundError:
        return 0

    if not isinstance(config, dict):
        return 0

    if config.get("version") != 1:
        return 0

    diff = config.get("diff")
    if not isinstance(diff, dict):
        return 0

    params = diff.get("params")
    if not isinstance(params, list):
        return 0

    for arg in params:
        if isinstance(arg, str) and arg:
            print(arg)

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
