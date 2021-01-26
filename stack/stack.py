#!/usr/bin/env python3
class Stack:
    def __init__(self):
        self.list = []
    def isEmpty(self):
        return True if len(self.list) == 0 else False
    def size(self):
        return len(self.list)
    def pop(self):
        return self.list.pop()
    def push(self,data):
        self.list.append(data)
    def top(self):
        return self.list[len(self.list)-1] if len(self.list)>0 else None
    def clear(self):
        self.list.clear()
    def __str__(self):
        return "{}".format(self.list)

def pre(c):
    if c=="*" or c=="/":
        return 2
    elif c=="+" or c=="-":
        return 1
    return 0
def isOperand(c):
    if c=="+" or c=="-" or c=="*" or c=="/":
        return True
    else:
        False
def InToPost(infix):
    postfix = ""
    stk = Stack()
    stk.push(' ')
    for c in infix:
        if not(isOperand(c)):
            postfix += c
        else:
            if pre(c)>pre(stk.top()):
                stk.push(c)
            else:
                postfix += stk.pop()
    while not(stk.isEmpty()):
        postfix += stk.pop()
    return postfix


if __name__ == "__main__":
    infix = "2+1*1-4/2"
    postfix = InToPost(infix)
    print(postfix)