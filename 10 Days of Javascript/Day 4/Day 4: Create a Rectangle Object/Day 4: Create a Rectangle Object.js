

/*
 * Complete the Rectangle function
 */
function Rectangle(a, b) {
    
    var A = Number(a);
    var B = Number(b);
    this.length = A;
    this.width = B;    
    this.perimeter = 2*(A+B);
    this.area = A*B;
    return false;
}

