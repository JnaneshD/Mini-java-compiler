f=open("input3.txt","r")
file3=list(f)
reg=0
memory=[]
r1=[]
r2=[]
mem=1
for i in file3:
    c=i.split(" ")
    d=c.pop()
    e=d.replace("\n","")
    c.append(e)
    #print(c)
    if(':' in c):
        print(f"{c[0]} :",end=" ")
        c=c[2:]
    if(len(c)>1):
        if('Block' in c):
            print("New Block")
        elif('goto' in c):
            if('if' in c):
                if('<=' in c):
                    e=c.index('<=')
                    f=c[e-1]
                    g=c[e+1]
                    w=c[-1]
                    if((f.isnumeric()) and (g.isnumeric())):
                        print(f"blte {f} {g} {w}")
                    elif(g.isnumeric()):
                        if(f in r1):
                            p=r2[r1.index(f)]
                            print(f"blte {p} {g} {w}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"blte R{reg%8+1} {g} {w}")
                            reg+=1
                    else:
                        if((f in r1) and (g in r1)):
                            p=r2[r1.index(f)]
                            q=r2[r1.index(g)]
                            print(f"blte {p} {q} {w}")
                        elif(f in r1):
                            p=r2[r1.index(f)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"blte {p} R{reg%8+1} {w}")
                            reg+=1
                        elif(g in r1):
                            p=r2[r1.index(g)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"blte {p} R{reg%8+1} {w}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            print(f"blte R{(reg-1)%8+1} R{reg%8+1} {w}")
                elif('>=' in c):
                    e=c.index('>=')
                    f=c[e-1]
                    g=c[e+1]
                    w=c[-1]
                    if((f.isnumeric()) and (g.isnumeric())):
                        print(f"bgte {f} {g} {w}")
                    elif(g.isnumeric()):
                        if(f in r1):
                            p=r2[r1.index(f)]
                            print(f"bgte {p} {g} {w}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"bgte R{reg%8+1} {g} {w}")
                            reg+=1
                    else:
                        if((f in r1) and (g in r1)):
                            p=r2[r1.index(f)]
                            q=r2[r1.index(g)]
                            print(f"bgte {p} {q} {w}")
                        elif(f in r1):
                            p=r2[r1.index(f)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"bgte {p} R{reg%8+1} {w}")
                            reg+=1
                        elif(g in r1):
                            p=r2[r1.index(g)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"bgte {p} R{reg%8+1} {w}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            print(f"bgte R{(reg-1)%8+1} R{reg%8+1} {w}")
                elif('<' in c):
                    e=c.index('<')
                    f=c[e-1]
                    g=c[e+1]
                    w=c[-1]
                    if((f.isnumeric()) and (g.isnumeric())):
                        print(f"blt {f} {g} {w}")
                    elif(g.isnumeric()):
                        if(f in r1):
                            p=r2[r1.index(f)]
                            print(f"blt {p} {g} {w}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"blt R{reg%8+1} {g} {w}")
                            reg+=1
                    else:
                        if((f in r1) and (g in r1)):
                            p=r2[r1.index(f)]
                            q=r2[r1.index(g)]
                            print(f"blt {p} {q} {w}")
                        elif(f in r1):
                            p=r2[r1.index(f)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"blt {p} R{reg%8+1} {w}")
                            reg+=1
                        elif(g in r1):
                            p=r2[r1.index(g)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"blt {p} R{reg%8+1} {w}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            print(f"blt R{(reg-1)%8+1} R{reg%8+1} {w}")
                elif('>' in c):
                    e=c.index('>')
                    f=c[e-1]
                    g=c[e+1]
                    w=c[-1]
                    if((f.isnumeric()) and (g.isnumeric())):
                        print(f"bgt {f} {g} {w}")
                    elif(g.isnumeric()):
                        if(f in r1):
                            p=r2[r1.index(f)]
                            print(f"bgt {p} {g} {w}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"bgt R{reg%8+1} {g} {w}")
                            reg+=1
                    else:
                        if((f in r1) and (g in r1)):
                            p=r2[r1.index(f)]
                            q=r2[r1.index(g)]
                            print(f"bgt {p} {q} {w}")
                        elif(f in r1):
                            p=r2[r1.index(f)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"bgt {p} R{reg%8+1} {w}")
                            reg+=1
                        elif(g in r1):
                            p=r2[r1.index(g)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"bgt {p} R{reg%8+1} {w}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            print(f"bgt R{(reg-1)%8+1} R{reg%8+1} {w}")
                elif('==' in c):
                    e=c.index('==')
                    f=c[e-1]
                    g=c[e+1]
                    w=c[-1]
                    if((f.isnumeric()) and (g.isnumeric())):
                        print(f"beq {f} {g} {w}")
                    elif(g.isnumeric()):
                        if(f in r1):
                            p=r2[r1.index(f)]
                            print(f"beq {p} {g} {w}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"beq R{reg%8+1} {g} {w}")
                            reg+=1
                    else:
                        if((f in r1) and (g in r1)):
                            p=r2[r1.index(f)]
                            q=r2[r1.index(g)]
                            print(f"beq {p} {q} {w}")
                        elif(f in r1):
                            p=r2[r1.index(f)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"beq {p} R{reg%8+1} {w}")
                            reg+=1
                        elif(g in r1):
                            p=r2[r1.index(g)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"beq {p} R{reg%8+1} {w}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            print(f"beq R{(reg-1)%8+1} R{reg%8+1} {w}")
                elif('!=' in c):
                    e=c.index('!=')
                    f=c[e-1]
                    g=c[e+1]
                    w=c[-1]
                    if((f.isnumeric()) and (g.isnumeric())):
                        print(f"bne {f} {g} {w}")
                    elif(g.isnumeric()):
                        if(f in r1):
                            p=r2[r1.index(f)]
                            print(f"bne {p} {g} {w}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"bne R{reg%8+1} {g} {w}")
                            reg+=1
                    else:
                        if((f in r1) and (g in r1)):
                            p=r2[r1.index(f)]
                            q=r2[r1.index(g)]
                            print(f"bne {p} {q} {w}")
                        elif(f in r1):
                            p=r2[r1.index(f)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"bne {p} R{reg%8+1} {w}")
                            reg+=1
                        elif(g in r1):
                            p=r2[r1.index(g)]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {g}")
                            print(f"bne {p} R{reg%8+1} {w}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(g)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            print(f"bne R{(reg-1)%8+1} R{reg%8+1} {w}")
                else:
                    w=c[-1]
                    if(c[1] in r1):
                        p=r2[r1.index(c[1])]
                        print(f"bne {p} 0 {w}")
                    else:
                        if(len(r1)==8):
                            r1.pop(0)
                            r2.pop(0)
                        r1.append(g)
                        r2.append(f"R{reg%8+1}")
                        print(f"ld R{reg%8+1} {c[1]}")
                        print(f"bne R{reg%8+1} 0 {w}")
                        reg+=1
            else:
                w=c[-1]
                print(f"b {w}")
        elif('return' in c):
            print(c)
        else:
            if('+' in c):
                d=c.index('+')
                e=c[d-1]
                f=c[d+1]
                if(c[0] not in r1):
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        if(len(r1)==8):
                            r1.pop(0)
                            r2.pop(0)
                        r1.append(c[0])
                        r2.append(f"R{reg%8+1}")
                        print(f"add R{reg%8+1} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        if(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"add R{reg%8+1} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"add R{reg%8+1} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"add R{reg%8+1} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"add R{reg%8+1} R{(reg-1)%8+1} {g}")
                    else:
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"add R{reg%8+1} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"add R{reg%8+1} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==6):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"add R{reg%8+1} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
                else:
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        print(f"add {j} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        j=r2[r1.index(c[0])]
                        if(f.isnumeric()):
                            print(f"add {j} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"add {j} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            print(f"add {j} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"add {j} R{(reg-1)%8+1} {g}")
                    else:
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"add {j} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"add {j} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"add {j} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
            elif('-' in c):
                d=c.index('-')
                e=c[d-1]
                f=c[d+1]
                if(c[0] not in r1):
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        if(len(r1)==8):
                            r1.pop(0)
                            r2.pop(0)
                        r1.append(c[0])
                        r2.append(f"R{reg%8+1}")
                        print(f"sub R{reg%8+1} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        if(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"sub R{reg%8+1} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"sub R{reg%8+1} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"sub R{reg%8+1} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"sub R{reg%8+1} R{(reg-1)%8+1} {g}")
                    else:
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"sub R{reg%8+1} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"sub R{reg%8+1} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==6):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"sub R{reg%8+1} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
                else:
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        print(f"sub {j} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        j=r2[r1.index(c[0])]
                        if(f.isnumeric()):
                            print(f"sub {j} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"sub {j} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            print(f"sub {j} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"sub {j} R{(reg-1)%8+1} {g}")
                    else:
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"sub {j} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"sub {j} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"sub {j} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
            elif('*' in c):
                d=c.index('*')
                e=c[d-1]
                f=c[d+1]
                if(c[0] not in r1):
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        if(len(r1)==8):
                            r1.pop(0)
                            r2.pop(0)
                        r1.append(c[0])
                        r2.append(f"R{reg%8+1}")
                        print(f"mul R{reg%8+1} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        if(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mul R{reg%8+1} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mul R{reg%8+1} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mul R{reg%8+1} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mul R{reg%8+1} R{(reg-1)%8+1} {g}")
                    else:
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mul R{reg%8+1} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mul R{reg%8+1} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==6):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mul R{reg%8+1} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
                else:
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        print(f"mul {j} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        j=r2[r1.index(c[0])]
                        if(f.isnumeric()):
                            print(f"mul {j} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"mul {j} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            print(f"mul {j} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"mul {j} R{(reg-1)%8+1} {g}")
                    else:
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"mul {j} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"mul {j} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"mul {j} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
            elif('/' in c):
                d=c.index('/')
                e=c[d-1]
                f=c[d+1]
                if(c[0] not in r1):
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        if(len(r1)==8):
                            r1.pop(0)
                            r2.pop(0)
                        r1.append(c[0])
                        r2.append(f"R{reg%8+1}")
                        print(f"div R{reg%8+1} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        if(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"div R{reg%8+1} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"div R{reg%8+1} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"div R{reg%8+1} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"div R{reg%8+1} R{(reg-1)%8+1} {g}")
                    else:
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"div R{reg%8+1} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"div R{reg%8+1} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==6):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"div R{reg%8+1} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
                else:
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        print(f"div {j} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        j=r2[r1.index(c[0])]
                        if(f.isnumeric()):
                            print(f"div {j} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"div {j} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            print(f"div {j} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"div {j} R{(reg-1)%8+1} {g}")
                    else:
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"div {j} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"div {j} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"div {j} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
            elif('%' in c):
                d=c.index('%')
                e=c[d-1]
                f=c[d+1]
                if(c[0] not in r1):
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        if(len(r1)==8):
                            r1.pop(0)
                            r2.pop(0)
                        r1.append(c[0])
                        r2.append(f"R{reg%8+1}")
                        print(f"mod R{reg%8+1} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        if(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mod R{reg%8+1} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mod R{reg%8+1} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mod R{reg%8+1} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mod R{reg%8+1} R{(reg-1)%8+1} {g}")
                    else:
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mod R{reg%8+1} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mod R{reg%8+1} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==6):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mod R{reg%8+1} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1
                else:
                    if((e in r1) and (f in r1)):
                        g=r2[r1.index(e)]
                        h=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        print(f"mod {j} {g} {h}")
                    elif(e in r1):
                        g=r2[r1.index(e)]
                        j=r2[r1.index(c[0])]
                        if(f.isnumeric()):
                            print(f"mod {j} {g} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"mod {j} {g} R{(reg-1)%8+1}")
                    elif(f in r1):
                        g=r2[r1.index(f)]
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            print(f"mod {j} {e} {g}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"mod {j} R{(reg-1)%8+1} {g}")
                    else:
                        j=r2[r1.index(c[0])]
                        if(e.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"mod {j} {e} R{(reg-1)%8+1}")
                        elif(f.isnumeric()):
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            print(f"mod {j} R{(reg-1)%8+1} {f}")
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(e)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {e}")
                            reg+=1
                            r1.append(f)
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {f}")
                            reg+=1
                            print(f"mod {j} R{(reg-2)%8+1} R{(reg-1)%8+1}")
                    if(c[d-3][0]=='T' and len(c[d-3])>1 and c[d-3][1:].isdecimal()):
                        print(f"sd R{reg%8+1} {c[d-3]}")
                    elif(c[d-3] not in memory):
                        memory.append(c[d-3])
                    reg+=1

            else:
                if(c[-1].isnumeric()):
                    if(c[0] not in r1):
                        if(len(r1)==8):
                            r1.pop(0)
                            r2.pop(0)
                        r1.append(c[0])
                        r2.append(f"R{reg%8+1}")
                        print(f"mov R{reg%8+1} {c[-1]}")
                        if(c[0].find("T")==-1):
                            print(f"sd R{reg%8+1} {c[0]}")
                        reg+=1
                    else:
                        j=r2[r1.index(c[0])]
                        print(f"mov {j} {c[-1]}")
                        if(c[0].find("T")==-1):
                            print(f"sd {j} {c[0]}")
                        reg+=1

                else:
                    if(c[0] not in r1):
                        if(c[-1] in r1):
                            p=r2[r1.index(c[-1])]
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mov R{reg%8+1} {p}")
                            if(c[0].find("T")==-1):
                                print(f"sd R{reg%8+1} {c[0]}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.pop(0)
                                r2.pop(0)
                            elif(len(r1)==7):
                                r1.pop(0)
                                r2.pop(0)
                            r1.append(c[-1])
                            r2.append(f"R{reg%8+1}")
                            print(f"ld R{reg%8+1} {c[-1]}")
                            reg+=1
                            r1.append(c[0])
                            r2.append(f"R{reg%8+1}")
                            print(f"mov R{reg%8+1} R{(reg-1)%8+1}")
                            if(c[0].find("T")==-1):
                                print(f"sd R{reg%8+1} {c[0]}")
                            reg+=1
                    else:
                        j=r2[r1.index(c[0])]
                        if(c[-1] in r1):
                            p=r2[r1.index(c[-1])]
                            print(f"mov {j} {p}")
                            if(c[0].find("T")==-1):
                                print(f"sd {j} {c[0]}")
                            reg+=1
                        else:
                            if(len(r1)==8):
                                r1.pop(0)
                                r2.pop(0)
                                r1.append(c[-1])
                                r2.append(f"R{reg%8+1}")
                                print(f"ld R{reg%8+1} {c[-1]}")
                                reg+=1
                                print(f"mov R{reg%8+1} R{(reg-1)%8+1}")
                                if(c[0].find("T")==-1):
                                    print(f"sd R{reg%8+1} {c[0]}")
                                reg+=1


                if(c[0] not in memory):
                    memory.append(c[0])
    else:
        pass
#print(memory)
#print(r1)
#print(r2)
