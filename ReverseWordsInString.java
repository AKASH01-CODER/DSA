public class ReverseWordsInString{
    
    public static String reverseWords(String str)
    {
        String words[] = str.split(" ");
        StringBuilder reversedString = new StringBuilder();
        
        for (String word : words)
        {
            StringBuilder reversedWord = new StringBuilder(word);
            reversedWord.reverse();
            // Append the reversed word to the result along with a space
            reversedString.append(reversedWord).append(" ");
        }
        
        // Return the result after trimming any extra space at the end
        return reversedString.toString().trim();
    }
    
    public static void main(String[] args)
    {
        String input = "Waterfall in city";
        System.out.println("Input String: "+ input);
        String result = reverseWords(input);
        System.out.println("Reversed words string: "+ result);
    }
}
