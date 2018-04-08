#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jan 17 10:23:45 2018

@author: ruddirodriguez
"""


def nonzeroele(L):
    count=0
    #import numpy
    for i in range (len(L)):
        
        
        if L[i]!=0:
            count = count+1
        
    
    return count