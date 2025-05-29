// Activating dropdown menu
let dropNav = document.querySelector('.drop-nav');
let activeDropNav = document.querySelector('.active-drop-nav');
dropNav.addEventListener('click', (e) => {
    activeDropNav.classList.toggle('show-nav');
});

// Activating toggle button
let toggleBtn = document.querySelector(".toggle-btn");
let nav = document.getElementsByTagName('nav')[0];
let toggleIcon = document.querySelector('.fa-bars');
toggleBtn.onclick = () => {
    nav.classList.toggle('active');    
    toggleIcon.classList.toggle('fa-bars');
    toggleIcon.classList.toggle('fa-xmark');
}

// Flashsale deadline
var txt = document.getElementById('time');
var countTime = setInterval(function() {
    var now = new Date();
    var deadLine = new Date('2027-06-06T12:00:00');
    var different = deadLine - now;
    if (different <= 0) {
        clearInterval(countTime);
        txt.innerHTML = 'Flash sale telah Berakhir';
    } else {
        var day = Math.floor(different/ (1000 * 60 *60 *24));
        var hour = Math.floor(different % (1000 * 60 *60 *24)/(1000*60*60));
        var minute = Math.floor(different % (1000 * 60 *60 )/(1000*60));
        var second = Math.floor(different % (1000 * 60 )/(1000));
        txt.innerHTML = '<i class="fa fa-bolt"></i> Flash sale berakhir pada: '+ day + ' day '+ hour + ':'+ minute + ':'+ second;
    }
}, 1000);

// Carousel
var counter = 1;
setInterval(function() {
    document.getElementById('radio' + counter).checked = true;
    counter++;
    if(counter > 4) counter = 1;
}, 5000);

// Rubik's payment
var btn1 = document.querySelectorAll('div#rubik button');
btn1.onclick = function() {
    var a = confirm('yakin ingin beli?');
    if (a == true) document.location.href = 'pembayaran.html';
    else document.location.href = 'rubik.html';
}

// Accessoris's payment
var btn2 = document.querySelectorAll('div#Accessories button');
btn2.onclick = function() {
    var a= confirm('yakin ingin beli?');
    if ( a == true)document.location.href = 'pembayaran.html';
    else document.location.href = 'acessories.html';
}

// Flashsale's payment
var btn3 = document.querySelectorAll('div#flashsale button');
btn3.onclick = function() {
    var a = confirm('yakin ingin beli?');
    if ( a == true) document.location.href = 'pembayaran.html';
    else document.location.href = 'index.html';
}

// Creating date objecr
let date = new Date();
let dateElem = document.getElementById('date');
dateElem.innerHTML += date.getFullYear();

// Product's rating
let boxStar = document.getElementsByClassName('box-star');
// The looping based on elements length
for (let i of boxStar) {
    // The looping limit is based of elements id (between 1 of 5)
    // Creating the yellow stars
    for(let j = 0; j < Number(i.id); j++) {
        i.innerHTML += '<i class="fa fa-star" style="color:#dced17"></i>';
    }
    // Creating the black stars
    for(let k = 0; k < 5 - Number(i.id); k++) {
        i.innerHTML += '<i class="fa fa-star" style="color:#5f5f5f"></i>';
    }
}

var list = document.querySelector('.container ul');
var b = document.querySelector('form#forms img');
var search = document.forms['forms'].querySelector('input');
search.addEventListener('keyup',function(e){
    var term = e.target.value.toLowerCase();
    var rubik = list.getElementsByTagName('li');
    Array.from(rubik).forEach(function(r){
        var title = r.firstElementChild.textContent;
        if(title.toLowerCase().indexOf(term) != -1){
            r.style.display ='inline-block';
            b.style.display = 'inline';
        }
        else{
            r.style.display ='none';
            b.style.display ='none';
        }
    })
}); 

