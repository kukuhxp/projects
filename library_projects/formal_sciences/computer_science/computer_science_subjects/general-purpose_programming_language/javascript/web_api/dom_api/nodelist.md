# NODE LIST INTERFACE

NodeList adalah objek mirip array atau **array-like object** yang berisi kumpulan node dari DOM.

Example:

```
// HTML
<div id="box">
   Hello <span>World</span>!
</div>

// JS
let nodes = document.getElementById("box").childNodes;

console.log(nodes);

nodes.forEach(node => {
   console.log(node.nodeName, "-", node.textContent);
});

// Output
#text (Hello)
SPAN (<span>World</span>)
#text (!)
```

## Node List Instance Methods

### forEach() / NodeList.forEach()

- Parameters: ``
- Return Type: `NodeList`