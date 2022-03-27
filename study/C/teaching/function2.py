

def multi_incre_char(a, b, c) :
    return  chr(ord(a) + 1), chr(ord(b) + 1), chr(ord(c) + 1)


if __name__ == "__main__":
    a = input()
    b = input()
    c = input()
    
    out_a, out_b, out_c = multi_incre_char(a, b, c)
    
    print(out_a, out_b, out_c)