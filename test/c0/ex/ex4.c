/* 例子4：PL/0程序的过程可以嵌套定义，但C不可 */
/*var a;
procedure b;
	procedure c;
	begin
	end;
begin
	call c;
end;

begin
	call b
end.*/

void c()
{
}

void b()
{
	c();
}

void main()
{
	b();
}
