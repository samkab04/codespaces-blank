```
CSCE	20 004	 – Programming	Project	
Due	Date	– 01/23/2025 at	11:59pm
```
_Note:		For	this	project,	we	want	you	to	write	your	program	by	yourself	using	sample	
code	in	the	PF1	website	without using	any	generative	AI	programs._

**1.	Problem	Statement:**

The	goal	of	this	programming	assignment	is	to	give	students	experience	with	
input/output	commands	and basic	numerical	calculations	in	C++. In	particular,	your	
task	is	to	calculate	how	many	boxes	of	the	same	size	can	be	placed	inside	a	truck	for	
shipping.



Your	program	should	do	the	following:

- Prompt	the	user	for	the	size	of	the	box	(height,	width,	length)	in	inches. For	
    example,	a	common	box	size	is	15”	by	16”	by	22”.
- Prompt	the	user	for	the	interior	size	of	the	truck	(height,	width,	length)	in	feet.
    For	example,	a	typical	truck	size	is	8’	by	7’	by	20’.
- Calculate	and	print	how	many	boxes	of	this	size	will	fit	into	the	truck when	the	
    height,	width,	length	orientation	of	the	box	is	aligned	with	the	height,	width,	
    length	orientation	of	the	truck.
- Calculate	and	print	how	much	empty	space	there	is	in	the	truck	all	three	
    directions	(height,	width,	length)	after	the	boxes	are	put	in	the	truck.
- Calculate	and	print	the	space	utilization	of	the	truck	(the	percentage	of	available	
    space	filled	by	the	boxes). For	example, with	the	box	size	and	truck	size	above,	
    we	achieve 81.8%	truck	space	utilization.
**2.	Design:**

Your	first	design task is	to	decide	how	you	want	to	do	the	program	input/output.
What	messages	you	want	to	print,	how	to	read	inputs,	how	to	write	outputs. There	is	
no	“right	way”	or	“wrong	way”	to	do	this	but	you	want	your	program	to	be	easy	to	
use,	and	the	outputs	to	be	easy	to	understand.


Your	second	design	task	is	to	decide	what	formulas	are	needed to	calculate	how	
many	boxes	will	fit	into	the	truck,	and	translate	these	formulas	into	C++	code. You	
should	test	your	formulas	and	calculations	by	hand	to	verify	that	your	code	is	
correct. To	keep	things	simple,	you	can	assume	the	boxes	are	rigid	and	keep	their	
shape	when	piled	on	top	of	each	other,	and	no	space	is	needed	between	boxes.

Your	final	design	task	is	to	decide	what	formulas	are	needed	to	calculate	the	amount	
of	empty	space,	and	the	space	utilization	of	the	truck,	and	translate	these	formulas	
into	C++	code. You	should	test	your	formulas	and	calculations	by	hand	to	verify	that	
your	code	is	correct.

**3.	Implementation:**

Go	to	the	“Source	Code”	section	on	the	class	website	and	look	at	the	sample	
programs	in	the	“Programming	Basics”	section	to	find	an	example	of	user	
input/output	to	start	with	for	this	project.

To	create	your	program,	start	by	editing	the	comments	so	they	correspond	to	the	
steps	you	intend	to	use	to	solve	this	problem.		Next,	work	your	way	down	the	
program	removing	sample	code	and	replacing	it	with	code	to	implement	your	steps.	

When	you	think	you	are	about	halfway	through	this	implementation process,	save	a	
copy	of	your	program	in	a	file	called	“midpoint.cpp”.		When	you	finish	your	project,	
upload	your	final	program	and	your	“midpoint.cpp”	with	your	project	report	and	
testing	output	into	Blackboard.

It	is	very	important	to	develop	your	code	incrementally	writing	comments,	adding	
code,	compiling,	debugging,	a	little	bit	at	a	time.	This	way,	you	always	have	a	
program	that	"does	something"	even	if	it	is	not	complete.

**4.	Testing:**

Test	your	program	with	a	variety of	inputs	to	check	that	it	operates	correctly	for	all	
of	the	requirements	listed	above.

Once	your	program	is	running	correctly,	you	should	run	it	several	times	with	boxes	
of	the	same	size	but	different	orientations to	see	what	orientation	gives	the	highest	
space	utilization.	For	example,	using	16”	by	15”	by	22”	instead	of	15”	by	16”	by	22”.	
Include	the	results	of	your	experiments	in	your	project	report.

You	are	NOT	required	to	add	error	checking	in	this	program,	but	it	is	always	good	to	
test	a	program	to	see	what	happens	to	your	program	if	the	user	ignores	your	
instructions	and	enters	invalid	data	(like	“hello	mom”). You	should	cut/paste	these	
results	into your	project	report	to	document	what	your	program	does	in	these	cases.


**5.	Documentation:**

When	you	have	completed	your	C++	program,	write	a	short	report	using	the	
“Programming Project	Report	Template”	describing	what	the	objectives	were,	what	
you	did,	and	the	status	of	the	program.	Does	your	program work	properly	for	all	test	
cases?	Are	there	any	known	problems?	Save	this	project	report	in	a	separate	
document to	be	submitted	electronically.

**6.	Project	Submission:**

In	this	class,	we	will	be	using	electronic	project	submission	to	make	sure	that	all	
students	hand	their	programming	projects	and	labs	on	time,	and	to	perform	
automatic	plagiarism	analysis	of	all	programs	that	are	submitted.	

When	you	have	completed	the	tasks	above	go	to	Blackboard	to	upload your	
documentation	(report.docx	or	report.pdf),	and	your	C++	code (midpoint.cpp	and	
project1.cpp).	Do	NOT	upload	an	executable	version	of	your	program.

The	dates	on	your	electronic	submission	will	be	used	to	verify	that	you	met	the	due	
date	above.	All	late	projects	will	receive	reduced	credit:

```
10%	off	if	less	than	1	day	late,
20%	off	if	less	than	2	days	late,
30%	off	if	less	than	3	days	late,
no	credit	if	more	than	3	days	late.	
```
You	will	receive	partial	credit	for	all programs	that	compile	even	if	they	do	not	meet	
all	program	requirements,	so	handing	projects	in	on	time	is	highly	recommended.

**7.	Academic	Honesty	Statement:**

Students	are	expected	to	submit	their	own	work	on	all	programming	projects,	
unless	group	projects	have	been	explicitly	assigned.	Students	are	NOT	allowed	to	
distribute	code	to	each	other,	or	copy	code	from	another	individual	or	website.	
Students	ARE	allowed	to	use	any	materials	on	the	class	website,	or	in	the	textbook,	
or	ask	the	instructor	and/or	GTAs	for	assistance.

This	course	will	be	using	highly	effective	program	comparison	software	to	calculate	
the	similarity	of	all	programs	to	each	other,	and	to	homework	assignments	from	
previous	semesters.	Please	do	not	be	tempted	to	plagiarize	from	another	student.

Violations	of	the	policies	above	will	be	reported	to	the	Provost's	office	and	may	
result	in	a	ZERO	on	the	programming	project,	an	F	in	the	class,	or	suspension	from	
the	university,	depending	on	the	severity	of	the	violation	and	any	history	of	prior	
violations.


