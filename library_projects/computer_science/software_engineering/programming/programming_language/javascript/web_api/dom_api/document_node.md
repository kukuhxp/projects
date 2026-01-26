# DOCUMENT NODE INTERFACE		

## Private Constructor Function

Example:

`new Document();`

## Document Instance Properties

### all / document.all

- Status: `Writable`
- Value: `HTMLCollection`

### cookie / document.cookie

- Status: `Writable`
- Value: `String`

### domain / document.domain

- Status: `Writable`
- Value: `String`

### documentURl / document.documentURl

- Status: `Read-only`
- Value: `String`

### URL / document.URL

- Status: `Read-only`
- Value: `String`

### head / document.head

- Status: `Read-only`
- Value: `Element Node`

### title / document.title

- Status: `Writable`
- Value: `String / "Title of Document"`

### body / document.body

- Status: `Writable`
- Value: `Element Node / HTML Body`

### forms / document.forms

- Status: `Read-only`
- Value: `HTMLCollection / HTML Forms`

### images / document.images

- Status: `Read-only`
- Value: `HTMLCollection / HTML Images`

### links / document.links

- Status: `Read-only`
- Value: `HTMLCollection / HTML Links`

### embeds / document.embeds

- Status: `Read-only`
- Value: `HTMLCollection / HTML Embeds`

### plugins / document.plugins

- Status: `Read-only`
- Value: `HTMLCollection`

### scripts / document.scripts

- Status: `Read-only`
- Value: `HTMLCollection`

### fonts / document.fonts

- Status: `Read-only`
- Value: `Interface (FontFaceSet)`

### children / document.children

- Status: `Read-only`
- Value: `HTMLCollection`

### firstChildElement / document.firstChildElement

- Status: `Read-only`
- Value: `Element`

### lastChildElement / document.lastChildElement

- Status: `Read-only`
- Value: `Element`

### implementation / document.implementation

- Status: `Read-only`
- Value: `Interface (DOMImplementation)`

### documentElement / document.documentElement

- Status: `Read-only`
- Value: `Element`

## Document Node Instance Methods

### createElement() / document.createElement()

- Parameters: `String, Object`
- Return Type: `Element`

### createAttribute() / document.createAttribute()

- Parameters: `String, Object`
- Return Type: `Attr`

### createTextNode() / document.createTextNode()

- Parameters: `String, Object`
- Return Type: `Text`

### createComment() / document.createComment()

- Parameters: `String, Object`
- Return Type: `Comment`

### createDocumentFragment() / document.createDocumentFragment()

- Parameters: `None`
- Return Type: `Document Fragment`

### getElementById() / document.getElementById()

- Parameters: `String, Object`
- Return Type: `Element`

### getElementsByClassName() / document.getElementsByClassName()

- Parameters: `String, Object`
- Return Type: `HTMLCollection`

### getElementsByTagName() / document.getElementsByTagName()

- Parameters: `String, Object`
- Return Type: `HTMLCollection`

### getElementsByName() / document.getElementsByName()

- Parameters: `String, Object`
- Return Type: `NodeList`

### querySelector() / document.querySelector()

- Parameters: `String, Object`
- Return Type: `Element`

### querySelectorAll() / document.querySelectorAll()

- Parameters: `String, Object`
- Return Type: `NodeList`

### importNode() / document.importNode()

- Parameters: `Node, DocumentFragment, Boolean`
- Return Type: `Node`

### getSelection() / document.getSelection()

- Parameters: `None`
- Return Type: `Object/Null`

### elementsFromPoint() / document.elementsFromPoint()

- Parameters: `Number`
- Return Type: `Array`

### hasFocus() / document.hasFocus()

- Parameters: `None`
- Return Type: `Boolean`

### open() / document.open()

- Parameters: `None`
- Return Type: `Document`

### write() / document.write()

- Parameters: `String, Object`
- Return Type: `Undefined`

### writeln() / document.writeln()

- Parameters: `String, Object`
- Return Type: `Undefined`

### close() / document.close()

- Parameters: `None`
- Return Type: `Undefined`