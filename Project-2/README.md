```
CSCE	20 004	 – Programming	Project	 2	
Midpoint	Due	– 02/01/ 2025	 at	11:59pm
Due	Date	– 	02 / 07 /2025 at	11:59pm
```
_Note:		For	this	project,	you	are	allowed	to	use	generative	AI	in	the	creation	of	the	
multiple-choice	questions,	but	we	want	you	to	write	your	C++	program	by	yourself	
without	using	any	generative	AI	programs._

**1.	Problem	Statement:**

There	is	an	amazing	amount	of	technology	behind	learning	management	systems	
like	Blackboard.		Although	their	main	focus	is	on	delivering	online	educational	
content	(web	pages,	video,	etc.)	this	software	would	be	nearly	useless	without	an	
ability	to	host	online	exams.		The	goal	of	this	programming	project	is	to	have	
students	implement	a	very	simple	version	of	a	multiple-choice	exam.		Specific	
instructions	are	given	below.

Consider	the	following	multiple-choice	question	on	arithmetic	operations	and	
variable	assignments	in	C++.		There	are	three	logical	sections	to	this	question.		The	
first	lines	show	the	sample	C++	code	and the	question.		The	next	lines	give	the	
possible	answers.		The	last	line	prompts	the	user	for	their	answer.

```
Consider the following C++ code:
float num1 = 4.2;
int num2 = 3;
int result = num1 * num2;
What is the value of the variable result?
a) 12.
b) 12
c) 13
d) 7.
e) none of above
Enter your answer:
```
- Your	first	task	is	to	create	a	sequence	of	 **five** multiple-choice	questions	similar	to	
    the	example	above	to	test	a	student’s	understanding	of	arithmetic	operations	
    and	variable	assignments	in	C++.		Create	one	question	on	your	own,	and	then	
    login	to	OpenAI	ChatGPT	or	Microsoft Copilot	and	use	your	multiple-choice	
    question	as	a	prompt	to	create	four	more	similar	questions.		This	may	take	
    several	attempts	and	may	require	you	to	edit	the	resulting	questions.	Take	a	
    screen	shot	of	your	ChatGPT	or	Copilot	dialog	to	include	in	your	project	report.
- Your	next	task	is	to	work	out	the	correct	solutions	to	all	of	your	questions.		To	
    start	you	should	do	this	by	hand.		To	be	100%	sure	you	don’t	have	any	mistakes,	
    you	should	copy/paste	your	code	fragments	into	OnlineGDB	and	compile	and	


```
run	the	code	to	check	your	solution. You	may	randomize	the	location	of	the	
correct	answer for	each	question so	it	is	not	always	in	the	same	place.
```
- To	implement	your	online	exam, you	need	to	print	out	the	question	and	answer	
    options using	a	sequence	of	 **cout** commands.	 Remember	to	use	“\n”	or	endl	at	
    the	end	of	each	of	the	lines	of	text	in	your	output.		
- Your	next	step	is	to	read	the	user’s	answer	and	use	 **if-statements** to	check	to	see	
    if	the	user	made	the	correct	choice	or	a	mistake.		Your	program	should	print	a	
    message	to	the	user	in	either	case.
- Your	final	step	is	to	calculate	and	print	the	overall	score	the	user	has	on	their	
    five-question	exam,	and	print	a	message	saying	if	they	passed	(60%	or	higher)	or	
    failed	(below	60%).		

Most	online	exam	systems	have	an	option	to	display	questions	and	answers	in	
random	order	to	students.		You	are	 **not** required	to	implement	this	feature.		We	will	
discuss	the	techniques	to	implement	randomness	later	in	the	course.

**2.	Design:**

Your	first	design task is	to	decide	how	you	want	to	do	the	program	input/output.
What	messages	you	want	to	print,	how	to	read	inputs,	how	to	write	outputs. There	is	
no	“right	way”	or	“wrong	way”	to	do	this	but	you	want	your	program	to	be	easy	to	
use,	and	the	outputs	to	be	easy	to	understand.

Your	next design	task	is	to	decide	how	to	check	the	student’s	answers	to	see	if	they	
are	correct	or	not,	and	keep	track	of	the	student’s	score	on	the	exam. To	do	this	you	
will	need	to	add	some	variables	and	some	if-statements.

**3.	Implementation:**

Go	to	the	“Source	Code”	section	on	the	class	website	and	look	at	the	sample	
programs	in	the	“Conditional	Operations”	section	to	find	an	example	with	if-else	
statements	for	this	project.		

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

Test	your	program	with	a	variety	of	inputs	to	check	that	it	operates	correctly	for	all	
of	the	requirements	listed	above. Once	your	program	is	running	correctly,	you	
should	run	it	several	times	with	all	correct	answers	and	a	mixture	of	correct	and	
incorrect	answers	to	demonstrate	that	your	grade	calculations	are	correct.	Save	a	
copy	of	your	testing	results	in	a	file	called	“typescript.txt”	to	upload	with your	
project	report.

You	are	not required	to	add	error	checking	or	correction	in	this	program.	It	is	
always	good	to	test	a	program	to	see	what	happens	to	your	program	if	the	user	
ignores	your	instructions	and	enters	invalid	data	(like	“hello	mom”). You	should	
cut/paste	these	results	into your	project	report	to	document	what	your	program	
does	in	these	cases.

**5.	Documentation:**

When	you	have	completed	your	C++	program,	write	a	short	report	using	the	
“Programming Project	Report	Template”	describing	what	the	objectives	were,	what	
you	did,	and	the	status	of	the	program.	 Include	any	ChatGPT	or	Copilot	screenshots	
you	have	in	the	project	report.

Does	your	program work	properly	for	all	test	cases?	Are	there	any	known	
problems?	Save	this	project	report	in	a	separate	document to	be	submitted	
electronically.

**6.	Project	Submission:**

In	this	class,	we	will	be	using	electronic	project	submission	to	make	sure	that	all	
students	hand	their	programming	projects	and	labs	on	time,	and	to	perform	
automatic	plagiarism	analysis	of	all	programs	that	are	submitted.	

When	you	have	completed	the	tasks	above	go	to	Blackboard	to	upload your	
documentation	(report.docx	or	report.pdf),	testing	output	(typescript.txt),	and	your	
C++	code (midpoint.cpp	and	project.cpp).	Make	sure	you	include	your	name	in	all	of	
these	documents.		Do	not upload	an	executable	version	of	your	program.

The	dates	on	your	electronic	submission	will	be	used	to	verify	that	you	met	the	due	
date	above.	All	late	projects	will	receive	reduced	credit:

```
10%	off	if	less	than	1	day	late,
20%	off	if	less	than	2	days	late,
30%	off	if	less	than	3	days	late,
no	credit	if	more	than	3	days	late.	
```

You	will	receive	partial	credit	for	all	programs	that	compile	even	if	they	do	not	meet	
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

