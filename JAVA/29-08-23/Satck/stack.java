public class stack{
	private int maxsize;
	private int top;
	private int[]stackarray;

	public stack(int size){
		maxsize = size;
		stackarray = new int[maxsize];
		top = -1;
	}

	public void push(int value){
		if(top == maxsize -1){
			System.out.println("stack is full.Cannot push element.");
			return;
		}
		stackarray[++top] = value;
		System.out.println("Pushed"+value+"to the stack.");
	}

	public int pop(){
		if(top == -1){
			System.out.println("stack is empty.Cannot pop element.");
			return -1;
		}
		int poppedvalue = stackarray[top--];
		System.out.println("Popped"+poppedvalue+"from the stack.");
		return poppedvalue;
	}

	public void display(){
		if(top == -1){
			System.out.println("stack is empty. ");
			return;
		}
		    System.out.print("stack:");
		  for(int i=0;i<=top;i++){
			System.out.print(stackarray[i]+" ");
		  }
		    System.out.println();
	}

		public boolean empty(){
			return top == -1;
		}

		public static void main(String[]args){
			stack stack = new stack(5);

			stack.push(10);
			stack.push(20);
			stack.push(30);

			stack.display();
			stack.pop();
			stack.display();

			System.out.println("Is the stack empty?"+stack.empty());
		}
	}

