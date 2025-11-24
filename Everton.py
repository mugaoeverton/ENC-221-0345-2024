class Neighbor:
    def __init__(self, name, age, height, skin_color, personality, hobby, education):
        self.name = name
        self.age = age
        self.height = height
        self.skin_color = skin_color
        self.personality = personality
        self.hobby = hobby
        self.education = education

    def describe(self):
        print(f"--- Neighbour's Details: {self.name} ---")
        print(f"Name: {self.name}")
        print(f"Age: {self.age} years old")
        print(f"Height: {self.height}")
        print(f"Skin Color: {self.skin_color}")
        print(f"Personality: He is very {self.personality}.")
        print(f"Hobby: His main hobby is {self.hobby}.")
        print(f"Educational Level: They have a {self.education} degree.")
        print("-" * (len(self.name) + 26))
my_neighbor = Neighbor(
       name="Duke",
       age=21,
       height="5FT",
       skin_color="Olive skin",
       personality="humble",
       hobby="gaming",
       education="Bachelor's Degree"
)

my_neighbor.describe()
