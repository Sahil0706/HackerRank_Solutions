/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */

class Polygon{
    constructor(sides) {
        var s = 0;
        for(var i=0; i<sides.length; i++){
            s+=sides[i];
        }
        
        this.p = s;
        }
    perimeter(){
        return this.p;
    }
}

