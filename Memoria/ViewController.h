//
//  ViewController.h
//  Memoria
//
//  Created by Brenda  on 07/02/16.
//  Copyright © 2016 Brenda . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

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

@end

