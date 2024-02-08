class Author{
	private String name;
	private String email;
	private char gender;

	Author(String name, String email, char gender){
		this.name = name;
		this.email= email;
		this.gender = gender;
	};

	@Override
	public String toString(){
		return("Name = " + name + ", Email = " + email + ", Gender = " + gender);
	}
}