/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:15:00 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 18:20:32 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <fstream>
#include <cstdlib>

void printTest(std::string testName)
{
	std::cout << "\nTest: " << testName << std::endl;
	std::cout << "------------------\n";
}

int main(void)
{

	// Test 1: Simple replacement
	printTest("Simple word replacement");
	{
		std::string content = "Hello darling you are amazing";
		std::string result = replace(content, "darling", "beautiful");
		std::cout << "Original: " << content << std::endl;
		std::cout << "Result:   " << result << std::endl;
		std::cout << "Expected: Hello beautiful you are amazing" << std::endl;
	}

	// Test 2: Multiple occurrences
	printTest("Multiple occurrences");
	{
		std::string content = "hello babe hello babe";
		std::string result = replace(content, "hello", "coucou");
		std::cout << "Original: " << content << std::endl;
		std::cout << "Result:   " << result << std::endl;
		std::cout << "Expected: coucou babe coucou babe" << std::endl;
	}

	// Test 3: Empty string
	printTest("Empty string");
	{
		std::string content = "";
		std::string result = replace(content, "hello", "hola");
		std::cout << "Original: (empty)" << std::endl;
		std::cout << "Result:   " << (result.empty() ? "(empty)" : result) << std::endl;
		std::cout << "Expected: (empty)" << std::endl;
	}

	// Test 4: Empty search string
	printTest("Empty search string");
	{
		std::string content = "Hello darling";
		std::string result = replace(content, "", "babe");
		std::cout << "Original: " << content << std::endl;
		std::cout << "Result:   " << result << std::endl;
		std::cout << "Expected: Hello darling" << std::endl;
	}

	// Test 5: Empty replacement string
	printTest("Empty replacement string");
	{
		std::string content = "Hello darling you are amazing";
		std::string result = replace(content, "darling", "");
		std::cout << "Original: " << content << std::endl;
		std::cout << "Result:   " << result << std::endl;
		std::cout << "Expected: Hello  you are amazing" << std::endl;
	}

	// Test 6: No match found
	printTest("No match found");
	{
		std::string content = "Hello darling";
		std::string result = replace(content, "coucou", "toi");
		std::cout << "Original: " << content << std::endl;
		std::cout << "Result:   " << result << std::endl;
		std::cout << "Expected: Hello darling" << std::endl;
	}

	// Test 7: Longer replacement
	printTest("Replacement with longer string");
	{
		std::string content = "I like cats";
		std::string result = replace(content, "cats", "elephants");
		std::cout << "Original: " << content << std::endl;
		std::cout << "Result:   " << result << std::endl;
		std::cout << "Expected: I like elephants" << std::endl;
	}

	// Test 8: Shorter replacement
	printTest("Replacement with shorter string");
	{
		std::string content = "I like elephants";
		std::string result = replace(content, "elephants", "cats");
		std::cout << "Original: " << content << std::endl;
		std::cout << "Result:   " << result << std::endl;
		std::cout << "Expected: I like cats" << std::endl;
	}

	// Test 9: Multi-line content
	printTest("Multi-line content");
	{
		std::string content = "line1\nline2\nline3";
		std::string result = replace(content, "line", "LINE");
		std::cout << "Original:\n" << content << std::endl;
		std::cout << "Result:\n" << result << std::endl;
		std::cout << "Expected:\nLINE1\nLINE2\nLINE3" << std::endl;
	}

	return (0);
}
