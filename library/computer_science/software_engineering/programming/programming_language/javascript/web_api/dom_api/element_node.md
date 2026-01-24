# ELEMENT NODE INTERFACE

## Element Node Instance Properties:

### attributes / Element.attributes

- Status: `Read-only`
- Value: `NamedNodeMap`

### classList / Element.classList

- Status: `Read-only`
- Value: `DOMTokenList`

### children / Element.children

- Status: `Read-only`
- Value: `HTMLCollection`

### firstElementChild / Element.firstElementChild

- Status: `Read-only`
- Value: `Element`

### lastElementChild / Element.lastElementChild

- Status: `Read-only`
- Value: `Element`

### id / Element.id

- Status: `Writable`
- Value: `String`

### className / Element.className

- Status: `Read-only`
- Value: `String`

### tagName / Element.tagName

- Status: `Read-only`
- Value: `String`

### clientWidth / Element.clientWidth

- Status: `Read-only`
- Value: `Number`

### clientHeight / Element.clientHeight

- Status: `Read-only`
- Value: `Number`

### scrollWidth / Element.scrollWidth

- Status: `Read-only`
- Value: `Number`

### scrollHeight / Element.scrollHeight

- Status: `Read-only`
- Value: `Number`

### innerHTML / Element.innerHTML

- Status: `Writable`
- Value: `String`

### innerText / Element.innerText

- Status: `Writable`
- Value: `String`

### nextElementSibling / Element.nextElementSibling

- Status: `Read-only`
- Value: `String`

### outerHTML / Element.outerHTML

- Status: `Writable`
- Value: `String`

## Element Node Instance Methods

### append() / Element.append()

- Parameters: `Node`
- Return Type: `Undefined`

### replaceWith() / Element.replaceWith()

- Parameters: `Node`
- Return Type: `Undefined`

### remove() / Element.remove()

- Parameters: `Node`
- Return Type: `Undefined`

### insertAdjacentElement() / Element.insertAdjacentElement()

- Parameters: `Number, Element Node`
- Return Type: `Element`

### insertAdjacentHTML() / Element.insertAdjacentHTML()

- Parameters: `Number, Text`
- Return Type: `Undefined`

### insertAdjacentText() / Element.insertAdjacentText()

- Parameters: ``
- Return Type: `Undefined`

### getAttribute() / Element.getAttribute()

- Parameters: `String`
- Return Type: `String/Null`

### setAttribute() / Element.setAttribute()

- Parameters: `String`
- Return Type: `String/Null`

### removeAttribute() / Element.removeAttribute()

- Parameters: `String`
- Return Type: `Undefined`