// 1. [] + []
console.log("1. [] + [] =", [] + []); // ""

// 2. [] + {} vs {} + []
console.log("2. [] + {} =", [] + {}); // "[object Object]"
console.log("3. {} + [] =", {} + []); // 0

// 3. typeof null
console.log("4. typeof null =", typeof null); // "object"

// 4. NaN === NaN
console.log("5. NaN === NaN =", NaN === NaN); // false
console.log("6. Number.isNaN(NaN) =", Number.isNaN(NaN)); // true

// 5. true + true
console.log("7. true + true =", true + true); // 2

// 6. Campuran string + angka
console.log("8. 1 + '2' + 3 =", 1 + "2" + 3); // "123"
console.log("9. 1 + 2 + '3' =", 1 + 2 + "3"); // "33"

// 7. null >= 0
console.log("10. null >= 0 =", null >= 0); // true