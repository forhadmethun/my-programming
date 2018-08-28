from ete3 import Tree

# Generate a random tree (yule process)
t = Tree()
t.populate(8, names_library=list('ABCDEFGHIJKL'), random_branches=True)

print(t.get_ascii(attributes=['name', 'support'], show_internal=True))
t.render('tree.png', dpi=200)