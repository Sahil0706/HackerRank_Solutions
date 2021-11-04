const ids = [1, 2, 3, 6, 9, 8, 7, 4]; // start positions ids in clockwise order
let nums = [1, 2, 3, 6, 9, 8, 7, 4]; // rotating in clockwise order
let btn5 = document.getElementById("btn5");

btn5.onclick = function() {
  nums.unshift(nums.pop());
  for (i = 0; i <= 7; i++) {
    document.getElementById("btn" + ids[i]).innerHTML = nums[i];
  }
};
