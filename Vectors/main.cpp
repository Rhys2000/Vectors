//  main.cpp
//  Vectors
//  Created by Rhys Julian-Jones on 5/30/23.

#include <iostream>
#include <vector>

int main() {
    
    /*
    - To do just about anything of interest in a program, we need a group of data to work with. For example, our program might need:
        > A list of Twitter’s trending tags
        > A set of payment options for a car
        > A catalog of eBooks read over the last year
    - The need for storing a collection of data is endless.
    - We are familiar with data types like int and double, but how do we store a group of ints or a group of doubles?
    - In this lesson, we will start with one of the simplest, and arguably the most useful, ways of storing data in C++: a vector.
    - A vector is a sequence of elements that you can access by index.
    */
    
    /*
    - The std::vector lives in the <vector> header. So first, we need to add this line of code at the top of the program: #include <vector>
    - For review, #include is a preprocessor directive that tells the compiler to include whatever library that follows. In our case that is the standard vector library.
    - And the syntax to create a vector looks like: std::vector<type> name;
    - So to define a vector of ints called calories_today: std::vector<int> calories_today;
    - Inside the angle brackets is the data type of the vector. After the angle brackets is the name of the vector. Note: The type of the vector (i.e., what data type is stored inside) cannot be changed after the declaration.
    */
    
    // 1. The Tokyo Subway has different payment options for adults and children. We have declared a double vector already named subway_adult. Declare another double vector named subway_child.
    
    std::vector<double> subway_adult;
    // Declare another vector here:
    std::vector<double> subway_child;
    
    /*
    - Now we know how to create a vector, we can also initialize a vector, giving it values, as we are creating it in the same line.
    - For example, instead of just creating a double vector named location: std::vector<double> location;
    - We can create and initialize location with specific values: std::vector<double> location = {42.651443, -73.749302};
    - Another way we can initialize our vector is by presizing, or setting the size. Suppose we want to create and initialize a vector with two elements. However, we don’t know what values we want to add yet: std::vector<double> location(2);
    - Here, we are creating a double vector and setting the initial size to two using parentheses. Because 0.0 is the default value for double.
    */
    
    // 1. Suppose the Tokyo Subway costs are as follows:
    // Ticket    Adult    Child
    // 24-hour    ¥800    ¥400
    // 48-hour    ¥1200    ¥600
    // 72-hour    ¥1500    ¥750
    // We have initialized the subway_adult already for you. Initialize the subway_child vector with: 400, 600, 750 Note: The vector can still be double even though the values entered are ints.
    
    std::vector<double> subway_adult2 = {800, 1200, 1500};
    // Give subway_child some values:
    std::vector<double> subway_child2 = {400, 600, 750};
    
    /*
    - Now that we have a vector, how do we access an individual element? This is where index comes into play. An index refers to an element’s position within an ordered list. Vectors are 0-indexed, meaning the first element has index 0, the second index 1, and so on.
    - For example, suppose we have a char vector with all the vowels: std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        > The character at index 0 is 'a'.
        > The character at index 1 is 'e'.
        > The character at index 2 is 'i'.
        > The character at index 3 is 'o'.
        > The character at index 4 is 'u'.
    - To output each of the elements, we can do:
        > std::cout << vowels[0] << "\n";
        > std::cout << vowels[1] << "\n";
        > std::cout << vowels[2] << "\n";
        > std::cout << vowels[3] << "\n";
        > std::cout << vowels[4] << "\n";
    - Using the notation vector[index] with square brackets after the vector name and the element’s index number inside.
    */
    
    // 1. What is the element at index 2 in the subway_child vector? Find out the answer by outputting it out using std::cout.
    
    std::vector<double> subway_adult3 = {800, 1200, 1500};
    std::vector<double> subway_child3 = {400, 600, 750};
    // What number at index 2 of subway_child?
    std::cout << subway_child3[2];
    
    /*
    - Often, we start with a vector that’s either empty or a certain length. As we read or compute data we want, we can grow the vector as needed.
    - To add a new element to the “back”, or end of the vector, we can use the .push_back() function. For example, suppose we have a vector called dna with three letter codes of nucleotides: std::vector<std::string> dna = {"ATG", "ACG"};
    - We can add elements using .push_back(): dna.push_back("GTG"); dna.push_back("CTG");
    - You can also remove elements from the “back” of the vector using .pop_back(). dna.pop_back(); Notice how nothing goes inside the parentheses.
    - Note: If you have programmed in other languages, be aware that .pop_back() has no return value in C++.
    */
    
    // 1. Inside the code editor, we have a std::string vector. Add these four strings using .push_back(): "kylo", "rey", "luke", and "finn"
    
    std::vector<std::string> last_jedi;
      
    last_jedi.push_back("kylo");
    last_jedi.push_back("rey");
    last_jedi.push_back("luke");
    last_jedi.push_back("finn");
      
    std::cout << last_jedi[0] << " ";
    std::cout << last_jedi[1] << " ";
    std::cout << last_jedi[2] << " ";
    std::cout << last_jedi[3] << " ";
    
    /*
    - <std::vector> not only stores the elements; it also stores the size of the vector:
    - The .size() function returns the number of elements in the vector. For example, suppose we have a std::string vector with Sonny’s grocery list: std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
        > The string at index 0 is "Hot Pepper Jam".
        > The string at index 1 is "Dragon Fruit".
        > The string at index 2 is "Brussel Sprouts".
    - std::cout << grocery.size() << "\n"; will return 3. Notice how nothing goes in the parentheses.
    */
    
    // 1. Add a few more items to the grocery list using .push_back(). Print the size of grocery using .size(). Is it the same as you expected?
    
    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
        
    grocery.push_back("Whole Wheat Bread");
    grocery.push_back("Chocolate Ice Cream");
    std::cout << grocery.size();
    
    /*
    - So what happens when you want to change each of the values within a vector? You can use a for loop!
    - For example, suppose we have an int vector that looks like this: You can write a for loop that iterates from 0 to vector.size(). And here’s the cool part: you can use the counter of the for loop as the index! Woah.
        > for (int i = 0; i < vector.size(); i++) {
            vector[i] = vector[i] + 10;
        }
     Here, we incremented i from 0 to vector.size(), which is 3. During each iteration, we are adding 10 to the element at position i:
        > When i = 0, we added 10 to vector[0]
        > When i = 1, we added 10 to vector[1]
        > When i = 2, we added 10 to vector[2]
    */
    
    // 1. In the code editor, there is a double vector named delivery_order that is storing the prices of some food items. There is also a double variable named total that’s already declared and initialized. Write a for loop that iterates through the delivery_order vector (from 0 to delivery_order.size()). And add each order to total during each iteration.
    // 2. Output the final total using std::cout.
    
    std::vector<double> delivery_order;
      
    delivery_order.push_back(8.99);
    delivery_order.push_back(3.75);
    delivery_order.push_back(0.99);
    delivery_order.push_back(5.99);
      
    // Calculate the total using a for loop:
    double total = 0.0;

    for(int i = 0; i < delivery_order.size(); i++) {
        total += delivery_order[i];
    }
    std::cout << total << std::endl;
    
    /*
    - Congratulations! You have learned about how to store groups of data into vectors in C++.
    - Here are some of the things that we learned:
        > Vectors are a sequence of elements that you can access by an index.
        > std::vector<int> even = {2, 4, 6, 8, 10};
        > The first index in a vector is 0.
        > Some of the functions that come with vectors:
            > .push_back()
            > .pop_back()
            > .size()
        > We can use a for loop to iterate through a vector.
    */
    
    /*
    - Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".
    - There are a few simple rules for translating text to whale language:
        > There are no consonants. Only vowels excluding the letter y.
        > The u‘s and e‘s are extra long, so we must double them.
    - Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.
    - Write a whale.cpp program that accomplishes this translation using loops and vectors.
    */
    
    // 1. Let’s create a skeleton for the program. Add:
    // 2. First things first, you need an input string for the program to translate. Declare a std::string and initialize it with "turpentine and turtles" or anything you’d like.
    // 3. Whales only speak in vowels so you need a vector of vowels to be extracted from the input variable. Create a char vector named vowels and give it values of: aa, e, i, o, u. Note: Whales don’t consider ‘y’ a vowel.
    // 4. Create another vector named result. This will serve as a place to store the vowels from the input string (the translated whale talk).
    // 5. So now that we have: The input string, The vowels. As well as a place to store the resulting chars. Let’s think about the logic for a minute. We want to loop through the input string and check if each of the characters is a vowel. Let’s first write a for loop that iterates through the input string.
    // 6. But how to check if each of the characters is a vowel? Well, we have to compare each of the characters with each of the vowels. So we need another loop inside. One loop inside another loop is called a nested loop! Inside your current for loop, write another for loop inside that iterates through the vowel vector. Note: Use a different counter variable for the inner loop.
    // 7. So now as you have a nested for loop, compare each of the characters with each vowels. Write an if statement that compares input[i] with vowels[j]. If they are equal, add the character to the result vector using .push_back().
    // 8. To check your work, write another for loop that goes through the result vector and outputs each of the elements. The output should look something like: ueieaue We now have all the vowels!
    // 9. Whales double the es and the us in their language. Write an if statement that checks if each letter in the input string is equal to 'e'. If so, .push_back() input[i] to the result vector. Note: This statement belongs after the inner for loop block, but still inside the outer for loop. This is because you only want to perform this check once for every letter in the input.
    // 10. Run the program and sing the output out loud — you officially speak whale! To confirm, if your input string is “turpentine and turtles”, the whale version would read: 'uueeieeauuee'. Try other tests like 'hi, human' (to get iuua) or 'a whale of a deal!' (to get 'aaeeoaeea'). Check the hint for ideas to expand on the project further.
    
    std::string input = "turpentine and turtles";
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    for(int i = 0; i < input.size(); i++) {
        for(int j = 0; j < vowels.size(); j++) {
            if(input[i] == vowels[j]) {
                result.push_back(input[i]);
            }
       }
       if(input[i] == 'e' || input[i] == 'u') {
           result.push_back(input[i]);
       }
    }

    for(int i = 0; i < result.size(); i++) {
       std::cout << result[i];
    }
}
