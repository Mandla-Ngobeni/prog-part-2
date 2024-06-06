using system;

public class Ingredient
{
    public string name {get;set;}
    public double Quantity {get;set;}
    public string Unit {get;set;}
}
 public class Recipe
 {
    private ingredient[] ingredients;
    private string[] steps;

    public Recipe()
    {
        // initialize arrays with default size  or use dynamic data structures if preferred
        ingredients = new Ingredient[0];
        steps = new string[0];


 }
 
 public void AddIngredient( string name, double  quantity , string unit)
 {
    // Add a new ingredient to the array
    Ingredient newIngredient = new Ingredient {Name= name,Quantity= quantity, Unit= unit};
    Array.Resize(ref ingredients,ingredients.Length + 1);
    ingredients[ingredients.Length - 1] = newIngredient;

 }

 public void AddStep(string stepDescription)
 {
    // Add a new step to the array
    Array.Resize(ref steps, steps.length + 1);
    steps[steps.Length - 1] = stepDescription;
 }
 public void DisplayRecipe()
 {
    // Display the full recipe , including ingredients and steps 
    Console.WriteLine("Recipe:");
    Console.WriteLine("Ingredients:");
    foreach( var ingredient in ingredients)
 }

 Console.WriteLine($"{ingredient.Quantity}{ingredient.Unit} of {ingredients.Name}");
 {
     Console.WriteLine("Stepa:");
     for (int i = 0; i<steps.Length; i++)
 }

 Console.WriteLine($"{i+1}.{steps[i]}");
 }

 public void ScaleRecipe (double factor)
 {
   // Scale all ingredient quantities by the given factor
   foreach (var ingredient in ingredients)
   {
      ingredient.Quantity *= factor

   }

   }  

   public void ResetQuantities() 
   {
      // Reset all ingredient quantities to their original values

      // This assumes that the original values are stored somewhere , which we could implement if needed 
      
      // For now we'll just clear the ingredients array and start fresh 

      ingredients = new Ingredient[0];
   }
   public void ClearRecipe ()
   {
      // Clear all data to enter a new recipe
       
       ingredients = new Ingredient[0];
       steps = new string[0];

   }
    
    
    class Program
    {
      static void Main(string[] args)
      

      }
      {
         // Mian program logic goes here
         // you can create a Recipe object and interact with it based on user input

      }
      
    

 


 
 



