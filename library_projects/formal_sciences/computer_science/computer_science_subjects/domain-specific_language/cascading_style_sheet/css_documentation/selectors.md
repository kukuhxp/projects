# SELECTORS

## Single Selector

- **All:** `*`
- **Id:** `#`
- **Class:** `.`
- **HTML Element:** `div`

## Combination Selector

- **Descendant:** `parent, child`
- **Child:** `parent > child`
- **Adjacent Sibling:** `element + first sibling`
- **General Sibling:** `element ~ all sibling`

## Attribute Name

- **Attribute Name:** `element[attribute]`

## Attribute Value

- **All Value:** `element[attribute] = value`
- **Start with Value:** `element[attribute] ^= value`
- **End with Value:** `element[attribute] $= value`
- **Contain Value:** `element[attribute] *= value`

## Psuedo-clsss

- **Active Element:** `selector : active / selector : active selector`
- **Hovered Element:** `selector : hover / selector : hover selector`
- **Focused Element:** `selector : focus / selector : focus selector`
- **First Child Element:** `selector : first-child`
- **Last Child Element:** `selector : last-child`

## Psuedo-element

- **Insert Before Element:** `selector :: before`
- **Insert After Element:** `selector :: after`
- **First Line of Text:** `selector :: first-line`
- **First Character of Text:** `selector :: first-letter`