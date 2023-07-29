
// can't directly call destructors on atomic types
typedef int intredirect;

int main(void)
{
	intredirect value = 6;
	value.~intredirect();
	return (int)value;
}

