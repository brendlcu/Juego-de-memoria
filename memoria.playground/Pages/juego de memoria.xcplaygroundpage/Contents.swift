//: Playground - noun: a place where people can play

import UIKit

//juego de memoria. Tarea sem 2

var num = 0...100
let B = "Bingo!!!"
let I = "Impar!!!"
let P = "Par!!!"
let S = "Viva Swift!!!"


for n in num {
    if (n%5==0){print ("\(n)\t\(B)")}
    if (n%2==0){print ("\(n)\t\(P)")}
    if (n%2>0){print ("\(n)\t\(I)")}
    if n>=30 && n<=40 {print ("\(n)\t\(S)")}
}


